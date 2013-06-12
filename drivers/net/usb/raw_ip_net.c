/*
 * raw_ip_net.c
 *
 * USB network driver for RAW-IP modems.
 *
 * Copyright (c) 2011-2012, NVIDIA Corporation.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#include <linux/mii.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/moduleparam.h>
#include <linux/kernel.h>
#include <linux/fs.h>
#include <linux/errno.h>
#include <linux/types.h>
#include <linux/etherdevice.h>
#include <linux/usb.h>
#include <linux/usb/usbnet.h>

#define BASEBAND_USB_NET_DEV_NAME		"rmnet%d"

/* ethernet packet ethertype for IP packets */
#define NET_IP_ETHERTYPE		{0x08, 0x00}

#define	TX_TIMEOUT		10

#ifndef USB_NET_BUFSIZ
#define USB_NET_BUFSIZ				8192
#endif  /* USB_NET_BUFSIZ */

/* maximum interface number supported */
#define MAX_INTFS	3

MODULE_LICENSE("GPL");

/* To support more rmnet interfaces, increase the default max_intfs or
 * pass kernel module parameter.
 * e.g. insmod raw_ip_net.ko max_intfs=5
 */
<<<<<<< HEAD
static int max_intfs = 3;	/* default number of interfaces */

static unsigned long usb_net_raw_ip_intf[MAX_INTFS] = { 3, 5, 7, 9, 11};
=======
static int max_intfs = 3;	/* xmm6260 default number of interfaces */

static unsigned long usb_net_raw_ip_intf[MAX_INTFS] = { 3, 5, 7};
>>>>>>> d804779... 264 to 298 patch
unsigned long usb_net_raw_ip_rx_debug;
unsigned long usb_net_raw_ip_tx_debug;

/* max_intfs should not be changed at runtime */
module_param(max_intfs, int, S_IRUGO);
MODULE_PARM_DESC(max_intfs, "usb net (raw-ip) - max. interfaces supported");
module_param(usb_net_raw_ip_rx_debug, ulong, 0644);
MODULE_PARM_DESC(usb_net_raw_ip_rx_debug, "usb net (raw-ip) - rx debug");
module_param(usb_net_raw_ip_tx_debug, ulong, 0644);
MODULE_PARM_DESC(usb_net_raw_ip_tx_debug, "usb net (raw-ip) - tx debug");

<<<<<<< HEAD
struct baseband_usb {
	/* semaphore between disconnect/suspend/resume */
	struct semaphore sem;
	/* instance */
	int baseband_index;
	/* network statistics */
	struct net_device_stats stats;
	/* usb context */
	struct {
		struct usb_driver *driver;
		struct usb_device *device;
		struct usb_interface *interface;
		struct {
			struct {
				unsigned int in;
				unsigned int out;
			} isoch, bulk, interrupt;
		} pipe;
		/* currently active rx urb */
		struct urb *rx_urb;
		/* currently active tx urb */
		struct urb *tx_urb;
		struct usb_anchor tx_urb_deferred;
		struct workqueue_struct *tx_workqueue;
		struct work_struct tx_work;
	} usb;
	/* re-usable rx urb */
	struct urb *urb_r;
	void *buff;
	/* suspend count */
	int susp_count;

	spinlock_t autopm_lock;
	int autopm_refcnt;
};

static struct baseband_usb *baseband_usb_net[MAX_INTFS] = { 0, 0, 0, 0, 0};
=======
>>>>>>> d804779... 264 to 298 patch

static void find_usb_pipe(struct usbnet *usbnet)
{
	struct usb_device *usbdev = usbnet->udev;
	struct usb_interface *intf = usbnet->intf;
	unsigned char numendpoint = intf->cur_altsetting->desc.bNumEndpoints;
	struct usb_host_endpoint *endpoint = intf->cur_altsetting->endpoint;
	unsigned char n;

	for (n = 0; n < numendpoint; n++) {
		if (usb_endpoint_is_bulk_in(&endpoint[n].desc)) {
			usbnet->in = usb_rcvbulkpipe(usbdev,
				endpoint[n].desc.bEndpointAddress);
			pr_debug("usbnet : endpoint[%d] bulk in , pipe.bulk.in = %d\n"
					, n, usbnet->in);
		} else if (usb_endpoint_is_bulk_out(&endpoint[n].desc)) {
			usbnet->out = usb_sndbulkpipe(usbdev,
				endpoint[n].desc.bEndpointAddress);
			pr_debug("usbnet : endpoint[%d] bulk in , pipe.bulk.out = %d\n"
					, n, usbnet->out);
		} else
			pr_info("endpoint[%d] skipped\n", n);
	}
}

static struct net_device_stats *baseband_usb_netdev_get_stats(
				struct net_device *dev)
{
	pr_debug("[%s]\n", __func__);
	return &dev->stats;
}

static struct net_device_ops usb_net_raw_ip_ops = {
	.ndo_open =		usbnet_open,
	.ndo_stop =		usbnet_stop,
	.ndo_start_xmit =	usbnet_start_xmit,
	.ndo_get_stats = baseband_usb_netdev_get_stats,
};

static void usb_autopm_get_ex(struct baseband_usb *usb)
{
	unsigned long flag;
	if (!usb_autopm_get_interface_async(usb->usb.interface)) {
		spin_lock_irqsave(&usb->autopm_lock, flag);
		usb->autopm_refcnt++;
		spin_unlock_irqrestore(&usb->autopm_lock, flag);
	} else
		pr_debug("%s autopm_get fails (%d)\n",
				__func__, usb->autopm_refcnt);
}


static void usb_autopm_put_ex(struct baseband_usb *usb)
{
	unsigned long flag;

	spin_lock_irqsave(&usb->autopm_lock, flag);
	if (usb->autopm_refcnt) {
		usb->autopm_refcnt--;
		spin_unlock_irqrestore(&usb->autopm_lock, flag);
		usb_autopm_put_interface_async(usb->usb.interface);
	} else {
		spin_unlock_irqrestore(&usb->autopm_lock, flag);
		pr_debug("%s autopm_put skipped (%d)\n",
				__func__, usb->autopm_refcnt);
	}
}

static int baseband_usb_driver_probe(struct usb_interface *intf,
	const struct usb_device_id *id)
{
	int j;
	int status;

	for (j = 0; j < max_intfs; j++) {
		if (usb_net_raw_ip_intf[j] ==
				intf->cur_altsetting->desc.bInterfaceNumber) {
			pr_info("%s: raw_ip using interface %d\n", __func__
				, intf->cur_altsetting->desc.bInterfaceNumber);
			break;
		}
	}

	if (j == max_intfs)
		return -ENODEV;

	status = usbnet_probe(intf, id);
	if (status < 0) {
		dev_info(&intf->dev, "usbnet_probe failed %d\n", status);
		goto out;
	}
out:
	return status;
}

static void baseband_usb_driver_disconnect(struct usb_interface *intf)
{
	usbnet_disconnect(intf);
}

#ifdef CONFIG_PM
static int baseband_usb_driver_suspend(struct usb_interface *intf,
	pm_message_t message)
{
	return usbnet_suspend(intf, message);
}

static int baseband_usb_driver_resume(struct usb_interface *intf)
{
	return usbnet_resume(intf);
}

static int baseband_usb_driver_reset_resume(struct usb_interface *intf)
{
	pr_debug("%s intf %p\n", __func__, intf);
	return baseband_usb_driver_resume(intf);
}
#endif /* CONFIG_PM */

static int rawipnet_bind(struct usbnet *usbnet, struct usb_interface *iface)
{
<<<<<<< HEAD
	struct baseband_usb *usb;
	int i;

	pr_debug("baseband_usb_open {\n");

	/* allocate baseband usb structure */
	usb = kzalloc(sizeof(struct baseband_usb),
		GFP_KERNEL);
	if (!usb)
		return (struct baseband_usb *) 0;

	/* create semaphores */
	sema_init(&usb->sem, 1);

	spin_lock_init(&usb->autopm_lock);

	/* open usb interface */
	usb->baseband_index = index;
	usb->usb.driver = &baseband_usb_driver;
	if (!g_usb_interface[index]) {
		/* wait for usb probe */
		for (i = 0; i < 50; i++)
			if (!g_usb_interface[index])
				msleep(20);
		if (!g_usb_interface[index]) {
			pr_err("can't open usb: !g_usb_interface[%d]\n", index);
			kfree(usb);
			return NULL;
		}
	}
	usb->usb.device = interface_to_usbdev(g_usb_interface[index]);
	usb->usb.interface = g_usb_interface[index];
	find_usb_pipe(usb);
	usb->usb.rx_urb = (struct urb *) 0;
	usb->usb.tx_urb = (struct urb *) 0;
	g_usb_interface[index] = (struct usb_interface *) 0;
	pr_debug("usb->usb.driver->name %s\n", usb->usb.driver->name);
	pr_debug("usb->usb.device %p\n", usb->usb.device);
	pr_debug("usb->usb.interface %p\n", usb->usb.interface);
	pr_debug("usb->usb.pipe.isoch.in %x\n", usb->usb.pipe.isoch.in);
	pr_debug("usb->usb.pipe.isoch.out %x\n", usb->usb.pipe.isoch.out);
	pr_debug("usb->usb.pipe.bulk.in %x\n", usb->usb.pipe.bulk.in);
	pr_debug("usb->usb.pipe.bulk.out %x\n", usb->usb.pipe.bulk.out);
	pr_debug("usb->usb.pipe.interrupt.in %x\n", usb->usb.pipe.interrupt.in);
	pr_debug("usb->usb.pipe.interrupt.out %x\n",
		usb->usb.pipe.interrupt.out);

	pr_debug("baseband_usb_open }\n");
	return usb;
}

void baseband_usb_close(struct baseband_usb *usb)
{
	pr_debug("baseband_usb_close {\n");

	/* check input */
	if (!usb)
		return;

	/* close usb driver */
	usb->usb.driver = (struct usb_driver *) 0;

	/* destroy semaphores */
	memset(&usb->sem, 0, sizeof(usb->sem));

	/* free baseband usb structure */
	kfree(usb);

	pr_debug("baseband_usb_close }\n");
}

static int baseband_usb_netdev_init(struct net_device *dev)
{
	pr_debug("baseband_usb_netdev_init\n");
=======
	struct net_device *netdev = usbnet->net;
	/* net device setting */
	netdev->netdev_ops = &usb_net_raw_ip_ops;
	netdev->watchdog_timeo = TX_TIMEOUT;
	random_ether_addr(netdev->dev_addr);

	/* usbnet setting */
	find_usb_pipe(usbnet);
	usbnet->rx_urb_size = USB_NET_BUFSIZ;
>>>>>>> d804779... 264 to 298 patch
	return 0;
}

static struct sk_buff *rawipnet_usb_tx_fixup(struct usbnet *dev,
		struct sk_buff *skb, gfp_t flags)
{
	skb_pull(skb, 14);
	return skb;
}

static int rawipnet_usb_rx_fixup(struct usbnet *dev
		, struct sk_buff *skb)
{
<<<<<<< HEAD
	pr_debug("baseband_usb_netdev_open\n");
	netif_start_queue(dev);
	return 0;
}

static int baseband_usb_netdev_stop(struct net_device *dev)
{
	pr_debug("baseband_usb_netdev_stop\n");
	netif_stop_queue(dev);
	return 0;
}

static netdev_tx_t baseband_usb_netdev_start_xmit(
	struct sk_buff *skb, struct net_device *dev)
{
	int i;
	struct baseband_usb *usb;
	int err;

	pr_debug("baseband_usb_netdev_start_xmit\n");

	/* check input */
	if (!skb) {
		pr_err("no skb\n");
		return NETDEV_TX_BUSY;
	}
	if (!dev) {
		pr_err("no net dev\n");
		return NETDEV_TX_BUSY;
	}

	/* find index of network device which is transmitting */
	for (i = 0; i < max_intfs; i++) {
		if (usb_net_raw_ip_dev[i] == dev)
			break;
	}
	if (i >= max_intfs) {
		pr_err("unknown net dev %p\n", dev);
		return NETDEV_TX_BUSY;
	}
	usb = baseband_usb_net[i];

	/* autoresume if suspended */
	if (usb->usb.interface) {
		usb_autopm_get_ex(usb);
	} else {
		pr_err("%s: tx get interface error\n", __func__);
		netif_stop_queue(dev);
		usb->stats.tx_errors++;
		return NETDEV_TX_BUSY;
	}

	/* submit tx urb */
	err = usb_net_raw_ip_tx_urb_submit(usb, skb);
	if (err < 0) {
		pr_err("%s: tx urb submit error\n", __func__);
		netif_stop_queue(dev);
		usb->stats.tx_errors++;
		return NETDEV_TX_BUSY;
	}

	return NETDEV_TX_OK;
}

static struct net_device_stats *baseband_usb_netdev_get_stats(
				struct net_device *dev)
{
	int i;
	for (i = 0; i < max_intfs; i++) {
		if (dev == usb_net_raw_ip_dev[i]) {
			pr_debug("%s idx(%d)\n", __func__, i);
			return &baseband_usb_net[i]->stats;
		}
	}
	pr_debug("%s mismatch dev, default idx(0)\n", __func__);
	return &baseband_usb_net[0]->stats;
}

static struct net_device_ops usb_net_raw_ip_ops = {
	.ndo_init =		baseband_usb_netdev_init,
	.ndo_uninit =		baseband_usb_netdev_uninit,
	.ndo_open =		baseband_usb_netdev_open,
	.ndo_stop =		baseband_usb_netdev_stop,
	.ndo_start_xmit =	baseband_usb_netdev_start_xmit,
	.ndo_get_stats = baseband_usb_netdev_get_stats,
};

static int usb_net_raw_ip_rx_urb_submit(struct baseband_usb *usb)
{
	struct urb *urb;
	void *buf;
	int err;

	pr_debug("usb_net_raw_ip_rx_urb_submit { usb %p\n", usb);

	/* check input */
	if (!usb) {
		pr_err("%s: !usb\n", __func__);
		return -EINVAL;
	}
	if (!usb->usb.interface) {
		pr_err("usb interface disconnected - not submitting rx urb\n");
		return -EINVAL;
	}
	if (usb->usb.rx_urb) {
		pr_err("previous urb still active\n");
		return -EBUSY;
	}
	if (!usb->urb_r || !usb->buff) {
		pr_err("no reusable rx urb found\n");
		return -ENOMEM;
	}

	/* reuse rx urb */
	urb = usb->urb_r;
	buf = usb->buff;
	usb_fill_bulk_urb(urb, usb->usb.device, usb->usb.pipe.bulk.in,
		buf, USB_NET_BUFSIZ,
		usb_net_raw_ip_rx_urb_comp,
		usb);
	urb->transfer_flags = 0;

	/* submit rx urb */
	usb_mark_last_busy(usb->usb.device);
	usb->usb.rx_urb = urb;
	err = usb_submit_urb(urb, GFP_ATOMIC);
	if (err < 0) {
		pr_err("usb_submit_urb() failed - err %d\n", err);
		usb->usb.rx_urb = (struct urb *) 0;
		return err;
	}

	pr_debug("usb_net_raw_ip_rx_urb_submit }\n");
	return err;
}

static void usb_net_raw_ip_rx_urb_comp(struct urb *urb)
{
	struct baseband_usb *usb;
	int i;
	struct sk_buff *skb;
	unsigned char *dst;
	unsigned char ethernet_header[14] = {
		/* Destination MAC */
		0x00, 0x00,
		0x00, 0x00,
		0x00, 0x00,
		/* Source MAC */
		0x00, 0x00,
		0x00, 0x00,
		0x00, 0x00,
		/* EtherType */
		NET_IP_ETHERTYPE,
	};

	pr_debug("usb_net_raw_ip_rx_urb_comp { urb %p\n", urb);

	/* check input */
	if (!urb) {
		pr_err("no urb\n");
		return;
	}
	usb = (struct baseband_usb *)urb->context;
	i = usb->baseband_index;
	switch (urb->status) {
	case 0:
		break;
	case -ESHUTDOWN:
		/* fall through */
		pr_debug("%s: rx urb %p - link shutdown %d\n",
			__func__, urb, urb->status);
		goto err_exit;
	case -EPROTO:
		pr_debug("%s: rx urb %p - link shutdown %d EPROTO\n",
			__func__, urb, urb->status);
		goto err_exit;
	default:
		pr_debug("%s: rx urb %p - status %d\n",
			__func__, urb, urb->status);
		break;
	}

	/* put rx urb data in rx buffer */
	if (urb->actual_length > 0) {
		pr_debug("usb_net_raw_ip_rx_urb_comp - "
			"urb->actual_length %d\n", urb->actual_length);
		/* allocate skb with space for
		 * - dummy ethernet header
		 * - rx IP packet from modem
		 */
		skb = netdev_alloc_skb(usb_net_raw_ip_dev[i],
			NET_IP_ALIGN + 14 + urb->actual_length);
		if (skb) {
			/* generate a dummy ethernet header
			 * since modem sends IP packets without
			 * any ethernet headers
			 */
			memcpy(ethernet_header + 0,
				usb_net_raw_ip_dev[i]->dev_addr, 6);
			memcpy(ethernet_header + 6,
				"0x01\0x02\0x03\0x04\0x05\0x06", 6);
			/* fill skb with
			 * - dummy ethernet header
			 * - rx IP packet from modem
			 */
			skb_reserve(skb, NET_IP_ALIGN);
			dst = skb_put(skb, 14);
			memcpy(dst, ethernet_header, 14);
			if ((((unsigned char *) urb->transfer_buffer)[0]
				& 0xf0) == 0x60) {
				/* ipv6 ether type */
				dst[12] = 0x86;
				dst[13] = 0xdd;
			}
			dst = skb_put(skb, urb->actual_length);
			memcpy(dst, urb->transfer_buffer, urb->actual_length);
			skb->protocol = eth_type_trans(skb,
				usb_net_raw_ip_dev[i]);
			pr_debug("%s: ntohs(skb->protocol) %04x (%s)\n",
				__func__, ntohs(skb->protocol),
				(ntohs(skb->protocol) == 0x0800)
					? "IPv4"
					: (ntohs(skb->protocol) == 0x86dd)
					? "IPv6"
					: "unknown");
			pr_debug("%s: %02x %02x %02x %02x\n", __func__,
				((unsigned char *)urb->transfer_buffer)[0],
				((unsigned char *)urb->transfer_buffer)[1],
				((unsigned char *)urb->transfer_buffer)[2],
				((unsigned char *)urb->transfer_buffer)[3]);
			/* pass skb to network stack */
			if (netif_rx(skb) < 0) {
				pr_err("usb_net_raw_ip_rx_urb_comp_work - "
					"netif_rx(%p) failed\n", skb);
				kfree_skb(skb);
				usb->stats.rx_errors++;
			} else {
				usb->stats.rx_packets++;
				usb->stats.rx_bytes +=
				    (14 + urb->actual_length);
			}
		} else {
			pr_err("usb_net_raw_ip_rx_urb_comp_work - "
				"netdev_alloc_skb() failed\n");
		}
=======
	unsigned char *dst;
	unsigned char ethernet_header[14] = {
				/* Destination MAC */
				0x00, 0x00,
				0x00, 0x00,
				0x00, 0x00,
				/* Source MAC */
				0x00, 0x00,
				0x00, 0x00,
				0x00, 0x00,
				/* EtherType */
				NET_IP_ETHERTYPE,
			};

	if ((((unsigned char *) skb->data)[0]
		& 0xf0) == 0x60) {
		/* ipv6 ether type */
		ethernet_header[12] = 0x86;
		ethernet_header[13] = 0xdd;
	}

	if (!pskb_expand_head(skb, 14, 0, GFP_ATOMIC)) {
		memcpy(ethernet_header + 0,
				dev->net->dev_addr, 6);
		memcpy(ethernet_header + 6,
			"0x01\0x02\0x03\0x04\0x05\0x06", 6);
		dst = skb_push(skb, 14);
		memcpy(dst, ethernet_header, 14);
	} else {
		pr_info("usbnet: usb_net_raw_ip_rx_urb_comp_work - "
			"pskb_expand_head() failed\n");
		return 0;
>>>>>>> d804779... 264 to 298 patch
	}
	return 1;
}

static int rawipnet_usb_manage_power(struct usbnet *dev, int on)
{
	return 0;
}

<<<<<<< HEAD
static void usb_net_raw_ip_free_rx_urb(struct baseband_usb *usb)
{
	pr_debug("usb_net_raw_ip_free_rx_urb {\n");

	/* check input */
	if (!usb) {
		pr_err("%s: !usb\n", __func__);
		return;
	}

	/* free reusable rx urb */
	if (usb->urb_r) {
		usb_free_urb(usb->urb_r);
		usb->urb_r = (struct urb *) 0;
	}
	if (usb->buff) {
		kfree(usb->buff);
		usb->buff = (void *) 0;
	}

	pr_debug("usb_net_raw_ip_free_rx_urb }\n");
}

static int usb_net_raw_ip_tx_urb_submit(struct baseband_usb *usb,
	struct sk_buff *skb)
{
	struct urb *urb;
	unsigned char *buf;
	int err;

	pr_debug("usb_net_raw_ip_tx_urb_submit {\n");

	/* check input */
	if (!usb) {
		pr_err("%s: !usb\n", __func__);
		return -EINVAL;
	}
	if (!usb->usb.interface) {
		pr_err("usb interface disconnected - not submitting tx urb\n");
		return -EINVAL;
	}
	if (!skb) {
		pr_err("%s: !skb\n", __func__);
		usb_autopm_put_ex(usb);
		return -EINVAL;
	}

	/* allocate urb */
	urb = usb_alloc_urb(0, GFP_ATOMIC);
	if (!urb) {
		pr_err("usb_alloc_urb() failed\n");
		usb_autopm_put_ex(usb);
		return -ENOMEM;
	}
	buf = kzalloc(skb->len - 14, GFP_ATOMIC);
	if (!buf) {
		pr_err("usb buffer kzalloc() failed\n");
		usb_free_urb(urb);
		usb_autopm_put_ex(usb);
		return -ENOMEM;
	}
	err = skb_copy_bits(skb, 14, buf, skb->len - 14);
	if (err < 0) {
		pr_err("skb_copy_bits() failed - %d\n", err);
		kfree(buf);
		usb_free_urb(urb);
		usb_autopm_put_ex(usb);
		return err;
	}
	usb_fill_bulk_urb(urb, usb->usb.device, usb->usb.pipe.bulk.out,
		buf, skb->len - 14,
		usb_net_raw_ip_tx_urb_comp,
		usb);
	urb->transfer_flags = URB_ZERO_PACKET;
	pr_debug("%s: ntohs(skb->protocol) %04x (%s)\n",
		__func__, ntohs(skb->protocol),
		(ntohs(skb->protocol) == 0x0800)
			? "IPv4"
			: (ntohs(skb->protocol) == 0x86dd)
			? "IPv6"
			: "unknown");
	pr_debug("%s: %02x %02x %02x %02x\n", __func__,
		((unsigned char *)urb->transfer_buffer)[0],
		((unsigned char *)urb->transfer_buffer)[1],
		((unsigned char *)urb->transfer_buffer)[2],
		((unsigned char *)urb->transfer_buffer)[3]);

	/* queue tx urb work */
	usb_anchor_urb(urb, &usb->usb.tx_urb_deferred);
	queue_work(usb->usb.tx_workqueue, &usb->usb.tx_work);

	/* free skb */
	consume_skb(skb);

	pr_debug("usb_net_raw_ip_tx_urb_submit }\n");
	return 0;
}

static void usb_net_raw_ip_tx_urb_work(struct work_struct *work)
{
	struct baseband_usb *usb
		= container_of(work, struct baseband_usb, usb.tx_work);
	struct urb *urb;
	int err;

	pr_debug("usb_net_raw_ip_tx_urb_work {\n");

	/* check if tx urb(s) queued */
	if (usb == NULL ||
		(!usb->usb.tx_urb &&
		usb_anchor_empty(&usb->usb.tx_urb_deferred))) {
		pr_debug("%s: nothing to do!\n", __func__);
		return;
	}

	/* check if usb interface disconnected */
	if (!usb->usb.interface) {
		pr_err("%s: not submitting tx urb -interface disconnected\n",
			__func__);
		return;
	}

	/* check if suspended */
	if (usb->susp_count > 0) {
		pr_debug("%s: usb->susp_count %d > 0 (suspended)\n",
			__func__, usb->susp_count);
		return;
	}

	/* submit queued tx urb(s) */
	while ((urb = usb_get_from_anchor(&usb->usb.tx_urb_deferred))
		!= (struct urb *) 0) {
		/* decrement count from usb_get_from_anchor() */
		usb_free_urb(urb);
		/* check if usb interface disconnected */
		if (!usb->usb.interface) {
			pr_err("%s: not submitting tx urb %p"
				" - interface disconnected\n",
				__func__, urb);
			if (urb->transfer_buffer) {
				kfree(urb->transfer_buffer);
				urb->transfer_buffer = (void *) 0;
			}
			usb_free_urb(urb);
			usb->stats.tx_errors++;
			continue;
		}
		/* autoresume before tx */
		usb_mark_last_busy(usb->usb.device);
		/* submit tx urb */
		err = usb_submit_urb(urb, GFP_ATOMIC);
		if (err < 0) {
			pr_err("%s: usb_submit_urb(%p) failed - err %d\n",
				__func__, urb, err);
			usb_autopm_put_ex(usb);
			if (urb->transfer_buffer) {
				kfree(urb->transfer_buffer);
				urb->transfer_buffer = (void *) 0;
			}
			usb_free_urb(urb);
			usb->stats.tx_errors++;
			continue;
		}
		/* free tx urb
		 * - actual urb free occurs when refcnt which was incremented
		 *   in usb_submit_urb is decremented to 0 (usually after urb
		 *   completion function returns)
		 * - tx urb transfer buffer will be freed in urb completion
		 *   function
		 */
		usb_free_urb(urb);
	}

	pr_debug("usb_net_raw_ip_tx_urb_work }\n");
}

static void usb_net_raw_ip_tx_urb_comp(struct urb *urb)
{
	struct baseband_usb *usb;

	pr_debug("usb_net_raw_ip_tx_urb_comp {\n");

	/* check input */
	if (!urb) {
		pr_err("no urb\n");
		return;
	}
	usb = (struct baseband_usb *)urb->context;
	switch (urb->status) {
	case 0:
		break;
	case -ENOENT:
		/* fall through */
	case -ESHUTDOWN:
		/* fall through */
	case -EPROTO:
		pr_debug("%s: tx urb %p - link shutdown %d\n",
			__func__, urb, urb->status);
		usb_autopm_put_ex(usb);
		goto err_exit;
	default:
		pr_debug("%s: tx urb %p - status %d\n",
			__func__, urb, urb->status);
		break;
	}
	if (urb->status)
		usb->stats.tx_errors++;
	else {
		usb->stats.tx_packets++;
		usb->stats.tx_bytes += urb->transfer_buffer_length;
	}

	/* autosuspend after tx completed */
	if (!usb->usb.interface) {
		pr_err("%s: usb interface disconnected"
			" before tx urb completed!\n",
			__func__);
		goto err_exit;
	}
	usb_autopm_put_ex(usb);
=======
static const struct driver_info baseband_usb_driver_info = {
	.description   = "raw ip net device",
	.flags = FLAG_RMNET,
	.bind          = rawipnet_bind,
	.tx_fixup      = rawipnet_usb_tx_fixup,
	.rx_fixup      = rawipnet_usb_rx_fixup,
	.manage_power	= rawipnet_usb_manage_power,

};

static struct usb_device_id baseband_usb_driver_id_table[] = {
	/* xmm modem vid, pid */
	{
		USB_DEVICE(0x1519, 0x0020),
		.driver_info = (unsigned long)&baseband_usb_driver_info,
	},
	{ },
};

static struct usb_driver baseband_usb_driver = {
		.name = "bb_raw_ip_net",
		.probe = baseband_usb_driver_probe,
		.disconnect = baseband_usb_driver_disconnect,
		.id_table = baseband_usb_driver_id_table,
#ifdef CONFIG_PM
		.suspend = baseband_usb_driver_suspend,
		.resume = baseband_usb_driver_resume,
		.reset_resume = baseband_usb_driver_reset_resume,
		.supports_autosuspend = 1,
#endif
};
>>>>>>> d804779... 264 to 298 patch

MODULE_DEVICE_TABLE(usb, baseband_usb_driver_id_table);

static int usb_net_raw_ip_init(void)
{
	int err;

	pr_debug("usb_net_raw_ip_init { max_intfs %d\n", max_intfs);

	err = usb_register(&baseband_usb_driver);
	if (err < 0)
		pr_err("cannot open usb driver - err %d\n", err);
<<<<<<< HEAD
		return err;
	}

	/* create multiple raw-ip network devices */
	for (i = 0; i < max_intfs; i++) {
		/* open baseband usb */
		g_i = i;
		baseband_usb_net[i] = baseband_usb_open(i,
						usb_net_raw_ip_intf[i]);
		if (!baseband_usb_net[i]) {
			pr_err("cannot open baseband usb net\n");
			err = -1;
			goto error_exit;
		}
		init_usb_anchor(&baseband_usb_net[i]->usb.tx_urb_deferred);
		/* register network device */
		usb_net_raw_ip_dev[i] = alloc_netdev(0,
			BASEBAND_USB_NET_DEV_NAME,
			ether_setup);
		if (!usb_net_raw_ip_dev[i]) {
			pr_err("alloc_netdev() failed\n");
			err = -ENOMEM;
			goto error_exit;
		}
		usb_net_raw_ip_dev[i]->netdev_ops = &usb_net_raw_ip_ops;
		usb_net_raw_ip_dev[i]->watchdog_timeo = TX_TIMEOUT;
		random_ether_addr(usb_net_raw_ip_dev[i]->dev_addr);
        //                                                                              
        /* keep the default flags, just add NOARP */
        usb_net_raw_ip_dev[i]->flags |= IFF_NOARP;
        //                                                                              
		err = register_netdev(usb_net_raw_ip_dev[i]);
		if (err < 0) {
			pr_err("cannot register network device - %d\n", err);
			goto error_exit;
		}
		pr_debug("registered baseband usb network device"
				" - dev %p name %s\n", usb_net_raw_ip_dev[i],
				 BASEBAND_USB_NET_DEV_NAME);
		/* start usb rx */
		err = usb_net_raw_ip_setup_rx_urb(baseband_usb_net[i]);
		if (err < 0) {
			pr_err("setup reusable rx urb failed - err %d\n", err);
			goto error_exit;
		}
		err = usb_net_raw_ip_rx_urb_submit(baseband_usb_net[i]);
		if (err < 0) {
			pr_err("submit rx failed - err %d\n", err);
			goto error_exit;
		}
		/* start usb tx */
		sprintf(name, "raw_ip_tx_wq-%d",
			baseband_usb_net[i]->baseband_index);
		baseband_usb_net[i]->usb.tx_workqueue
			= create_singlethread_workqueue(name);
		if (!baseband_usb_net[i]->usb.tx_workqueue) {
			pr_err("cannot create workqueue\n");
			goto error_exit;
		}
		INIT_WORK(&baseband_usb_net[i]->usb.tx_work,
			usb_net_raw_ip_tx_urb_work);
	}

	pr_debug("usb_net_raw_ip_init }\n");
	return 0;

error_exit:
	/* destroy multiple raw-ip network devices */
	for (i = 0; i < max_intfs; i++) {
		/* unregister network device */
		if (usb_net_raw_ip_dev[i]) {
			unregister_netdev(usb_net_raw_ip_dev[i]);
			free_netdev(usb_net_raw_ip_dev[i]);
			usb_net_raw_ip_dev[i] = (struct net_device *) 0;
		}
		/* close baseband usb */
		if (baseband_usb_net[i]) {
			/* stop usb tx */
			if (baseband_usb_net[i]->usb.tx_workqueue) {
				destroy_workqueue(baseband_usb_net[i]
					->usb.tx_workqueue);
				baseband_usb_net[i]->usb.tx_workqueue
					= (struct workqueue_struct *) 0;
			}
			if (baseband_usb_net[i]->usb.tx_urb) {
				usb_kill_urb(baseband_usb_net[i]->usb.tx_urb);
				baseband_usb_net[i]->usb.tx_urb
					= (struct urb *) 0;
			}
			/* stop usb rx */
			if (baseband_usb_net[i]->usb.rx_urb) {
				usb_kill_urb(baseband_usb_net[i]->usb.rx_urb);
				baseband_usb_net[i]->usb.rx_urb
					= (struct urb *) 0;
			}
			usb_net_raw_ip_free_rx_urb(baseband_usb_net[i]);
			/* close usb */
			baseband_usb_close(baseband_usb_net[i]);
			baseband_usb_net[i] = (struct baseband_usb *) 0;
		}
	}
	usb_deregister(&baseband_usb_driver);
=======
>>>>>>> d804779... 264 to 298 patch

	return err;
}

static void usb_net_raw_ip_exit(void)
{
	pr_debug("usb_net_raw_ip_exit {\n");
	usb_deregister(&baseband_usb_driver);
	pr_debug("usb_net_raw_ip_exit }\n");
}

module_init(usb_net_raw_ip_init)
module_exit(usb_net_raw_ip_exit)

