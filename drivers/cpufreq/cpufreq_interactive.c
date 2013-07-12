


<!DOCTYPE html>
<html>
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# githubog: http://ogp.me/ns/fb/githubog#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
        <title>lge-kernel-p880/drivers/cpufreq/cpufreq_interactive.c at 505c214eebb1fee0bc9e51ea497c4e40b1338922 · Ntemis/lge-kernel-p880</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub" />
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub" />
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png" />
    <link rel="logo" type="image/svg" href="https://github-media-downloads.s3.amazonaws.com/github-logo.svg" />
    <meta property="og:image" content="https://github.global.ssl.fastly.net/images/modules/logos_page/Octocat.png">
    <meta name="hostname" content="fe4.rs.github.com">
    <link rel="assets" href="https://github.global.ssl.fastly.net/">
    <link rel="xhr-socket" href="/_sockets" />
    
    


    <meta name="msapplication-TileImage" content="/windows-tile.png" />
    <meta name="msapplication-TileColor" content="#ffffff" />
    <meta name="selected-link" value="repo_source" data-pjax-transient />
    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="github" name="octolytics-app-id" /><meta content="2123893" name="octolytics-actor-id" /><meta content="Ntemis" name="octolytics-actor-login" /><meta content="e9c7676686e85a31c94286f68146fa0d0ffaae23ad1e0d7d747df32dbb3c064f" name="octolytics-actor-hash" />

    
    
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />

    <meta content="authenticity_token" name="csrf-param" />
<meta content="JIUzUmffCkl5/SQ6FGKROOnk/1q1f5QXmVkxK2zuAlU=" name="csrf-token" />

    <link href="https://github.global.ssl.fastly.net/assets/github-18426ad2e511ad881d5d0a2b133329f94baf1305.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://github.global.ssl.fastly.net/assets/github2-13a1767e53653178a55a8f1aa8fc7567598b5369.css" media="all" rel="stylesheet" type="text/css" />
    


      <script src="https://github.global.ssl.fastly.net/assets/frameworks-e8054ad804a1cf9e9849130fee5a4a5487b663ed.js" type="text/javascript"></script>
      <script src="https://github.global.ssl.fastly.net/assets/github-0444c1d0a0bb2f32a3c081d0aa3b6687cbd0ce39.js" type="text/javascript"></script>
      
      <meta http-equiv="x-pjax-version" content="012ce5e561582d6552e650e39a764c8a">

        <link data-pjax-transient rel='permalink' href='/Ntemis/lge-kernel-p880/blob/505c214eebb1fee0bc9e51ea497c4e40b1338922/drivers/cpufreq/cpufreq_interactive.c'>
  <meta property="og:title" content="lge-kernel-p880"/>
  <meta property="og:type" content="githubog:gitrepository"/>
  <meta property="og:url" content="https://github.com/Ntemis/lge-kernel-p880"/>
  <meta property="og:image" content="https://github.global.ssl.fastly.net/images/gravatars/gravatar-user-420.png"/>
  <meta property="og:site_name" content="GitHub"/>
  <meta property="og:description" content="Contribute to lge-kernel-p880 development by creating an account on GitHub."/>

  <meta name="description" content="Contribute to lge-kernel-p880 development by creating an account on GitHub." />

  <meta content="2123893" name="octolytics-dimension-user_id" /><meta content="Ntemis" name="octolytics-dimension-user_login" /><meta content="10709670" name="octolytics-dimension-repository_id" /><meta content="Ntemis/lge-kernel-p880" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="true" name="octolytics-dimension-repository_is_fork" /><meta content="9471156" name="octolytics-dimension-repository_parent_id" /><meta content="CyanogenMod/lge-kernel-p880" name="octolytics-dimension-repository_parent_nwo" /><meta content="9471156" name="octolytics-dimension-repository_network_root_id" /><meta content="CyanogenMod/lge-kernel-p880" name="octolytics-dimension-repository_network_root_nwo" />
  <link href="https://github.com/Ntemis/lge-kernel-p880/commits/505c214eebb1fee0bc9e51ea497c4e40b1338922.atom" rel="alternate" title="Recent Commits to lge-kernel-p880:505c214eebb1fee0bc9e51ea497c4e40b1338922" type="application/atom+xml" />

  </head>


  <body class="logged_in page-blob linux vis-public fork env-production ">

    <div class="wrapper">
      
      
      


      <div class="header header-logged-in true">
  <div class="container clearfix">

    <a class="header-logo-invertocat" href="https://github.com/">
  <span class="mega-octicon octicon-mark-github"></span>
</a>

    <div class="divider-vertical"></div>

      <a href="/notifications" class="notification-indicator tooltipped downwards" title="You have no unread notifications">
    <span class="mail-status all-read"></span>
  </a>
  <div class="divider-vertical"></div>


      <div class="command-bar js-command-bar  in-repository">
          <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<input type="text" data-hotkey=" s" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    data-username="Ntemis"
      data-repo="Ntemis/lge-kernel-p880"
      data-branch=""
      data-sha="99c932f5d23f8e65e1b9549afbf6a68433885c83"
  >

    <input type="hidden" name="nwo" value="Ntemis/lge-kernel-p880" />

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked" />
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global" />
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="octicon help tooltipped downwards" title="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
        <ul class="top-nav">
            <li class="explore"><a href="/explore">Explore</a></li>
            <li><a href="https://gist.github.com">Gist</a></li>
            <li><a href="/blog">Blog</a></li>
          <li><a href="https://help.github.com">Help</a></li>
        </ul>
      </div>

    

  

    <ul id="user-links">
      <li>
        <a href="/Ntemis" class="name">
          <img height="20" src="https://secure.gravatar.com/avatar/7d7d8eceedb403fcdff9dabf2d06a6f4?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /> Ntemis
        </a>
      </li>

        <li>
          <a href="/new" id="new_repo" class="tooltipped downwards" title="Create a new repo">
            <span class="octicon octicon-repo-create"></span>
          </a>
        </li>

        <li>
          <a href="/settings/profile" id="account_settings"
            class="tooltipped downwards"
            title="Account settings ">
            <span class="octicon octicon-tools"></span>
          </a>
        </li>
        <li>
          <a class="tooltipped downwards" href="/logout" data-method="post" id="logout" title="Sign out">
            <span class="octicon octicon-log-out"></span>
          </a>
        </li>

    </ul>


<div class="js-new-dropdown-contents hidden">
  

<ul class="dropdown-menu">
  <li>
    <a href="/new"><span class="octicon octicon-repo-create"></span> New repository</a>
  </li>
  <li>
    <a href="/organizations/new"><span class="octicon octicon-organization"></span> New organization</a>
  </li>



    <li class="section-title">
      <span title="Ntemis/lge-kernel-p880">This repository</span>
    </li>
    <li>
      <a href="/Ntemis/lge-kernel-p880/issues/new"><span class="octicon octicon-issue-opened"></span> New issue</a>
    </li>
      <li>
        <a href="/Ntemis/lge-kernel-p880/settings/collaboration"><span class="octicon octicon-person-add"></span> New collaborator</a>
      </li>
</ul>

</div>


    
  </div>
</div>

      

      




          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        

<ul class="pagehead-actions">

    <li class="subscription">
      <form accept-charset="UTF-8" action="/notifications/subscribe" data-autosubmit="true" data-remote="true" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="JIUzUmffCkl5/SQ6FGKROOnk/1q1f5QXmVkxK2zuAlU=" /></div>  <input id="repository_id" name="repository_id" type="hidden" value="10709670" />

    <div class="select-menu js-menu-container js-select-menu">
      <span class="minibutton select-menu-button  js-menu-target">
        <span class="js-select-button">
          <span class="octicon octicon-eye-unwatch"></span>
          Unwatch
        </span>
      </span>

      <div class="select-menu-modal-holder">
        <div class="select-menu-modal subscription-menu-modal js-menu-content">
          <div class="select-menu-header">
            <span class="select-menu-title">Notification status</span>
            <span class="octicon octicon-remove-close js-menu-close"></span>
          </div> <!-- /.select-menu-header -->

          <div class="select-menu-list js-navigation-container">

            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_included" name="do" type="radio" value="included" />
                <h4>Not watching</h4>
                <span class="description">You only receive notifications for discussions in which you participate or are @mentioned.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-watch"></span>
                  Watch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input checked="checked" id="do_subscribed" name="do" type="radio" value="subscribed" />
                <h4>Watching</h4>
                <span class="description">You receive notifications for all discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-eye-unwatch"></span>
                  Unwatch
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <div class="select-menu-item-text">
                <input id="do_ignore" name="do" type="radio" value="ignore" />
                <h4>Ignoring</h4>
                <span class="description">You do not receive any notifications for discussions in this repository.</span>
                <span class="js-select-button-text hidden-select-button-text">
                  <span class="octicon octicon-mute"></span>
                  Stop ignoring
                </span>
              </div>
            </div> <!-- /.select-menu-item -->

          </div> <!-- /.select-menu-list -->

        </div> <!-- /.select-menu-modal -->
      </div> <!-- /.select-menu-modal-holder -->
    </div> <!-- /.select-menu -->

</form>
    </li>

    <li class="js-toggler-container js-social-container starring-container ">
      <a href="/Ntemis/lge-kernel-p880/unstar" class="minibutton with-count js-toggler-target star-button starred upwards" title="Unstar this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="octicon octicon-star-delete"></span><span class="text">Unstar</span>
      </a>
      <a href="/Ntemis/lge-kernel-p880/star" class="minibutton with-count js-toggler-target star-button unstarred upwards" title="Star this repo" data-remote="true" data-method="post" rel="nofollow">
        <span class="octicon octicon-star"></span><span class="text">Star</span>
      </a>
      <a class="social-count js-social-count" href="/Ntemis/lge-kernel-p880/stargazers">0</a>
    </li>

        <li>
          <a href="/Ntemis/lge-kernel-p880/fork" class="minibutton with-count js-toggler-target fork-button lighter upwards" title="Fork this repo" rel="nofollow" data-method="post">
            <span class="octicon octicon-git-branch-create"></span><span class="text">Fork</span>
          </a>
          <a href="/Ntemis/lge-kernel-p880/network" class="social-count">14</a>
        </li>


</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="repo-label"><span>public</span></span>
          <span class="mega-octicon octicon-repo-forked"></span>
          <span class="author">
            <a href="/Ntemis" class="url fn" itemprop="url" rel="author"><span itemprop="title">Ntemis</span></a></span
          ><span class="repohead-name-divider">/</span><strong
          ><a href="/Ntemis/lge-kernel-p880" class="js-current-repository js-repo-home-link">lge-kernel-p880</a></strong>

          <span class="page-context-loader">
            <img alt="Octocat-spinner-32" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

            <span class="fork-flag">
              <span class="text">forked from <a href="/CyanogenMod/lge-kernel-p880">CyanogenMod/lge-kernel-p880</a></span>
            </span>
        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">

      <div class="repository-with-sidebar repo-container
            ">

          <div class="repository-sidebar">

              

<div class="repo-nav repo-nav-full js-repository-container-pjax js-octicon-loaders">
  <div class="repo-nav-contents">
    <ul class="repo-menu">
      <li class="tooltipped leftwards" title="Code">
        <a href="/Ntemis/lge-kernel-p880" class="js-selected-navigation-item selected" data-gotokey="c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_tags repo_branches /Ntemis/lge-kernel-p880">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


      <li class="tooltipped leftwards" title="Pull Requests"><a href="/Ntemis/lge-kernel-p880/pulls" class="js-selected-navigation-item js-disable-pjax" data-gotokey="p" data-selected-links="repo_pulls /Ntemis/lge-kernel-p880/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class='counter'>0</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>




    </ul>
    <div class="repo-menu-separator"></div>
    <ul class="repo-menu">

      <li class="tooltipped leftwards" title="Pulse">
        <a href="/Ntemis/lge-kernel-p880/pulse" class="js-selected-navigation-item " data-pjax="true" data-selected-links="pulse /Ntemis/lge-kernel-p880/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped leftwards" title="Graphs">
        <a href="/Ntemis/lge-kernel-p880/graphs" class="js-selected-navigation-item " data-pjax="true" data-selected-links="repo_graphs repo_contributors /Ntemis/lge-kernel-p880/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped leftwards" title="Network">
        <a href="/Ntemis/lge-kernel-p880/network" class="js-selected-navigation-item js-disable-pjax" data-selected-links="repo_network /Ntemis/lge-kernel-p880/network">
          <span class="octicon octicon-git-branch"></span> <span class="full-word">Network</span>
          <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

    </ul>

      <div class="repo-menu-separator"></div>
      <ul class="repo-menu">
        <li class="tooltipped leftwards" title="Settings">
          <a href="/Ntemis/lge-kernel-p880/settings" data-pjax>
            <span class="octicon octicon-tools"></span> <span class="full-word">Settings</span>
            <img alt="Octocat-spinner-32" class="mini-loader" height="16" src="https://github.global.ssl.fastly.net/images/spinners/octocat-spinner-32.gif" width="16" />
          </a>
        </li>
      </ul>
  </div>
</div>


              <div class="only-with-full-nav">

                

  

<div class="clone-url "
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=push">
  <h3><strong>HTTPS</strong> clone URL</h3>

  <input type="text" class="clone js-url-field"
         value="https://github.com/Ntemis/lge-kernel-p880.git" readonly="readonly">

  <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/Ntemis/lge-kernel-p880.git" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
</div>

  

<div class="clone-url open"
  data-protocol-type="ssh"
  data-url="/users/set_protocol?protocol_selector=ssh&amp;protocol_type=push">
  <h3><strong>SSH</strong> clone URL</h3>

  <input type="text" class="clone js-url-field"
         value="git@github.com:Ntemis/lge-kernel-p880.git" readonly="readonly">

  <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="git@github.com:Ntemis/lge-kernel-p880.git" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=push">
  <h3><strong>Subversion</strong> checkout URL</h3>

  <input type="text" class="clone js-url-field"
         value="https://github.com/Ntemis/lge-kernel-p880" readonly="readonly">

  <span class="js-zeroclipboard url-box-clippy minibutton zeroclipboard-button" data-clipboard-text="https://github.com/Ntemis/lge-kernel-p880" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
</div>



<p class="clone-options">You can clone with
    <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>,
    <a href="#" class="js-clone-selector" data-protocol="ssh">SSH</a>,
    <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>,
  and <a href="https://help.github.com/articles/which-remote-url-should-i-use">other methods.</a>
</p>




                  <a href="/Ntemis/lge-kernel-p880/archive/505c214eebb1fee0bc9e51ea497c4e40b1338922.zip"
                     class="minibutton sidebar-button"
                     title="Download this repository as a zip file"
                     rel="nofollow">
                    <span class="octicon octicon-cloud-download"></span>
                    Download ZIP
                  </a>

              </div>
          </div>

          <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
            


<!-- blob contrib key: blob_contributors:v21:4babe36032bf1c0491bd25393dccb8b8 -->
<!-- blob contrib frag key: views10/v8/blob_contributors:v21:4babe36032bf1c0491bd25393dccb8b8 -->

<p title="This is a placeholder element" class="js-history-link-replace hidden"></p>

<a href="/Ntemis/lge-kernel-p880/find/505c214eebb1fee0bc9e51ea497c4e40b1338922" data-pjax data-hotkey="t" style="display:none">Show File Finder</a>

<div class="file-navigation">
  


<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target" data-hotkey="w"
    data-master-branch="cm-10.1"
    data-ref="">
    <span class="octicon octicon-git-branch"></span>
    <i>tree:</i>
    <span class="js-select-button">505c214eeb</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax>

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-remove-close js-menu-close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Find or create a branch…">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Ntemis/lge-kernel-p880/blob/cm-10.1/drivers/cpufreq/cpufreq_interactive.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1" rel="nofollow" title="cm-10.1">cm-10.1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Ntemis/lge-kernel-p880/blob/cm-10.1-staging/drivers/cpufreq/cpufreq_interactive.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1-staging" rel="nofollow" title="cm-10.1-staging">cm-10.1-staging</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <form accept-charset="UTF-8" action="/Ntemis/lge-kernel-p880/branches" class="js-create-branch select-menu-item select-menu-new-item-form js-navigation-item js-new-item-form" method="post"><div style="margin:0;padding:0;display:inline"><input name="authenticity_token" type="hidden" value="JIUzUmffCkl5/SQ6FGKROOnk/1q1f5QXmVkxK2zuAlU=" /></div>
            <span class="octicon octicon-git-branch-create select-menu-item-icon"></span>
            <div class="select-menu-item-text">
              <h4>Create branch: <span class="js-new-item-name"></span></h4>
              <span class="description">from ‘505c214’</span>
            </div>
            <input type="hidden" name="name" id="name" class="js-new-item-value">
            <input type="hidden" name="branch" id="branch" value="505c214eebb1fee0bc9e51ea497c4e40b1338922" />
            <input type="hidden" name="path" id="branch" value="drivers/cpufreq/cpufreq_interactive.c" />
          </form> <!-- /.select-menu-item -->

      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Ntemis/lge-kernel-p880/blob/cm-10.1.0-RC5/drivers/cpufreq/cpufreq_interactive.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1.0-RC5" rel="nofollow" title="cm-10.1.0-RC5">cm-10.1.0-RC5</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Ntemis/lge-kernel-p880/blob/cm-10.1.0-RC4/drivers/cpufreq/cpufreq_interactive.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1.0-RC4" rel="nofollow" title="cm-10.1.0-RC4">cm-10.1.0-RC4</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Ntemis/lge-kernel-p880/blob/cm-10.1.0-RC3/drivers/cpufreq/cpufreq_interactive.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1.0-RC3" rel="nofollow" title="cm-10.1.0-RC3">cm-10.1.0-RC3</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Ntemis/lge-kernel-p880/blob/cm-10.1.0-RC2/drivers/cpufreq/cpufreq_interactive.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1.0-RC2" rel="nofollow" title="cm-10.1.0-RC2">cm-10.1.0-RC2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/Ntemis/lge-kernel-p880/blob/cm-10.1.0-RC1/drivers/cpufreq/cpufreq_interactive.c" class="js-navigation-open select-menu-item-text js-select-button-text css-truncate-target" data-name="cm-10.1.0-RC1" rel="nofollow" title="cm-10.1.0-RC1">cm-10.1.0-RC1</a>
            </div> <!-- /.select-menu-item -->
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Ntemis/lge-kernel-p880/tree/505c214eebb1fee0bc9e51ea497c4e40b1338922" data-branch="505c214eebb1fee0bc9e51ea497c4e40b1338922" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">lge-kernel-p880</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Ntemis/lge-kernel-p880/tree/505c214eebb1fee0bc9e51ea497c4e40b1338922/drivers" data-branch="505c214eebb1fee0bc9e51ea497c4e40b1338922" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">drivers</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/Ntemis/lge-kernel-p880/tree/505c214eebb1fee0bc9e51ea497c4e40b1338922/drivers/cpufreq" data-branch="505c214eebb1fee0bc9e51ea497c4e40b1338922" data-direction="back" data-pjax="true" itemscope="url" rel="nofollow"><span itemprop="title">cpufreq</span></a></span><span class="separator"> / </span><strong class="final-path">cpufreq_interactive.c</strong> <span class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="drivers/cpufreq/cpufreq_interactive.c" data-copied-hint="copied!" title="copy to clipboard"><span class="octicon octicon-clippy"></span></span>
  </div>
</div>


  
  <div class="commit file-history-tease">
    <img class="main-avatar" height="24" src="https://secure.gravatar.com/avatar/7d7d8eceedb403fcdff9dabf2d06a6f4?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
    <span class="author"><a href="/Ntemis" rel="author">Ntemis</a></span>
    <time class="js-relative-date" datetime="2013-07-11T14:38:52-07:00" title="2013-07-11 14:38:52">July 11, 2013</time>
    <div class="commit-title">
        <a href="/Ntemis/lge-kernel-p880/commit/505c214eebb1fee0bc9e51ea497c4e40b1338922" class="message" data-pjax="true">Interactive inline with mako and grouper</a>
    </div>

    <div class="participation">
      <p class="quickstat"><a href="#blob_contributors_box" rel="facebox"><strong>4</strong> contributors</a></p>
          <a class="avatar tooltipped downwards" title="pboonstoppel" href="/Ntemis/lge-kernel-p880/commits/cm-10.1/drivers/cpufreq/cpufreq_interactive.c?author=pboonstoppel"><img height="20" src="https://secure.gravatar.com/avatar/55bb7e176ea963922262a0a945b9eac3?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /></a>
    <a class="avatar tooltipped downwards" title="Ntemis" href="/Ntemis/lge-kernel-p880/commits/cm-10.1/drivers/cpufreq/cpufreq_interactive.c?author=Ntemis"><img height="20" src="https://secure.gravatar.com/avatar/7d7d8eceedb403fcdff9dabf2d06a6f4?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /></a>
    <a class="avatar tooltipped downwards" title="franciscofranco" href="/Ntemis/lge-kernel-p880/commits/cm-10.1/drivers/cpufreq/cpufreq_interactive.c?author=franciscofranco"><img height="20" src="https://secure.gravatar.com/avatar/06cac7b5dd29bffcaced2f3b02ce2c7d?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /></a>
    <a class="avatar tooltipped downwards" title="rmcc" href="/Ntemis/lge-kernel-p880/commits/cm-10.1/drivers/cpufreq/cpufreq_interactive.c?author=rmcc"><img height="20" src="https://secure.gravatar.com/avatar/30f5cd3b74f52af325d5d596cb5b1381?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="20" /></a>


    </div>
    <div id="blob_contributors_box" style="display:none">
      <h2 class="facebox-header">Users who have contributed to this file</h2>
      <ul class="facebox-user-list">
        <li class="facebox-user-list-item">
          <img height="24" src="https://secure.gravatar.com/avatar/55bb7e176ea963922262a0a945b9eac3?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/pboonstoppel">pboonstoppel</a>
        </li>
        <li class="facebox-user-list-item">
          <img height="24" src="https://secure.gravatar.com/avatar/7d7d8eceedb403fcdff9dabf2d06a6f4?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/Ntemis">Ntemis</a>
        </li>
        <li class="facebox-user-list-item">
          <img height="24" src="https://secure.gravatar.com/avatar/06cac7b5dd29bffcaced2f3b02ce2c7d?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/franciscofranco">franciscofranco</a>
        </li>
        <li class="facebox-user-list-item">
          <img height="24" src="https://secure.gravatar.com/avatar/30f5cd3b74f52af325d5d596cb5b1381?s=140&amp;d=https://a248.e.akamai.net/assets.github.com%2Fimages%2Fgravatars%2Fgravatar-user-420.png" width="24" />
          <a href="/rmcc">rmcc</a>
        </li>
      </ul>
    </div>
  </div>


<div id="files" class="bubble">
  <div class="file">
    <div class="meta">
      <div class="info">
        <span class="icon"><b class="octicon octicon-file-text"></b></span>
        <span class="mode" title="File Mode">file</span>
          <span>1046 lines (860 sloc)</span>
        <span>26.63 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
              <a class="minibutton js-entice" href=""
                 data-entice="You must be signed in and on a branch to make or propose changes">Edit</a>
          <a href="/Ntemis/lge-kernel-p880/raw/505c214eebb1fee0bc9e51ea497c4e40b1338922/drivers/cpufreq/cpufreq_interactive.c" class="button minibutton " id="raw-url">Raw</a>
            <a href="/Ntemis/lge-kernel-p880/blame/505c214eebb1fee0bc9e51ea497c4e40b1338922/drivers/cpufreq/cpufreq_interactive.c" class="button minibutton ">Blame</a>
          <a href="/Ntemis/lge-kernel-p880/commits/505c214eebb1fee0bc9e51ea497c4e40b1338922/drivers/cpufreq/cpufreq_interactive.c" class="button minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->
            <a class="minibutton danger empty-icon js-entice" href=""
               data-entice="You must be signed in and on a branch to make or propose changes">
            Delete
          </a>
      </div><!-- /.actions -->

    </div>
        <div class="blob-wrapper data type-c js-blob-data">
      <table class="file-code file-diff">
        <tr class="file-code-line">
          <td class="blob-line-nums">
            <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>
<span id="L434" rel="#L434">434</span>
<span id="L435" rel="#L435">435</span>
<span id="L436" rel="#L436">436</span>
<span id="L437" rel="#L437">437</span>
<span id="L438" rel="#L438">438</span>
<span id="L439" rel="#L439">439</span>
<span id="L440" rel="#L440">440</span>
<span id="L441" rel="#L441">441</span>
<span id="L442" rel="#L442">442</span>
<span id="L443" rel="#L443">443</span>
<span id="L444" rel="#L444">444</span>
<span id="L445" rel="#L445">445</span>
<span id="L446" rel="#L446">446</span>
<span id="L447" rel="#L447">447</span>
<span id="L448" rel="#L448">448</span>
<span id="L449" rel="#L449">449</span>
<span id="L450" rel="#L450">450</span>
<span id="L451" rel="#L451">451</span>
<span id="L452" rel="#L452">452</span>
<span id="L453" rel="#L453">453</span>
<span id="L454" rel="#L454">454</span>
<span id="L455" rel="#L455">455</span>
<span id="L456" rel="#L456">456</span>
<span id="L457" rel="#L457">457</span>
<span id="L458" rel="#L458">458</span>
<span id="L459" rel="#L459">459</span>
<span id="L460" rel="#L460">460</span>
<span id="L461" rel="#L461">461</span>
<span id="L462" rel="#L462">462</span>
<span id="L463" rel="#L463">463</span>
<span id="L464" rel="#L464">464</span>
<span id="L465" rel="#L465">465</span>
<span id="L466" rel="#L466">466</span>
<span id="L467" rel="#L467">467</span>
<span id="L468" rel="#L468">468</span>
<span id="L469" rel="#L469">469</span>
<span id="L470" rel="#L470">470</span>
<span id="L471" rel="#L471">471</span>
<span id="L472" rel="#L472">472</span>
<span id="L473" rel="#L473">473</span>
<span id="L474" rel="#L474">474</span>
<span id="L475" rel="#L475">475</span>
<span id="L476" rel="#L476">476</span>
<span id="L477" rel="#L477">477</span>
<span id="L478" rel="#L478">478</span>
<span id="L479" rel="#L479">479</span>
<span id="L480" rel="#L480">480</span>
<span id="L481" rel="#L481">481</span>
<span id="L482" rel="#L482">482</span>
<span id="L483" rel="#L483">483</span>
<span id="L484" rel="#L484">484</span>
<span id="L485" rel="#L485">485</span>
<span id="L486" rel="#L486">486</span>
<span id="L487" rel="#L487">487</span>
<span id="L488" rel="#L488">488</span>
<span id="L489" rel="#L489">489</span>
<span id="L490" rel="#L490">490</span>
<span id="L491" rel="#L491">491</span>
<span id="L492" rel="#L492">492</span>
<span id="L493" rel="#L493">493</span>
<span id="L494" rel="#L494">494</span>
<span id="L495" rel="#L495">495</span>
<span id="L496" rel="#L496">496</span>
<span id="L497" rel="#L497">497</span>
<span id="L498" rel="#L498">498</span>
<span id="L499" rel="#L499">499</span>
<span id="L500" rel="#L500">500</span>
<span id="L501" rel="#L501">501</span>
<span id="L502" rel="#L502">502</span>
<span id="L503" rel="#L503">503</span>
<span id="L504" rel="#L504">504</span>
<span id="L505" rel="#L505">505</span>
<span id="L506" rel="#L506">506</span>
<span id="L507" rel="#L507">507</span>
<span id="L508" rel="#L508">508</span>
<span id="L509" rel="#L509">509</span>
<span id="L510" rel="#L510">510</span>
<span id="L511" rel="#L511">511</span>
<span id="L512" rel="#L512">512</span>
<span id="L513" rel="#L513">513</span>
<span id="L514" rel="#L514">514</span>
<span id="L515" rel="#L515">515</span>
<span id="L516" rel="#L516">516</span>
<span id="L517" rel="#L517">517</span>
<span id="L518" rel="#L518">518</span>
<span id="L519" rel="#L519">519</span>
<span id="L520" rel="#L520">520</span>
<span id="L521" rel="#L521">521</span>
<span id="L522" rel="#L522">522</span>
<span id="L523" rel="#L523">523</span>
<span id="L524" rel="#L524">524</span>
<span id="L525" rel="#L525">525</span>
<span id="L526" rel="#L526">526</span>
<span id="L527" rel="#L527">527</span>
<span id="L528" rel="#L528">528</span>
<span id="L529" rel="#L529">529</span>
<span id="L530" rel="#L530">530</span>
<span id="L531" rel="#L531">531</span>
<span id="L532" rel="#L532">532</span>
<span id="L533" rel="#L533">533</span>
<span id="L534" rel="#L534">534</span>
<span id="L535" rel="#L535">535</span>
<span id="L536" rel="#L536">536</span>
<span id="L537" rel="#L537">537</span>
<span id="L538" rel="#L538">538</span>
<span id="L539" rel="#L539">539</span>
<span id="L540" rel="#L540">540</span>
<span id="L541" rel="#L541">541</span>
<span id="L542" rel="#L542">542</span>
<span id="L543" rel="#L543">543</span>
<span id="L544" rel="#L544">544</span>
<span id="L545" rel="#L545">545</span>
<span id="L546" rel="#L546">546</span>
<span id="L547" rel="#L547">547</span>
<span id="L548" rel="#L548">548</span>
<span id="L549" rel="#L549">549</span>
<span id="L550" rel="#L550">550</span>
<span id="L551" rel="#L551">551</span>
<span id="L552" rel="#L552">552</span>
<span id="L553" rel="#L553">553</span>
<span id="L554" rel="#L554">554</span>
<span id="L555" rel="#L555">555</span>
<span id="L556" rel="#L556">556</span>
<span id="L557" rel="#L557">557</span>
<span id="L558" rel="#L558">558</span>
<span id="L559" rel="#L559">559</span>
<span id="L560" rel="#L560">560</span>
<span id="L561" rel="#L561">561</span>
<span id="L562" rel="#L562">562</span>
<span id="L563" rel="#L563">563</span>
<span id="L564" rel="#L564">564</span>
<span id="L565" rel="#L565">565</span>
<span id="L566" rel="#L566">566</span>
<span id="L567" rel="#L567">567</span>
<span id="L568" rel="#L568">568</span>
<span id="L569" rel="#L569">569</span>
<span id="L570" rel="#L570">570</span>
<span id="L571" rel="#L571">571</span>
<span id="L572" rel="#L572">572</span>
<span id="L573" rel="#L573">573</span>
<span id="L574" rel="#L574">574</span>
<span id="L575" rel="#L575">575</span>
<span id="L576" rel="#L576">576</span>
<span id="L577" rel="#L577">577</span>
<span id="L578" rel="#L578">578</span>
<span id="L579" rel="#L579">579</span>
<span id="L580" rel="#L580">580</span>
<span id="L581" rel="#L581">581</span>
<span id="L582" rel="#L582">582</span>
<span id="L583" rel="#L583">583</span>
<span id="L584" rel="#L584">584</span>
<span id="L585" rel="#L585">585</span>
<span id="L586" rel="#L586">586</span>
<span id="L587" rel="#L587">587</span>
<span id="L588" rel="#L588">588</span>
<span id="L589" rel="#L589">589</span>
<span id="L590" rel="#L590">590</span>
<span id="L591" rel="#L591">591</span>
<span id="L592" rel="#L592">592</span>
<span id="L593" rel="#L593">593</span>
<span id="L594" rel="#L594">594</span>
<span id="L595" rel="#L595">595</span>
<span id="L596" rel="#L596">596</span>
<span id="L597" rel="#L597">597</span>
<span id="L598" rel="#L598">598</span>
<span id="L599" rel="#L599">599</span>
<span id="L600" rel="#L600">600</span>
<span id="L601" rel="#L601">601</span>
<span id="L602" rel="#L602">602</span>
<span id="L603" rel="#L603">603</span>
<span id="L604" rel="#L604">604</span>
<span id="L605" rel="#L605">605</span>
<span id="L606" rel="#L606">606</span>
<span id="L607" rel="#L607">607</span>
<span id="L608" rel="#L608">608</span>
<span id="L609" rel="#L609">609</span>
<span id="L610" rel="#L610">610</span>
<span id="L611" rel="#L611">611</span>
<span id="L612" rel="#L612">612</span>
<span id="L613" rel="#L613">613</span>
<span id="L614" rel="#L614">614</span>
<span id="L615" rel="#L615">615</span>
<span id="L616" rel="#L616">616</span>
<span id="L617" rel="#L617">617</span>
<span id="L618" rel="#L618">618</span>
<span id="L619" rel="#L619">619</span>
<span id="L620" rel="#L620">620</span>
<span id="L621" rel="#L621">621</span>
<span id="L622" rel="#L622">622</span>
<span id="L623" rel="#L623">623</span>
<span id="L624" rel="#L624">624</span>
<span id="L625" rel="#L625">625</span>
<span id="L626" rel="#L626">626</span>
<span id="L627" rel="#L627">627</span>
<span id="L628" rel="#L628">628</span>
<span id="L629" rel="#L629">629</span>
<span id="L630" rel="#L630">630</span>
<span id="L631" rel="#L631">631</span>
<span id="L632" rel="#L632">632</span>
<span id="L633" rel="#L633">633</span>
<span id="L634" rel="#L634">634</span>
<span id="L635" rel="#L635">635</span>
<span id="L636" rel="#L636">636</span>
<span id="L637" rel="#L637">637</span>
<span id="L638" rel="#L638">638</span>
<span id="L639" rel="#L639">639</span>
<span id="L640" rel="#L640">640</span>
<span id="L641" rel="#L641">641</span>
<span id="L642" rel="#L642">642</span>
<span id="L643" rel="#L643">643</span>
<span id="L644" rel="#L644">644</span>
<span id="L645" rel="#L645">645</span>
<span id="L646" rel="#L646">646</span>
<span id="L647" rel="#L647">647</span>
<span id="L648" rel="#L648">648</span>
<span id="L649" rel="#L649">649</span>
<span id="L650" rel="#L650">650</span>
<span id="L651" rel="#L651">651</span>
<span id="L652" rel="#L652">652</span>
<span id="L653" rel="#L653">653</span>
<span id="L654" rel="#L654">654</span>
<span id="L655" rel="#L655">655</span>
<span id="L656" rel="#L656">656</span>
<span id="L657" rel="#L657">657</span>
<span id="L658" rel="#L658">658</span>
<span id="L659" rel="#L659">659</span>
<span id="L660" rel="#L660">660</span>
<span id="L661" rel="#L661">661</span>
<span id="L662" rel="#L662">662</span>
<span id="L663" rel="#L663">663</span>
<span id="L664" rel="#L664">664</span>
<span id="L665" rel="#L665">665</span>
<span id="L666" rel="#L666">666</span>
<span id="L667" rel="#L667">667</span>
<span id="L668" rel="#L668">668</span>
<span id="L669" rel="#L669">669</span>
<span id="L670" rel="#L670">670</span>
<span id="L671" rel="#L671">671</span>
<span id="L672" rel="#L672">672</span>
<span id="L673" rel="#L673">673</span>
<span id="L674" rel="#L674">674</span>
<span id="L675" rel="#L675">675</span>
<span id="L676" rel="#L676">676</span>
<span id="L677" rel="#L677">677</span>
<span id="L678" rel="#L678">678</span>
<span id="L679" rel="#L679">679</span>
<span id="L680" rel="#L680">680</span>
<span id="L681" rel="#L681">681</span>
<span id="L682" rel="#L682">682</span>
<span id="L683" rel="#L683">683</span>
<span id="L684" rel="#L684">684</span>
<span id="L685" rel="#L685">685</span>
<span id="L686" rel="#L686">686</span>
<span id="L687" rel="#L687">687</span>
<span id="L688" rel="#L688">688</span>
<span id="L689" rel="#L689">689</span>
<span id="L690" rel="#L690">690</span>
<span id="L691" rel="#L691">691</span>
<span id="L692" rel="#L692">692</span>
<span id="L693" rel="#L693">693</span>
<span id="L694" rel="#L694">694</span>
<span id="L695" rel="#L695">695</span>
<span id="L696" rel="#L696">696</span>
<span id="L697" rel="#L697">697</span>
<span id="L698" rel="#L698">698</span>
<span id="L699" rel="#L699">699</span>
<span id="L700" rel="#L700">700</span>
<span id="L701" rel="#L701">701</span>
<span id="L702" rel="#L702">702</span>
<span id="L703" rel="#L703">703</span>
<span id="L704" rel="#L704">704</span>
<span id="L705" rel="#L705">705</span>
<span id="L706" rel="#L706">706</span>
<span id="L707" rel="#L707">707</span>
<span id="L708" rel="#L708">708</span>
<span id="L709" rel="#L709">709</span>
<span id="L710" rel="#L710">710</span>
<span id="L711" rel="#L711">711</span>
<span id="L712" rel="#L712">712</span>
<span id="L713" rel="#L713">713</span>
<span id="L714" rel="#L714">714</span>
<span id="L715" rel="#L715">715</span>
<span id="L716" rel="#L716">716</span>
<span id="L717" rel="#L717">717</span>
<span id="L718" rel="#L718">718</span>
<span id="L719" rel="#L719">719</span>
<span id="L720" rel="#L720">720</span>
<span id="L721" rel="#L721">721</span>
<span id="L722" rel="#L722">722</span>
<span id="L723" rel="#L723">723</span>
<span id="L724" rel="#L724">724</span>
<span id="L725" rel="#L725">725</span>
<span id="L726" rel="#L726">726</span>
<span id="L727" rel="#L727">727</span>
<span id="L728" rel="#L728">728</span>
<span id="L729" rel="#L729">729</span>
<span id="L730" rel="#L730">730</span>
<span id="L731" rel="#L731">731</span>
<span id="L732" rel="#L732">732</span>
<span id="L733" rel="#L733">733</span>
<span id="L734" rel="#L734">734</span>
<span id="L735" rel="#L735">735</span>
<span id="L736" rel="#L736">736</span>
<span id="L737" rel="#L737">737</span>
<span id="L738" rel="#L738">738</span>
<span id="L739" rel="#L739">739</span>
<span id="L740" rel="#L740">740</span>
<span id="L741" rel="#L741">741</span>
<span id="L742" rel="#L742">742</span>
<span id="L743" rel="#L743">743</span>
<span id="L744" rel="#L744">744</span>
<span id="L745" rel="#L745">745</span>
<span id="L746" rel="#L746">746</span>
<span id="L747" rel="#L747">747</span>
<span id="L748" rel="#L748">748</span>
<span id="L749" rel="#L749">749</span>
<span id="L750" rel="#L750">750</span>
<span id="L751" rel="#L751">751</span>
<span id="L752" rel="#L752">752</span>
<span id="L753" rel="#L753">753</span>
<span id="L754" rel="#L754">754</span>
<span id="L755" rel="#L755">755</span>
<span id="L756" rel="#L756">756</span>
<span id="L757" rel="#L757">757</span>
<span id="L758" rel="#L758">758</span>
<span id="L759" rel="#L759">759</span>
<span id="L760" rel="#L760">760</span>
<span id="L761" rel="#L761">761</span>
<span id="L762" rel="#L762">762</span>
<span id="L763" rel="#L763">763</span>
<span id="L764" rel="#L764">764</span>
<span id="L765" rel="#L765">765</span>
<span id="L766" rel="#L766">766</span>
<span id="L767" rel="#L767">767</span>
<span id="L768" rel="#L768">768</span>
<span id="L769" rel="#L769">769</span>
<span id="L770" rel="#L770">770</span>
<span id="L771" rel="#L771">771</span>
<span id="L772" rel="#L772">772</span>
<span id="L773" rel="#L773">773</span>
<span id="L774" rel="#L774">774</span>
<span id="L775" rel="#L775">775</span>
<span id="L776" rel="#L776">776</span>
<span id="L777" rel="#L777">777</span>
<span id="L778" rel="#L778">778</span>
<span id="L779" rel="#L779">779</span>
<span id="L780" rel="#L780">780</span>
<span id="L781" rel="#L781">781</span>
<span id="L782" rel="#L782">782</span>
<span id="L783" rel="#L783">783</span>
<span id="L784" rel="#L784">784</span>
<span id="L785" rel="#L785">785</span>
<span id="L786" rel="#L786">786</span>
<span id="L787" rel="#L787">787</span>
<span id="L788" rel="#L788">788</span>
<span id="L789" rel="#L789">789</span>
<span id="L790" rel="#L790">790</span>
<span id="L791" rel="#L791">791</span>
<span id="L792" rel="#L792">792</span>
<span id="L793" rel="#L793">793</span>
<span id="L794" rel="#L794">794</span>
<span id="L795" rel="#L795">795</span>
<span id="L796" rel="#L796">796</span>
<span id="L797" rel="#L797">797</span>
<span id="L798" rel="#L798">798</span>
<span id="L799" rel="#L799">799</span>
<span id="L800" rel="#L800">800</span>
<span id="L801" rel="#L801">801</span>
<span id="L802" rel="#L802">802</span>
<span id="L803" rel="#L803">803</span>
<span id="L804" rel="#L804">804</span>
<span id="L805" rel="#L805">805</span>
<span id="L806" rel="#L806">806</span>
<span id="L807" rel="#L807">807</span>
<span id="L808" rel="#L808">808</span>
<span id="L809" rel="#L809">809</span>
<span id="L810" rel="#L810">810</span>
<span id="L811" rel="#L811">811</span>
<span id="L812" rel="#L812">812</span>
<span id="L813" rel="#L813">813</span>
<span id="L814" rel="#L814">814</span>
<span id="L815" rel="#L815">815</span>
<span id="L816" rel="#L816">816</span>
<span id="L817" rel="#L817">817</span>
<span id="L818" rel="#L818">818</span>
<span id="L819" rel="#L819">819</span>
<span id="L820" rel="#L820">820</span>
<span id="L821" rel="#L821">821</span>
<span id="L822" rel="#L822">822</span>
<span id="L823" rel="#L823">823</span>
<span id="L824" rel="#L824">824</span>
<span id="L825" rel="#L825">825</span>
<span id="L826" rel="#L826">826</span>
<span id="L827" rel="#L827">827</span>
<span id="L828" rel="#L828">828</span>
<span id="L829" rel="#L829">829</span>
<span id="L830" rel="#L830">830</span>
<span id="L831" rel="#L831">831</span>
<span id="L832" rel="#L832">832</span>
<span id="L833" rel="#L833">833</span>
<span id="L834" rel="#L834">834</span>
<span id="L835" rel="#L835">835</span>
<span id="L836" rel="#L836">836</span>
<span id="L837" rel="#L837">837</span>
<span id="L838" rel="#L838">838</span>
<span id="L839" rel="#L839">839</span>
<span id="L840" rel="#L840">840</span>
<span id="L841" rel="#L841">841</span>
<span id="L842" rel="#L842">842</span>
<span id="L843" rel="#L843">843</span>
<span id="L844" rel="#L844">844</span>
<span id="L845" rel="#L845">845</span>
<span id="L846" rel="#L846">846</span>
<span id="L847" rel="#L847">847</span>
<span id="L848" rel="#L848">848</span>
<span id="L849" rel="#L849">849</span>
<span id="L850" rel="#L850">850</span>
<span id="L851" rel="#L851">851</span>
<span id="L852" rel="#L852">852</span>
<span id="L853" rel="#L853">853</span>
<span id="L854" rel="#L854">854</span>
<span id="L855" rel="#L855">855</span>
<span id="L856" rel="#L856">856</span>
<span id="L857" rel="#L857">857</span>
<span id="L858" rel="#L858">858</span>
<span id="L859" rel="#L859">859</span>
<span id="L860" rel="#L860">860</span>
<span id="L861" rel="#L861">861</span>
<span id="L862" rel="#L862">862</span>
<span id="L863" rel="#L863">863</span>
<span id="L864" rel="#L864">864</span>
<span id="L865" rel="#L865">865</span>
<span id="L866" rel="#L866">866</span>
<span id="L867" rel="#L867">867</span>
<span id="L868" rel="#L868">868</span>
<span id="L869" rel="#L869">869</span>
<span id="L870" rel="#L870">870</span>
<span id="L871" rel="#L871">871</span>
<span id="L872" rel="#L872">872</span>
<span id="L873" rel="#L873">873</span>
<span id="L874" rel="#L874">874</span>
<span id="L875" rel="#L875">875</span>
<span id="L876" rel="#L876">876</span>
<span id="L877" rel="#L877">877</span>
<span id="L878" rel="#L878">878</span>
<span id="L879" rel="#L879">879</span>
<span id="L880" rel="#L880">880</span>
<span id="L881" rel="#L881">881</span>
<span id="L882" rel="#L882">882</span>
<span id="L883" rel="#L883">883</span>
<span id="L884" rel="#L884">884</span>
<span id="L885" rel="#L885">885</span>
<span id="L886" rel="#L886">886</span>
<span id="L887" rel="#L887">887</span>
<span id="L888" rel="#L888">888</span>
<span id="L889" rel="#L889">889</span>
<span id="L890" rel="#L890">890</span>
<span id="L891" rel="#L891">891</span>
<span id="L892" rel="#L892">892</span>
<span id="L893" rel="#L893">893</span>
<span id="L894" rel="#L894">894</span>
<span id="L895" rel="#L895">895</span>
<span id="L896" rel="#L896">896</span>
<span id="L897" rel="#L897">897</span>
<span id="L898" rel="#L898">898</span>
<span id="L899" rel="#L899">899</span>
<span id="L900" rel="#L900">900</span>
<span id="L901" rel="#L901">901</span>
<span id="L902" rel="#L902">902</span>
<span id="L903" rel="#L903">903</span>
<span id="L904" rel="#L904">904</span>
<span id="L905" rel="#L905">905</span>
<span id="L906" rel="#L906">906</span>
<span id="L907" rel="#L907">907</span>
<span id="L908" rel="#L908">908</span>
<span id="L909" rel="#L909">909</span>
<span id="L910" rel="#L910">910</span>
<span id="L911" rel="#L911">911</span>
<span id="L912" rel="#L912">912</span>
<span id="L913" rel="#L913">913</span>
<span id="L914" rel="#L914">914</span>
<span id="L915" rel="#L915">915</span>
<span id="L916" rel="#L916">916</span>
<span id="L917" rel="#L917">917</span>
<span id="L918" rel="#L918">918</span>
<span id="L919" rel="#L919">919</span>
<span id="L920" rel="#L920">920</span>
<span id="L921" rel="#L921">921</span>
<span id="L922" rel="#L922">922</span>
<span id="L923" rel="#L923">923</span>
<span id="L924" rel="#L924">924</span>
<span id="L925" rel="#L925">925</span>
<span id="L926" rel="#L926">926</span>
<span id="L927" rel="#L927">927</span>
<span id="L928" rel="#L928">928</span>
<span id="L929" rel="#L929">929</span>
<span id="L930" rel="#L930">930</span>
<span id="L931" rel="#L931">931</span>
<span id="L932" rel="#L932">932</span>
<span id="L933" rel="#L933">933</span>
<span id="L934" rel="#L934">934</span>
<span id="L935" rel="#L935">935</span>
<span id="L936" rel="#L936">936</span>
<span id="L937" rel="#L937">937</span>
<span id="L938" rel="#L938">938</span>
<span id="L939" rel="#L939">939</span>
<span id="L940" rel="#L940">940</span>
<span id="L941" rel="#L941">941</span>
<span id="L942" rel="#L942">942</span>
<span id="L943" rel="#L943">943</span>
<span id="L944" rel="#L944">944</span>
<span id="L945" rel="#L945">945</span>
<span id="L946" rel="#L946">946</span>
<span id="L947" rel="#L947">947</span>
<span id="L948" rel="#L948">948</span>
<span id="L949" rel="#L949">949</span>
<span id="L950" rel="#L950">950</span>
<span id="L951" rel="#L951">951</span>
<span id="L952" rel="#L952">952</span>
<span id="L953" rel="#L953">953</span>
<span id="L954" rel="#L954">954</span>
<span id="L955" rel="#L955">955</span>
<span id="L956" rel="#L956">956</span>
<span id="L957" rel="#L957">957</span>
<span id="L958" rel="#L958">958</span>
<span id="L959" rel="#L959">959</span>
<span id="L960" rel="#L960">960</span>
<span id="L961" rel="#L961">961</span>
<span id="L962" rel="#L962">962</span>
<span id="L963" rel="#L963">963</span>
<span id="L964" rel="#L964">964</span>
<span id="L965" rel="#L965">965</span>
<span id="L966" rel="#L966">966</span>
<span id="L967" rel="#L967">967</span>
<span id="L968" rel="#L968">968</span>
<span id="L969" rel="#L969">969</span>
<span id="L970" rel="#L970">970</span>
<span id="L971" rel="#L971">971</span>
<span id="L972" rel="#L972">972</span>
<span id="L973" rel="#L973">973</span>
<span id="L974" rel="#L974">974</span>
<span id="L975" rel="#L975">975</span>
<span id="L976" rel="#L976">976</span>
<span id="L977" rel="#L977">977</span>
<span id="L978" rel="#L978">978</span>
<span id="L979" rel="#L979">979</span>
<span id="L980" rel="#L980">980</span>
<span id="L981" rel="#L981">981</span>
<span id="L982" rel="#L982">982</span>
<span id="L983" rel="#L983">983</span>
<span id="L984" rel="#L984">984</span>
<span id="L985" rel="#L985">985</span>
<span id="L986" rel="#L986">986</span>
<span id="L987" rel="#L987">987</span>
<span id="L988" rel="#L988">988</span>
<span id="L989" rel="#L989">989</span>
<span id="L990" rel="#L990">990</span>
<span id="L991" rel="#L991">991</span>
<span id="L992" rel="#L992">992</span>
<span id="L993" rel="#L993">993</span>
<span id="L994" rel="#L994">994</span>
<span id="L995" rel="#L995">995</span>
<span id="L996" rel="#L996">996</span>
<span id="L997" rel="#L997">997</span>
<span id="L998" rel="#L998">998</span>
<span id="L999" rel="#L999">999</span>
<span id="L1000" rel="#L1000">1000</span>
<span id="L1001" rel="#L1001">1001</span>
<span id="L1002" rel="#L1002">1002</span>
<span id="L1003" rel="#L1003">1003</span>
<span id="L1004" rel="#L1004">1004</span>
<span id="L1005" rel="#L1005">1005</span>
<span id="L1006" rel="#L1006">1006</span>
<span id="L1007" rel="#L1007">1007</span>
<span id="L1008" rel="#L1008">1008</span>
<span id="L1009" rel="#L1009">1009</span>
<span id="L1010" rel="#L1010">1010</span>
<span id="L1011" rel="#L1011">1011</span>
<span id="L1012" rel="#L1012">1012</span>
<span id="L1013" rel="#L1013">1013</span>
<span id="L1014" rel="#L1014">1014</span>
<span id="L1015" rel="#L1015">1015</span>
<span id="L1016" rel="#L1016">1016</span>
<span id="L1017" rel="#L1017">1017</span>
<span id="L1018" rel="#L1018">1018</span>
<span id="L1019" rel="#L1019">1019</span>
<span id="L1020" rel="#L1020">1020</span>
<span id="L1021" rel="#L1021">1021</span>
<span id="L1022" rel="#L1022">1022</span>
<span id="L1023" rel="#L1023">1023</span>
<span id="L1024" rel="#L1024">1024</span>
<span id="L1025" rel="#L1025">1025</span>
<span id="L1026" rel="#L1026">1026</span>
<span id="L1027" rel="#L1027">1027</span>
<span id="L1028" rel="#L1028">1028</span>
<span id="L1029" rel="#L1029">1029</span>
<span id="L1030" rel="#L1030">1030</span>
<span id="L1031" rel="#L1031">1031</span>
<span id="L1032" rel="#L1032">1032</span>
<span id="L1033" rel="#L1033">1033</span>
<span id="L1034" rel="#L1034">1034</span>
<span id="L1035" rel="#L1035">1035</span>
<span id="L1036" rel="#L1036">1036</span>
<span id="L1037" rel="#L1037">1037</span>
<span id="L1038" rel="#L1038">1038</span>
<span id="L1039" rel="#L1039">1039</span>
<span id="L1040" rel="#L1040">1040</span>
<span id="L1041" rel="#L1041">1041</span>
<span id="L1042" rel="#L1042">1042</span>
<span id="L1043" rel="#L1043">1043</span>
<span id="L1044" rel="#L1044">1044</span>
<span id="L1045" rel="#L1045">1045</span>

          </td>
          <td class="blob-line-code">
                  <div class="highlight"><pre><div class='line' id='LC1'><span class="cm">/*</span></div><div class='line' id='LC2'><span class="cm"> * drivers/cpufreq/cpufreq_interactive.c</span></div><div class='line' id='LC3'><span class="cm"> *</span></div><div class='line' id='LC4'><span class="cm"> * Copyright (C) 2010 Google, Inc.</span></div><div class='line' id='LC5'><span class="cm"> *</span></div><div class='line' id='LC6'><span class="cm"> * This software is licensed under the terms of the GNU General Public</span></div><div class='line' id='LC7'><span class="cm"> * License version 2, as published by the Free Software Foundation, and</span></div><div class='line' id='LC8'><span class="cm"> * may be copied, distributed, and modified under those terms.</span></div><div class='line' id='LC9'><span class="cm"> *</span></div><div class='line' id='LC10'><span class="cm"> * This program is distributed in the hope that it will be useful,</span></div><div class='line' id='LC11'><span class="cm"> * but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC12'><span class="cm"> * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC13'><span class="cm"> * GNU General Public License for more details.</span></div><div class='line' id='LC14'><span class="cm"> *</span></div><div class='line' id='LC15'><span class="cm"> * Author: Mike Chan (mike@android.com)</span></div><div class='line' id='LC16'><span class="cm"> *</span></div><div class='line' id='LC17'><span class="cm"> */</span></div><div class='line' id='LC18'><br/></div><div class='line' id='LC19'><span class="cp">#include &lt;linux/cpu.h&gt;</span></div><div class='line' id='LC20'><span class="cp">#include &lt;linux/cpumask.h&gt;</span></div><div class='line' id='LC21'><span class="cp">#include &lt;linux/cpufreq.h&gt;</span></div><div class='line' id='LC22'><span class="cp">#include &lt;linux/module.h&gt;</span></div><div class='line' id='LC23'><span class="cp">#include &lt;linux/mutex.h&gt;</span></div><div class='line' id='LC24'><span class="cp">#include &lt;linux/sched.h&gt;</span></div><div class='line' id='LC25'><span class="cp">#include &lt;linux/tick.h&gt;</span></div><div class='line' id='LC26'><span class="cp">#include &lt;linux/time.h&gt;</span></div><div class='line' id='LC27'><span class="cp">#include &lt;linux/timer.h&gt;</span></div><div class='line' id='LC28'><span class="cp">#include &lt;linux/workqueue.h&gt;</span></div><div class='line' id='LC29'><span class="cp">#include &lt;linux/kthread.h&gt;</span></div><div class='line' id='LC30'><span class="cp">#include &lt;linux/mutex.h&gt;</span></div><div class='line' id='LC31'><span class="cp">#include &lt;linux/slab.h&gt;</span></div><div class='line' id='LC32'><span class="cp">#include &lt;linux/kernel_stat.h&gt;</span></div><div class='line' id='LC33'><span class="cp">#include &lt;linux/input.h&gt;</span></div><div class='line' id='LC34'><span class="cp">#include &lt;asm/cputime.h&gt;</span></div><div class='line' id='LC35'><span class="cp">#include &lt;linux/hotplug.h&gt;</span></div><div class='line' id='LC36'><br/></div><div class='line' id='LC37'><span class="k">static</span> <span class="kt">atomic_t</span> <span class="n">active_count</span> <span class="o">=</span> <span class="n">ATOMIC_INIT</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC38'><br/></div><div class='line' id='LC39'><span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="p">{</span></div><div class='line' id='LC40'>	<span class="k">struct</span> <span class="n">timer_list</span> <span class="n">cpu_timer</span><span class="p">;</span></div><div class='line' id='LC41'>	<span class="kt">int</span> <span class="n">timer_idlecancel</span><span class="p">;</span></div><div class='line' id='LC42'>	<span class="n">u64</span> <span class="n">time_in_idle</span><span class="p">;</span></div><div class='line' id='LC43'>	<span class="n">u64</span> <span class="n">idle_exit_time</span><span class="p">;</span></div><div class='line' id='LC44'>	<span class="n">u64</span> <span class="n">timer_run_time</span><span class="p">;</span></div><div class='line' id='LC45'>	<span class="kt">int</span> <span class="n">idling</span><span class="p">;</span></div><div class='line' id='LC46'>	<span class="n">u64</span> <span class="n">target_set_time</span><span class="p">;</span></div><div class='line' id='LC47'>	<span class="n">u64</span> <span class="n">target_set_time_in_idle</span><span class="p">;</span></div><div class='line' id='LC48'>	<span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">;</span></div><div class='line' id='LC49'>	<span class="k">struct</span> <span class="n">cpufreq_frequency_table</span> <span class="o">*</span><span class="n">freq_table</span><span class="p">;</span></div><div class='line' id='LC50'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">target_freq</span><span class="p">;</span></div><div class='line' id='LC51'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">floor_freq</span><span class="p">;</span></div><div class='line' id='LC52'>	<span class="n">u64</span> <span class="n">floor_validate_time</span><span class="p">;</span></div><div class='line' id='LC53'>	<span class="n">u64</span> <span class="n">hispeed_validate_time</span><span class="p">;</span></div><div class='line' id='LC54'>	<span class="kt">int</span> <span class="n">governor_enabled</span><span class="p">;</span></div><div class='line' id='LC55'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">prev_iowait_time</span><span class="p">;</span></div><div class='line' id='LC56'><span class="p">};</span></div><div class='line' id='LC57'><br/></div><div class='line' id='LC58'><span class="k">static</span> <span class="nf">DEFINE_PER_CPU</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span><span class="p">,</span> <span class="n">cpuinfo</span><span class="p">);</span></div><div class='line' id='LC59'><br/></div><div class='line' id='LC60'><span class="cm">/* Workqueues handle frequency scaling */</span></div><div class='line' id='LC61'><span class="k">static</span> <span class="k">struct</span> <span class="n">task_struct</span> <span class="o">*</span><span class="n">up_task</span><span class="p">;</span></div><div class='line' id='LC62'><span class="k">static</span> <span class="k">struct</span> <span class="n">workqueue_struct</span> <span class="o">*</span><span class="n">down_wq</span><span class="p">;</span></div><div class='line' id='LC63'><span class="k">static</span> <span class="k">struct</span> <span class="n">work_struct</span> <span class="n">freq_scale_down_work</span><span class="p">;</span></div><div class='line' id='LC64'><span class="k">static</span> <span class="kt">cpumask_t</span> <span class="n">up_cpumask</span><span class="p">;</span></div><div class='line' id='LC65'><span class="k">static</span> <span class="kt">spinlock_t</span> <span class="n">up_cpumask_lock</span><span class="p">;</span></div><div class='line' id='LC66'><span class="k">static</span> <span class="kt">cpumask_t</span> <span class="n">down_cpumask</span><span class="p">;</span></div><div class='line' id='LC67'><span class="k">static</span> <span class="kt">spinlock_t</span> <span class="n">down_cpumask_lock</span><span class="p">;</span></div><div class='line' id='LC68'><span class="k">static</span> <span class="k">struct</span> <span class="n">mutex</span> <span class="n">set_speed_lock</span><span class="p">;</span></div><div class='line' id='LC69'><br/></div><div class='line' id='LC70'><span class="cm">/* Hi speed to bump to from lo speed when load burst (default max) */</span></div><div class='line' id='LC71'><span class="cp">#define DEFAULT_HISPEED_FREQ 760000</span></div><div class='line' id='LC72'><span class="k">static</span> <span class="n">u64</span> <span class="n">hispeed_freq</span><span class="p">;</span></div><div class='line' id='LC73'><br/></div><div class='line' id='LC74'><span class="cp">#define DEFAULT_UP_THRESHOLD 85</span></div><div class='line' id='LC75'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">up_threshold</span><span class="p">;</span></div><div class='line' id='LC76'><br/></div><div class='line' id='LC77'><span class="cm">/*</span></div><div class='line' id='LC78'><span class="cm"> * The minimum amount of time to spend at a frequency before we can ramp down.</span></div><div class='line' id='LC79'><span class="cm"> */</span></div><div class='line' id='LC80'><span class="cp">#define DEFAULT_MIN_SAMPLE_TIME (80 * USEC_PER_MSEC)</span></div><div class='line' id='LC81'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">min_sample_time</span><span class="p">;</span></div><div class='line' id='LC82'><br/></div><div class='line' id='LC83'><span class="cm">/*</span></div><div class='line' id='LC84'><span class="cm"> * The sample rate of the timer used to increase frequency</span></div><div class='line' id='LC85'><span class="cm"> */</span></div><div class='line' id='LC86'><span class="cp">#define DEFAULT_TIMER_RATE (35 * USEC_PER_MSEC)</span></div><div class='line' id='LC87'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">timer_rate</span><span class="p">;</span></div><div class='line' id='LC88'><br/></div><div class='line' id='LC89'><span class="cm">/*</span></div><div class='line' id='LC90'><span class="cm"> * Wait this long before raising speed above hispeed, by default a single</span></div><div class='line' id='LC91'><span class="cm"> * timer interval.</span></div><div class='line' id='LC92'><span class="cm"> */</span></div><div class='line' id='LC93'><span class="cp">#define DEFAULT_ABOVE_HISPEED_DELAY DEFAULT_TIMER_RATE</span></div><div class='line' id='LC94'><span class="k">static</span> <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">above_hispeed_delay_val</span><span class="p">;</span></div><div class='line' id='LC95'><br/></div><div class='line' id='LC96'><span class="cm">/*</span></div><div class='line' id='LC97'><span class="cm"> * The CPU will be boosted to this frequency when the screen is</span></div><div class='line' id='LC98'><span class="cm"> * touched. input_boost needs to be enabled.</span></div><div class='line' id='LC99'><span class="cm"> */</span></div><div class='line' id='LC100'><span class="cp">#define DEFAULT_INPUT_BOOST_FREQ 1000000 </span></div><div class='line' id='LC101'><span class="k">static</span> <span class="kt">int</span> <span class="n">input_boost_freq</span><span class="p">;</span></div><div class='line' id='LC102'><br/></div><div class='line' id='LC103'><span class="cm">/*</span></div><div class='line' id='LC104'><span class="cm"> * Boost pulse to hispeed on touchscreen input.</span></div><div class='line' id='LC105'><span class="cm"> */</span></div><div class='line' id='LC106'><span class="k">static</span> <span class="kt">int</span> <span class="n">input_boost_val</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC107'><br/></div><div class='line' id='LC108'><span class="k">struct</span> <span class="n">cpufreq_interactive_inputopen</span> <span class="p">{</span></div><div class='line' id='LC109'>	<span class="k">struct</span> <span class="n">input_handle</span> <span class="o">*</span><span class="n">handle</span><span class="p">;</span></div><div class='line' id='LC110'>	<span class="k">struct</span> <span class="n">work_struct</span> <span class="n">inputopen_work</span><span class="p">;</span></div><div class='line' id='LC111'><span class="p">};</span></div><div class='line' id='LC112'><br/></div><div class='line' id='LC113'><span class="k">static</span> <span class="k">struct</span> <span class="n">cpufreq_interactive_inputopen</span> <span class="n">inputopen</span><span class="p">;</span></div><div class='line' id='LC114'><span class="k">static</span> <span class="k">struct</span> <span class="n">workqueue_struct</span> <span class="o">*</span><span class="n">inputopen_wq</span><span class="p">;</span></div><div class='line' id='LC115'><br/></div><div class='line' id='LC116'><span class="cm">/* </span></div><div class='line' id='LC117'><span class="cm"> * dynamic tunables scaling flag linked to the </span></div><div class='line' id='LC118'><span class="cm"> * hotplug driver </span></div><div class='line' id='LC119'><span class="cm"> */</span> </div><div class='line' id='LC120'><span class="k">static</span> <span class="kt">bool</span> <span class="n">dynamic_scaling</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC121'><br/></div><div class='line' id='LC122'><span class="cm">/* extern vars */</span></div><div class='line' id='LC123'><span class="kt">bool</span> <span class="n">is_touching</span><span class="p">;</span></div><div class='line' id='LC124'><span class="n">u64</span> <span class="n">freq_boosted_time</span><span class="p">;</span></div><div class='line' id='LC125'><br/></div><div class='line' id='LC126'><span class="k">static</span> <span class="kt">int</span> <span class="nf">cpufreq_governor_interactive</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span></div><div class='line' id='LC127'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">event</span><span class="p">);</span></div><div class='line' id='LC128'><br/></div><div class='line' id='LC129'><span class="cp">#ifndef CONFIG_CPU_FREQ_DEFAULT_GOV_INTERACTIVE</span></div><div class='line' id='LC130'><span class="k">static</span></div><div class='line' id='LC131'><span class="cp">#endif</span></div><div class='line' id='LC132'><span class="k">struct</span> <span class="n">cpufreq_governor</span> <span class="n">cpufreq_gov_interactive</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC133'>	<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="s">&quot;interactive&quot;</span><span class="p">,</span></div><div class='line' id='LC134'>	<span class="p">.</span><span class="n">governor</span> <span class="o">=</span> <span class="n">cpufreq_governor_interactive</span><span class="p">,</span></div><div class='line' id='LC135'>	<span class="p">.</span><span class="n">max_transition_latency</span> <span class="o">=</span> <span class="mi">10000000</span><span class="p">,</span></div><div class='line' id='LC136'>	<span class="p">.</span><span class="n">owner</span> <span class="o">=</span> <span class="n">THIS_MODULE</span><span class="p">,</span></div><div class='line' id='LC137'><span class="p">};</span></div><div class='line' id='LC138'><br/></div><div class='line' id='LC139'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">cputime64_t</span> <span class="nf">get_cpu_idle_time_jiffy</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span><span class="p">,</span></div><div class='line' id='LC140'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">cputime64_t</span> <span class="o">*</span><span class="n">wall</span><span class="p">)</span></div><div class='line' id='LC141'><span class="p">{</span></div><div class='line' id='LC142'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">cputime64_t</span> <span class="n">idle_time</span><span class="p">;</span></div><div class='line' id='LC143'>	<span class="kt">cputime64_t</span> <span class="n">cur_wall_time</span><span class="p">;</span></div><div class='line' id='LC144'>	<span class="kt">cputime64_t</span> <span class="n">busy_time</span><span class="p">;</span></div><div class='line' id='LC145'><br/></div><div class='line' id='LC146'>	<span class="n">cur_wall_time</span> <span class="o">=</span> <span class="n">jiffies64_to_cputime64</span><span class="p">(</span><span class="n">get_jiffies_64</span><span class="p">());</span></div><div class='line' id='LC147'><br/></div><div class='line' id='LC148'>	<span class="n">busy_time</span> <span class="o">=</span> <span class="n">cputime64_add</span><span class="p">(</span><span class="n">kstat_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">).</span><span class="n">cpustat</span><span class="p">.</span><span class="n">user</span><span class="p">,</span></div><div class='line' id='LC149'>			<span class="n">kstat_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">).</span><span class="n">cpustat</span><span class="p">.</span><span class="n">system</span><span class="p">);</span></div><div class='line' id='LC150'>	<span class="n">busy_time</span> <span class="o">=</span> <span class="n">cputime64_add</span><span class="p">(</span><span class="n">busy_time</span><span class="p">,</span> <span class="n">kstat_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">).</span><span class="n">cpustat</span><span class="p">.</span><span class="n">irq</span><span class="p">);</span></div><div class='line' id='LC151'>	<span class="n">busy_time</span> <span class="o">=</span> <span class="n">cputime64_add</span><span class="p">(</span><span class="n">busy_time</span><span class="p">,</span> <span class="n">kstat_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">).</span><span class="n">cpustat</span><span class="p">.</span><span class="n">softirq</span><span class="p">);</span></div><div class='line' id='LC152'>	<span class="n">busy_time</span> <span class="o">=</span> <span class="n">cputime64_add</span><span class="p">(</span><span class="n">busy_time</span><span class="p">,</span> <span class="n">kstat_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">).</span><span class="n">cpustat</span><span class="p">.</span><span class="n">steal</span><span class="p">);</span></div><div class='line' id='LC153'>	<span class="n">busy_time</span> <span class="o">=</span> <span class="n">cputime64_add</span><span class="p">(</span><span class="n">busy_time</span><span class="p">,</span> <span class="n">kstat_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">).</span><span class="n">cpustat</span><span class="p">.</span><span class="n">nice</span><span class="p">);</span></div><div class='line' id='LC154'><br/></div><div class='line' id='LC155'>&nbsp;&nbsp;	<span class="n">idle_time</span> <span class="o">=</span> <span class="n">cur_wall_time</span> <span class="o">-</span> <span class="n">busy_time</span><span class="p">;</span></div><div class='line' id='LC156'>&nbsp;&nbsp;	<span class="k">if</span> <span class="p">(</span><span class="n">wall</span><span class="p">)</span></div><div class='line' id='LC157'>&nbsp;&nbsp;&nbsp;&nbsp;	<span class="o">*</span><span class="n">wall</span> <span class="o">=</span> <span class="n">jiffies_to_usecs</span><span class="p">(</span><span class="n">cur_wall_time</span><span class="p">);</span></div><div class='line' id='LC158'><br/></div><div class='line' id='LC159'>&nbsp;&nbsp;	<span class="k">return</span> <span class="n">jiffies_to_usecs</span><span class="p">(</span><span class="n">idle_time</span><span class="p">);</span></div><div class='line' id='LC160'><span class="p">}</span></div><div class='line' id='LC161'><br/></div><div class='line' id='LC162'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">cputime64_t</span> <span class="nf">get_cpu_iowait_time</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span><span class="p">,</span> <span class="kt">cputime64_t</span> <span class="o">*</span><span class="n">wall</span><span class="p">)</span></div><div class='line' id='LC163'><span class="p">{</span></div><div class='line' id='LC164'>	<span class="n">u64</span> <span class="n">iowait_time</span> <span class="o">=</span> <span class="n">get_cpu_iowait_time_us</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="n">wall</span><span class="p">);</span></div><div class='line' id='LC165'><br/></div><div class='line' id='LC166'>	<span class="k">if</span> <span class="p">(</span><span class="n">iowait_time</span> <span class="o">==</span> <span class="o">-</span><span class="mi">1ULL</span><span class="p">)</span></div><div class='line' id='LC167'>		<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC168'><br/></div><div class='line' id='LC169'>	<span class="k">return</span> <span class="n">iowait_time</span><span class="p">;</span></div><div class='line' id='LC170'><span class="p">}</span></div><div class='line' id='LC171'><br/></div><div class='line' id='LC172'><span class="k">static</span> <span class="kr">inline</span> <span class="kt">cputime64_t</span> <span class="nf">get_cpu_idle_time</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span><span class="p">,</span></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">cputime64_t</span> <span class="o">*</span><span class="n">wall</span><span class="p">)</span></div><div class='line' id='LC174'><span class="p">{</span></div><div class='line' id='LC175'>&nbsp;&nbsp;	<span class="n">u64</span> <span class="n">idle_time</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_us</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="n">wall</span><span class="p">)</span> <span class="o">-</span> </div><div class='line' id='LC176'>&nbsp;&nbsp;						<span class="n">get_cpu_iowait_time</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="n">wall</span><span class="p">);</span></div><div class='line' id='LC177'><br/></div><div class='line' id='LC178'>&nbsp;&nbsp;	<span class="k">if</span> <span class="p">(</span><span class="n">idle_time</span> <span class="o">==</span> <span class="o">-</span><span class="mi">1ULL</span><span class="p">)</span></div><div class='line' id='LC179'>&nbsp;&nbsp;&nbsp;&nbsp;	<span class="n">idle_time</span> <span class="o">=</span> <span class="n">get_cpu_idle_time_jiffy</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="n">wall</span><span class="p">);</span></div><div class='line' id='LC180'><br/></div><div class='line' id='LC181'>&nbsp;&nbsp;	<span class="k">return</span> <span class="n">idle_time</span><span class="p">;</span></div><div class='line' id='LC182'><span class="p">}</span></div><div class='line' id='LC183'><br/></div><div class='line' id='LC184'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_interactive_timer</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">data</span><span class="p">)</span></div><div class='line' id='LC185'><span class="p">{</span></div><div class='line' id='LC186'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">delta_idle</span><span class="p">;</span></div><div class='line' id='LC187'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">delta_time</span><span class="p">;</span></div><div class='line' id='LC188'>	<span class="kt">int</span> <span class="n">cpu_load</span><span class="p">;</span></div><div class='line' id='LC189'>	<span class="kt">int</span> <span class="n">load_since_change</span><span class="p">;</span></div><div class='line' id='LC190'>	<span class="n">u64</span> <span class="n">time_in_idle</span><span class="p">;</span></div><div class='line' id='LC191'>	<span class="n">u64</span> <span class="n">idle_exit_time</span><span class="p">;</span></div><div class='line' id='LC192'>	<span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="o">*</span><span class="n">pcpu</span> <span class="o">=</span></div><div class='line' id='LC193'>		<span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">data</span><span class="p">);</span></div><div class='line' id='LC194'>	<span class="n">u64</span> <span class="n">now_idle</span><span class="p">;</span></div><div class='line' id='LC195'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">new_freq</span><span class="p">;</span></div><div class='line' id='LC196'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">index</span><span class="p">;</span></div><div class='line' id='LC197'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">flags</span><span class="p">;</span></div><div class='line' id='LC198'><br/></div><div class='line' id='LC199'>	<span class="n">smp_rmb</span><span class="p">();</span></div><div class='line' id='LC200'><br/></div><div class='line' id='LC201'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">governor_enabled</span><span class="p">)</span></div><div class='line' id='LC202'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC203'><br/></div><div class='line' id='LC204'>	<span class="k">if</span> <span class="p">(</span><span class="n">cpu_is_offline</span><span class="p">(</span><span class="n">data</span><span class="p">))</span></div><div class='line' id='LC205'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC206'><br/></div><div class='line' id='LC207'>	<span class="cm">/*</span></div><div class='line' id='LC208'><span class="cm">	 * Once pcpu-&gt;timer_run_time is updated to &gt;= pcpu-&gt;idle_exit_time,</span></div><div class='line' id='LC209'><span class="cm">	 * this lets idle exit know the current idle time sample has</span></div><div class='line' id='LC210'><span class="cm">	 * been processed, and idle exit can generate a new sample and</span></div><div class='line' id='LC211'><span class="cm">	 * re-arm the timer.  This prevents a concurrent idle</span></div><div class='line' id='LC212'><span class="cm">	 * exit on that CPU from writing a new set of info at the same time</span></div><div class='line' id='LC213'><span class="cm">	 * the timer function runs (the timer function can&#39;t use that info</span></div><div class='line' id='LC214'><span class="cm">	 * until more time passes).</span></div><div class='line' id='LC215'><span class="cm">	 */</span></div><div class='line' id='LC216'>	<span class="n">time_in_idle</span> <span class="o">=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">time_in_idle</span><span class="p">;</span></div><div class='line' id='LC217'>	<span class="n">idle_exit_time</span> <span class="o">=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span><span class="p">;</span></div><div class='line' id='LC218'>	<span class="n">now_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_run_time</span><span class="p">);</span></div><div class='line' id='LC219'>	<span class="n">smp_wmb</span><span class="p">();</span></div><div class='line' id='LC220'><br/></div><div class='line' id='LC221'>	<span class="cm">/* If we raced with cancelling a timer, skip. */</span></div><div class='line' id='LC222'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">idle_exit_time</span><span class="p">)</span></div><div class='line' id='LC223'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC224'><br/></div><div class='line' id='LC225'>	<span class="n">delta_idle</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)(</span><span class="n">now_idle</span> <span class="o">-</span> <span class="n">time_in_idle</span><span class="p">);</span></div><div class='line' id='LC226'>	<span class="n">delta_time</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_run_time</span> <span class="o">-</span> <span class="n">idle_exit_time</span><span class="p">);</span></div><div class='line' id='LC227'><br/></div><div class='line' id='LC228'>	<span class="cm">/*</span></div><div class='line' id='LC229'><span class="cm">	 * If timer ran less than 1ms after short-term sample started, retry.</span></div><div class='line' id='LC230'><span class="cm">	 */</span></div><div class='line' id='LC231'>	<span class="k">if</span> <span class="p">(</span><span class="n">delta_time</span> <span class="o">&lt;</span> <span class="mi">1000</span><span class="p">)</span></div><div class='line' id='LC232'>		<span class="k">goto</span> <span class="n">rearm</span><span class="p">;</span></div><div class='line' id='LC233'><br/></div><div class='line' id='LC234'>	<span class="k">if</span> <span class="p">(</span><span class="n">delta_idle</span> <span class="o">&gt;</span> <span class="n">delta_time</span><span class="p">)</span></div><div class='line' id='LC235'>		<span class="n">cpu_load</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC236'>	<span class="k">else</span></div><div class='line' id='LC237'>		<span class="n">cpu_load</span> <span class="o">=</span> <span class="mi">100</span> <span class="o">*</span> <span class="p">(</span><span class="n">delta_time</span> <span class="o">-</span> <span class="n">delta_idle</span><span class="p">)</span> <span class="o">/</span> <span class="n">delta_time</span><span class="p">;</span></div><div class='line' id='LC238'><br/></div><div class='line' id='LC239'>	<span class="n">delta_idle</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)(</span><span class="n">now_idle</span> <span class="o">-</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_set_time_in_idle</span><span class="p">);</span></div><div class='line' id='LC240'>	<span class="n">delta_time</span> <span class="o">=</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span><span class="p">)(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_run_time</span> <span class="o">-</span></div><div class='line' id='LC241'>				    <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_set_time</span><span class="p">);</span></div><div class='line' id='LC242'><br/></div><div class='line' id='LC243'>	<span class="k">if</span> <span class="p">((</span><span class="n">delta_time</span> <span class="o">==</span> <span class="mi">0</span><span class="p">)</span> <span class="o">||</span> <span class="p">(</span><span class="n">delta_idle</span> <span class="o">&gt;</span> <span class="n">delta_time</span><span class="p">))</span></div><div class='line' id='LC244'>		<span class="n">load_since_change</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC245'>	<span class="k">else</span></div><div class='line' id='LC246'>		<span class="n">load_since_change</span> <span class="o">=</span></div><div class='line' id='LC247'>			<span class="mi">100</span> <span class="o">*</span> <span class="p">(</span><span class="n">delta_time</span> <span class="o">-</span> <span class="n">delta_idle</span><span class="p">)</span> <span class="o">/</span> <span class="n">delta_time</span><span class="p">;</span></div><div class='line' id='LC248'><br/></div><div class='line' id='LC249'>	<span class="cm">/*</span></div><div class='line' id='LC250'><span class="cm">	 * Choose greater of short-term load (since last idle timer</span></div><div class='line' id='LC251'><span class="cm">	 * started or timer function re-armed itself) or long-term load</span></div><div class='line' id='LC252'><span class="cm">	 * (since last frequency change).</span></div><div class='line' id='LC253'><span class="cm">	 */</span></div><div class='line' id='LC254'>	<span class="k">if</span> <span class="p">(</span><span class="n">load_since_change</span> <span class="o">&gt;</span> <span class="n">cpu_load</span><span class="p">)</span></div><div class='line' id='LC255'>		<span class="n">cpu_load</span> <span class="o">=</span> <span class="n">load_since_change</span><span class="p">;</span></div><div class='line' id='LC256'><br/></div><div class='line' id='LC257'>	<span class="k">if</span> <span class="p">(</span><span class="n">cpu_load</span> <span class="o">&gt;</span> <span class="n">up_threshold</span><span class="p">)</span></div><div class='line' id='LC258'>		<span class="n">new_freq</span> <span class="o">=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">;</span></div><div class='line' id='LC259'>	<span class="k">else</span></div><div class='line' id='LC260'>		<span class="n">new_freq</span> <span class="o">=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span> <span class="o">*</span> <span class="n">cpu_load</span> <span class="o">/</span> <span class="mi">100</span><span class="p">;</span></div><div class='line' id='LC261'><br/></div><div class='line' id='LC262'>	<span class="k">if</span> <span class="p">(</span><span class="n">new_freq</span> <span class="o">&lt;=</span> <span class="n">hispeed_freq</span><span class="p">)</span></div><div class='line' id='LC263'>		<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">hispeed_validate_time</span> <span class="o">=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_run_time</span><span class="p">;</span></div><div class='line' id='LC264'><br/></div><div class='line' id='LC265'>	<span class="k">if</span> <span class="p">(</span><span class="n">cpufreq_frequency_table_target</span><span class="p">(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="p">,</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">freq_table</span><span class="p">,</span></div><div class='line' id='LC266'>					   <span class="n">new_freq</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">,</span></div><div class='line' id='LC267'>					   <span class="o">&amp;</span><span class="n">index</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC268'>		<span class="n">pr_warn_once</span><span class="p">(</span><span class="s">&quot;timer %d: cpufreq_frequency_table_target error</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC269'>			     <span class="p">(</span><span class="kt">int</span><span class="p">)</span> <span class="n">data</span><span class="p">);</span></div><div class='line' id='LC270'>		<span class="k">goto</span> <span class="n">rearm</span><span class="p">;</span></div><div class='line' id='LC271'>	<span class="p">}</span></div><div class='line' id='LC272'><br/></div><div class='line' id='LC273'>	<span class="n">new_freq</span> <span class="o">=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">freq_table</span><span class="p">[</span><span class="n">index</span><span class="p">].</span><span class="n">frequency</span><span class="p">;</span></div><div class='line' id='LC274'><br/></div><div class='line' id='LC275'>	<span class="cm">/* we want cpu0 to be the only core blocked for freq changes while</span></div><div class='line' id='LC276'><span class="cm">	   we are touching the screen for UI interaction */</span></div><div class='line' id='LC277'>	<span class="k">if</span> <span class="p">(</span><span class="n">is_touching</span> <span class="o">&amp;&amp;</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpu</span> <span class="o">&lt;</span> <span class="mi">2</span><span class="p">)</span> </div><div class='line' id='LC278'>	<span class="p">{</span></div><div class='line' id='LC279'>		<span class="k">if</span> <span class="p">(</span><span class="n">ktime_to_ms</span><span class="p">(</span><span class="n">ktime_get</span><span class="p">())</span> <span class="o">-</span> <span class="n">freq_boosted_time</span> <span class="o">&gt;=</span> <span class="mi">1000</span><span class="p">)</span></div><div class='line' id='LC280'>			<span class="n">is_touching</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC281'><br/></div><div class='line' id='LC282'>		<span class="k">if</span> <span class="p">(</span><span class="n">new_freq</span> <span class="o">&lt;</span> <span class="n">input_boost_freq</span> <span class="o">||</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span> <span class="o">&lt;</span> <span class="n">input_boost_freq</span><span class="p">)</span></div><div class='line' id='LC283'>			<span class="n">new_freq</span> <span class="o">=</span> <span class="n">input_boost_freq</span><span class="p">;</span></div><div class='line' id='LC284'>	<span class="p">}</span></div><div class='line' id='LC285'><br/></div><div class='line' id='LC286'>	<span class="cm">/*</span></div><div class='line' id='LC287'><span class="cm">	 * Do not scale below floor_freq unless we have been at or above the</span></div><div class='line' id='LC288'><span class="cm">	 * floor frequency for the minimum sample time since last validated.</span></div><div class='line' id='LC289'><span class="cm">	 */</span></div><div class='line' id='LC290'>	<span class="k">if</span> <span class="p">(</span><span class="n">new_freq</span> <span class="o">&lt;</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">floor_freq</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC291'>		<span class="k">if</span> <span class="p">(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_run_time</span> <span class="o">-</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">floor_validate_time</span></div><div class='line' id='LC292'>		    <span class="o">&lt;</span> <span class="n">min_sample_time</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC293'>			<span class="k">goto</span> <span class="n">rearm</span><span class="p">;</span></div><div class='line' id='LC294'>		<span class="p">}</span></div><div class='line' id='LC295'>	<span class="p">}</span></div><div class='line' id='LC296'><br/></div><div class='line' id='LC297'>	<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">floor_freq</span> <span class="o">=</span> <span class="n">new_freq</span><span class="p">;</span></div><div class='line' id='LC298'>	<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">floor_validate_time</span> <span class="o">=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_run_time</span><span class="p">;</span></div><div class='line' id='LC299'><br/></div><div class='line' id='LC300'>	<span class="k">if</span> <span class="p">(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">==</span> <span class="n">new_freq</span><span class="p">)</span></div><div class='line' id='LC301'>&nbsp;&nbsp;&nbsp;&nbsp;	<span class="k">goto</span> <span class="n">rearm_if_notmax</span><span class="p">;</span></div><div class='line' id='LC302'><br/></div><div class='line' id='LC303'>	<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_set_time_in_idle</span> <span class="o">=</span> <span class="n">now_idle</span><span class="p">;</span></div><div class='line' id='LC304'>	<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_set_time</span> <span class="o">=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_run_time</span><span class="p">;</span></div><div class='line' id='LC305'><br/></div><div class='line' id='LC306'>	<span class="k">if</span> <span class="p">(</span><span class="n">new_freq</span> <span class="o">&lt;</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC307'>		<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">=</span> <span class="n">new_freq</span><span class="p">;</span></div><div class='line' id='LC308'>		<span class="n">spin_lock_irqsave</span><span class="p">(</span><span class="o">&amp;</span><span class="n">down_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC309'>		<span class="n">cpumask_set_cpu</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">down_cpumask</span><span class="p">);</span></div><div class='line' id='LC310'>		<span class="n">spin_unlock_irqrestore</span><span class="p">(</span><span class="o">&amp;</span><span class="n">down_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC311'>		<span class="n">queue_work</span><span class="p">(</span><span class="n">down_wq</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">freq_scale_down_work</span><span class="p">);</span></div><div class='line' id='LC312'>&nbsp;&nbsp;	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC313'>		<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">=</span> <span class="n">new_freq</span><span class="p">;</span></div><div class='line' id='LC314'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	<span class="n">spin_lock_irqsave</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC315'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	<span class="n">cpumask_set_cpu</span><span class="p">(</span><span class="n">data</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">up_cpumask</span><span class="p">);</span></div><div class='line' id='LC316'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	<span class="n">spin_unlock_irqrestore</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC317'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;	<span class="n">wake_up_process</span><span class="p">(</span><span class="n">up_task</span><span class="p">);</span></div><div class='line' id='LC318'>	<span class="p">}</span></div><div class='line' id='LC319'><br/></div><div class='line' id='LC320'><span class="nl">rearm_if_notmax:</span></div><div class='line' id='LC321'>	<span class="k">if</span> <span class="p">(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">==</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">)</span></div><div class='line' id='LC322'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC323'><br/></div><div class='line' id='LC324'><span class="nl">rearm:</span></div><div class='line' id='LC325'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">timer_pending</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC326'>		<span class="cm">/*</span></div><div class='line' id='LC327'><span class="cm">		 * If already at min: if that CPU is idle, don&#39;t set timer.</span></div><div class='line' id='LC328'><span class="cm">		 * Else cancel the timer if that CPU goes idle.  We don&#39;t</span></div><div class='line' id='LC329'><span class="cm">		 * need to re-evaluate speed until the next idle exit.</span></div><div class='line' id='LC330'><span class="cm">		 */</span></div><div class='line' id='LC331'>		<span class="k">if</span> <span class="p">(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">==</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC332'>			<span class="n">smp_rmb</span><span class="p">();</span></div><div class='line' id='LC333'><br/></div><div class='line' id='LC334'>			<span class="k">if</span> <span class="p">(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idling</span><span class="p">)</span></div><div class='line' id='LC335'>				<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC336'><br/></div><div class='line' id='LC337'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_idlecancel</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC338'>		<span class="p">}</span></div><div class='line' id='LC339'><br/></div><div class='line' id='LC340'>		<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">time_in_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time</span><span class="p">(</span></div><div class='line' id='LC341'>			<span class="n">data</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span><span class="p">);</span></div><div class='line' id='LC342'>		<span class="n">mod_timer_pinned</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">,</span></div><div class='line' id='LC343'>			  <span class="n">jiffies</span> <span class="o">+</span> <span class="n">usecs_to_jiffies</span><span class="p">(</span><span class="n">timer_rate</span><span class="p">));</span></div><div class='line' id='LC344'>	<span class="p">}</span></div><div class='line' id='LC345'><br/></div><div class='line' id='LC346'>	<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC347'><span class="p">}</span></div><div class='line' id='LC348'><br/></div><div class='line' id='LC349'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_interactive_idle_start</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC350'><span class="p">{</span></div><div class='line' id='LC351'>	<span class="kt">int</span> <span class="n">cpu</span> <span class="o">=</span> <span class="n">smp_processor_id</span><span class="p">();</span></div><div class='line' id='LC352'>	<span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="o">*</span><span class="n">pcpu</span> <span class="o">=</span></div><div class='line' id='LC353'>		<span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">cpu</span><span class="p">);</span></div><div class='line' id='LC354'>	<span class="kt">int</span> <span class="n">pending</span><span class="p">;</span></div><div class='line' id='LC355'><br/></div><div class='line' id='LC356'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">governor_enabled</span><span class="p">)</span></div><div class='line' id='LC357'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC358'><br/></div><div class='line' id='LC359'>	<span class="k">if</span> <span class="p">(</span><span class="n">cpu_is_offline</span><span class="p">(</span><span class="n">cpu</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC360'>		<span class="n">del_timer</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">);</span></div><div class='line' id='LC361'>		<span class="k">return</span><span class="p">;</span></div><div class='line' id='LC362'>	<span class="p">}</span></div><div class='line' id='LC363'><br/></div><div class='line' id='LC364'>	<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idling</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC365'>	<span class="n">smp_wmb</span><span class="p">();</span></div><div class='line' id='LC366'>	<span class="n">pending</span> <span class="o">=</span> <span class="n">timer_pending</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">);</span></div><div class='line' id='LC367'><br/></div><div class='line' id='LC368'>	<span class="k">if</span> <span class="p">(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">!=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC369'><span class="cp">#ifdef CONFIG_SMP</span></div><div class='line' id='LC370'>		<span class="cm">/*</span></div><div class='line' id='LC371'><span class="cm">		 * Entering idle while not at lowest speed.  On some</span></div><div class='line' id='LC372'><span class="cm">		 * platforms this can hold the other CPU(s) at that speed</span></div><div class='line' id='LC373'><span class="cm">		 * even though the CPU is idle. Set a timer to re-evaluate</span></div><div class='line' id='LC374'><span class="cm">		 * speed so this idle CPU doesn&#39;t hold the other CPUs above</span></div><div class='line' id='LC375'><span class="cm">		 * min indefinitely.  This should probably be a quirk of</span></div><div class='line' id='LC376'><span class="cm">		 * the CPUFreq driver.</span></div><div class='line' id='LC377'><span class="cm">		 */</span></div><div class='line' id='LC378'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pending</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC379'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">time_in_idle</span> <span class="o">=</span> <span class="n">get_cpu_idle_time</span><span class="p">(</span></div><div class='line' id='LC380'>				<span class="n">smp_processor_id</span><span class="p">(),</span> <span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span><span class="p">);</span></div><div class='line' id='LC381'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_idlecancel</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC382'>			<span class="n">mod_timer_pinned</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">,</span></div><div class='line' id='LC383'>				  <span class="n">jiffies</span> <span class="o">+</span> <span class="n">usecs_to_jiffies</span><span class="p">(</span><span class="n">timer_rate</span><span class="p">));</span></div><div class='line' id='LC384'>		<span class="p">}</span></div><div class='line' id='LC385'><span class="cp">#endif</span></div><div class='line' id='LC386'>	<span class="p">}</span> <span class="k">else</span> <span class="p">{</span></div><div class='line' id='LC387'>		<span class="cm">/*</span></div><div class='line' id='LC388'><span class="cm">		 * If at min speed and entering idle after load has</span></div><div class='line' id='LC389'><span class="cm">		 * already been evaluated, and a timer has been set just in</span></div><div class='line' id='LC390'><span class="cm">		 * case the CPU suddenly goes busy, cancel that timer.  The</span></div><div class='line' id='LC391'><span class="cm">		 * CPU didn&#39;t go busy; we&#39;ll recheck things upon idle exit.</span></div><div class='line' id='LC392'><span class="cm">		 */</span></div><div class='line' id='LC393'>		<span class="k">if</span> <span class="p">(</span><span class="n">pending</span> <span class="o">&amp;&amp;</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_idlecancel</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC394'>			<span class="n">del_timer</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">);</span></div><div class='line' id='LC395'>			<span class="cm">/*</span></div><div class='line' id='LC396'><span class="cm">			 * Ensure last timer run time is after current idle</span></div><div class='line' id='LC397'><span class="cm">			 * sample start time, so next idle exit will always</span></div><div class='line' id='LC398'><span class="cm">			 * start a new idle sampling period.</span></div><div class='line' id='LC399'><span class="cm">			 */</span></div><div class='line' id='LC400'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC401'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_idlecancel</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC402'>		<span class="p">}</span></div><div class='line' id='LC403'>	<span class="p">}</span></div><div class='line' id='LC404'><br/></div><div class='line' id='LC405'><span class="p">}</span></div><div class='line' id='LC406'><br/></div><div class='line' id='LC407'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_interactive_idle_end</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC408'><span class="p">{</span></div><div class='line' id='LC409'>	<span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="o">*</span><span class="n">pcpu</span> <span class="o">=</span></div><div class='line' id='LC410'>		<span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">smp_processor_id</span><span class="p">());</span></div><div class='line' id='LC411'><br/></div><div class='line' id='LC412'>	<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idling</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC413'>	<span class="n">smp_wmb</span><span class="p">();</span></div><div class='line' id='LC414'><br/></div><div class='line' id='LC415'>	<span class="cm">/*</span></div><div class='line' id='LC416'><span class="cm">	 * Arm the timer for 1-2 ticks later if not already, and if the timer</span></div><div class='line' id='LC417'><span class="cm">	 * function has already processed the previous load sampling</span></div><div class='line' id='LC418'><span class="cm">	 * interval.  (If the timer is not pending but has not processed</span></div><div class='line' id='LC419'><span class="cm">	 * the previous interval, it is probably racing with us on another</span></div><div class='line' id='LC420'><span class="cm">	 * CPU.  Let it compute load based on the previous sample and then</span></div><div class='line' id='LC421'><span class="cm">	 * re-arm the timer for another interval when it&#39;s done, rather</span></div><div class='line' id='LC422'><span class="cm">	 * than updating the interval start time to be &quot;now&quot;, which doesn&#39;t</span></div><div class='line' id='LC423'><span class="cm">	 * give the timer function enough time to make a decision on this</span></div><div class='line' id='LC424'><span class="cm">	 * run.)</span></div><div class='line' id='LC425'><span class="cm">	 */</span></div><div class='line' id='LC426'>	<span class="k">if</span> <span class="p">(</span><span class="n">timer_pending</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">)</span> <span class="o">==</span> <span class="mi">0</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC427'>	    <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_run_time</span> <span class="o">&gt;=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span> <span class="o">&amp;&amp;</span></div><div class='line' id='LC428'>	    <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">governor_enabled</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC429'>		<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">time_in_idle</span> <span class="o">=</span></div><div class='line' id='LC430'>			<span class="n">get_cpu_idle_time</span><span class="p">(</span><span class="n">smp_processor_id</span><span class="p">(),</span></div><div class='line' id='LC431'>					     <span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span><span class="p">);</span></div><div class='line' id='LC432'>		<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">timer_idlecancel</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC433'>		<span class="n">mod_timer_pinned</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">,</span></div><div class='line' id='LC434'>			  <span class="n">jiffies</span> <span class="o">+</span> <span class="n">usecs_to_jiffies</span><span class="p">(</span><span class="n">timer_rate</span><span class="p">));</span></div><div class='line' id='LC435'>	<span class="p">}</span></div><div class='line' id='LC436'><br/></div><div class='line' id='LC437'><span class="p">}</span></div><div class='line' id='LC438'><br/></div><div class='line' id='LC439'><span class="k">static</span> <span class="kt">int</span> <span class="nf">cpufreq_interactive_up_task</span><span class="p">(</span><span class="kt">void</span> <span class="o">*</span><span class="n">data</span><span class="p">)</span></div><div class='line' id='LC440'><span class="p">{</span></div><div class='line' id='LC441'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span><span class="p">;</span></div><div class='line' id='LC442'>	<span class="kt">cpumask_t</span> <span class="n">tmp_mask</span><span class="p">;</span></div><div class='line' id='LC443'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">flags</span><span class="p">;</span></div><div class='line' id='LC444'>	<span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="o">*</span><span class="n">pcpu</span><span class="p">;</span></div><div class='line' id='LC445'><br/></div><div class='line' id='LC446'>	<span class="k">while</span> <span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC447'>		<span class="n">set_current_state</span><span class="p">(</span><span class="n">TASK_INTERRUPTIBLE</span><span class="p">);</span></div><div class='line' id='LC448'>		<span class="n">spin_lock_irqsave</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC449'><br/></div><div class='line' id='LC450'>		<span class="k">if</span> <span class="p">(</span><span class="n">cpumask_empty</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask</span><span class="p">))</span> <span class="p">{</span></div><div class='line' id='LC451'>			<span class="n">spin_unlock_irqrestore</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC452'>			<span class="n">schedule</span><span class="p">();</span></div><div class='line' id='LC453'><br/></div><div class='line' id='LC454'>			<span class="k">if</span> <span class="p">(</span><span class="n">kthread_should_stop</span><span class="p">())</span></div><div class='line' id='LC455'>				<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC456'><br/></div><div class='line' id='LC457'>			<span class="n">spin_lock_irqsave</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC458'>		<span class="p">}</span></div><div class='line' id='LC459'><br/></div><div class='line' id='LC460'>		<span class="n">set_current_state</span><span class="p">(</span><span class="n">TASK_RUNNING</span><span class="p">);</span></div><div class='line' id='LC461'>		<span class="n">tmp_mask</span> <span class="o">=</span> <span class="n">up_cpumask</span><span class="p">;</span></div><div class='line' id='LC462'>		<span class="n">cpumask_clear</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask</span><span class="p">);</span></div><div class='line' id='LC463'>		<span class="n">spin_unlock_irqrestore</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC464'><br/></div><div class='line' id='LC465'>		<span class="n">for_each_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">tmp_mask</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC466'>			<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">j</span><span class="p">;</span></div><div class='line' id='LC467'>			<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">max_freq</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC468'><br/></div><div class='line' id='LC469'>			<span class="n">pcpu</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">cpu</span><span class="p">);</span></div><div class='line' id='LC470'>			<span class="n">smp_rmb</span><span class="p">();</span></div><div class='line' id='LC471'><br/></div><div class='line' id='LC472'>			<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">governor_enabled</span><span class="p">)</span></div><div class='line' id='LC473'>				<span class="k">continue</span><span class="p">;</span></div><div class='line' id='LC474'><br/></div><div class='line' id='LC475'>			<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">set_speed_lock</span><span class="p">);</span></div><div class='line' id='LC476'><br/></div><div class='line' id='LC477'>			<span class="n">for_each_cpu</span><span class="p">(</span><span class="n">j</span><span class="p">,</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpus</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC478'>				<span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="o">*</span><span class="n">pjcpu</span> <span class="o">=</span></div><div class='line' id='LC479'>					<span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">j</span><span class="p">);</span></div><div class='line' id='LC480'><br/></div><div class='line' id='LC481'>				<span class="k">if</span> <span class="p">(</span><span class="n">pjcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">&gt;</span> <span class="n">max_freq</span><span class="p">)</span></div><div class='line' id='LC482'>					<span class="n">max_freq</span> <span class="o">=</span> <span class="n">pjcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span><span class="p">;</span></div><div class='line' id='LC483'>			<span class="p">}</span></div><div class='line' id='LC484'><br/></div><div class='line' id='LC485'>			<span class="k">if</span> <span class="p">(</span><span class="n">max_freq</span> <span class="o">!=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span></div><div class='line' id='LC486'>				<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="p">,</span></div><div class='line' id='LC487'>							<span class="n">max_freq</span><span class="p">,</span></div><div class='line' id='LC488'>							<span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC489'>			<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">set_speed_lock</span><span class="p">);</span></div><div class='line' id='LC490'>		<span class="p">}</span></div><div class='line' id='LC491'>	<span class="p">}</span></div><div class='line' id='LC492'><br/></div><div class='line' id='LC493'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC494'><span class="p">}</span></div><div class='line' id='LC495'><br/></div><div class='line' id='LC496'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_interactive_freq_down</span><span class="p">(</span><span class="k">struct</span> <span class="n">work_struct</span> <span class="o">*</span><span class="n">work</span><span class="p">)</span></div><div class='line' id='LC497'><span class="p">{</span></div><div class='line' id='LC498'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">cpu</span><span class="p">;</span></div><div class='line' id='LC499'>	<span class="kt">cpumask_t</span> <span class="n">tmp_mask</span><span class="p">;</span></div><div class='line' id='LC500'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">flags</span><span class="p">;</span></div><div class='line' id='LC501'>	<span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="o">*</span><span class="n">pcpu</span><span class="p">;</span></div><div class='line' id='LC502'><br/></div><div class='line' id='LC503'>	<span class="n">spin_lock_irqsave</span><span class="p">(</span><span class="o">&amp;</span><span class="n">down_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC504'>	<span class="n">tmp_mask</span> <span class="o">=</span> <span class="n">down_cpumask</span><span class="p">;</span></div><div class='line' id='LC505'>	<span class="n">cpumask_clear</span><span class="p">(</span><span class="o">&amp;</span><span class="n">down_cpumask</span><span class="p">);</span></div><div class='line' id='LC506'>	<span class="n">spin_unlock_irqrestore</span><span class="p">(</span><span class="o">&amp;</span><span class="n">down_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC507'><br/></div><div class='line' id='LC508'>	<span class="n">for_each_cpu</span><span class="p">(</span><span class="n">cpu</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">tmp_mask</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC509'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">j</span><span class="p">;</span></div><div class='line' id='LC510'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">max_freq</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC511'><br/></div><div class='line' id='LC512'>		<span class="n">pcpu</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">cpu</span><span class="p">);</span></div><div class='line' id='LC513'>		<span class="n">smp_rmb</span><span class="p">();</span></div><div class='line' id='LC514'><br/></div><div class='line' id='LC515'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">governor_enabled</span><span class="p">)</span></div><div class='line' id='LC516'>			<span class="k">continue</span><span class="p">;</span></div><div class='line' id='LC517'><br/></div><div class='line' id='LC518'>		<span class="n">mutex_lock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">set_speed_lock</span><span class="p">);</span></div><div class='line' id='LC519'><br/></div><div class='line' id='LC520'>		<span class="n">for_each_cpu</span><span class="p">(</span><span class="n">j</span><span class="p">,</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpus</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC521'>			<span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="o">*</span><span class="n">pjcpu</span> <span class="o">=</span></div><div class='line' id='LC522'>				<span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">j</span><span class="p">);</span></div><div class='line' id='LC523'><br/></div><div class='line' id='LC524'>			<span class="k">if</span> <span class="p">(</span><span class="n">pjcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">&gt;</span> <span class="n">max_freq</span><span class="p">)</span></div><div class='line' id='LC525'>				<span class="n">max_freq</span> <span class="o">=</span> <span class="n">pjcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span><span class="p">;</span></div><div class='line' id='LC526'>		<span class="p">}</span></div><div class='line' id='LC527'><br/></div><div class='line' id='LC528'>		<span class="k">if</span> <span class="p">(</span><span class="n">max_freq</span> <span class="o">!=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span></div><div class='line' id='LC529'>			<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span><span class="p">,</span> <span class="n">max_freq</span><span class="p">,</span></div><div class='line' id='LC530'>						<span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC531'><br/></div><div class='line' id='LC532'>		<span class="n">mutex_unlock</span><span class="p">(</span><span class="o">&amp;</span><span class="n">set_speed_lock</span><span class="p">);</span></div><div class='line' id='LC533'>	<span class="p">}</span></div><div class='line' id='LC534'><span class="p">}</span></div><div class='line' id='LC535'><br/></div><div class='line' id='LC536'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_interactive_boost</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC537'><span class="p">{</span></div><div class='line' id='LC538'>	<span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC539'>	<span class="kt">int</span> <span class="n">anyboost</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC540'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">flags</span><span class="p">;</span></div><div class='line' id='LC541'>	<span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="o">*</span><span class="n">pcpu</span><span class="p">;</span></div><div class='line' id='LC542'><br/></div><div class='line' id='LC543'>	<span class="n">spin_lock_irqsave</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC544'><br/></div><div class='line' id='LC545'>	<span class="n">for_each_online_cpu</span><span class="p">(</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC546'>		<span class="n">pcpu</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC547'><br/></div><div class='line' id='LC548'>		<span class="k">if</span> <span class="p">(</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">&lt;</span> <span class="n">input_boost_freq</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC549'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">=</span> <span class="n">input_boost_freq</span><span class="p">;</span></div><div class='line' id='LC550'>			<span class="n">cpumask_set_cpu</span><span class="p">(</span><span class="n">i</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">up_cpumask</span><span class="p">);</span></div><div class='line' id='LC551'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">hispeed_validate_time</span> <span class="o">=</span></div><div class='line' id='LC552'>				<span class="n">ktime_to_us</span><span class="p">(</span><span class="n">ktime_get</span><span class="p">());</span></div><div class='line' id='LC553'>			<span class="n">anyboost</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC554'>		<span class="p">}</span></div><div class='line' id='LC555'><br/></div><div class='line' id='LC556'>		<span class="cm">/*</span></div><div class='line' id='LC557'><span class="cm">		 * Set floor freq and (re)start timer for when last</span></div><div class='line' id='LC558'><span class="cm">		 * validated.</span></div><div class='line' id='LC559'><span class="cm">		 */</span></div><div class='line' id='LC560'><br/></div><div class='line' id='LC561'>		<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">floor_freq</span> <span class="o">=</span> <span class="n">input_boost_freq</span><span class="p">;</span></div><div class='line' id='LC562'>		<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">floor_validate_time</span> <span class="o">=</span> <span class="n">ktime_to_us</span><span class="p">(</span><span class="n">ktime_get</span><span class="p">());</span></div><div class='line' id='LC563'>	<span class="p">}</span></div><div class='line' id='LC564'><br/></div><div class='line' id='LC565'>	<span class="n">spin_unlock_irqrestore</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask_lock</span><span class="p">,</span> <span class="n">flags</span><span class="p">);</span></div><div class='line' id='LC566'><br/></div><div class='line' id='LC567'>	<span class="k">if</span> <span class="p">(</span><span class="n">anyboost</span><span class="p">)</span></div><div class='line' id='LC568'>		<span class="n">wake_up_process</span><span class="p">(</span><span class="n">up_task</span><span class="p">);</span></div><div class='line' id='LC569'><span class="p">}</span></div><div class='line' id='LC570'><br/></div><div class='line' id='LC571'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_interactive_input_event</span><span class="p">(</span><span class="k">struct</span> <span class="n">input_handle</span> <span class="o">*</span><span class="n">handle</span><span class="p">,</span></div><div class='line' id='LC572'>					    <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">type</span><span class="p">,</span></div><div class='line' id='LC573'>					    <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">code</span><span class="p">,</span> <span class="kt">int</span> <span class="n">value</span><span class="p">)</span></div><div class='line' id='LC574'><span class="p">{</span></div><div class='line' id='LC575'>	<span class="k">if</span> <span class="p">(</span><span class="n">input_boost_val</span> <span class="o">&amp;&amp;</span> <span class="n">type</span> <span class="o">==</span> <span class="n">EV_SYN</span> <span class="o">&amp;&amp;</span> <span class="n">code</span> <span class="o">==</span> <span class="n">SYN_REPORT</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC576'>		<span class="n">is_touching</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC577'>		<span class="n">freq_boosted_time</span> <span class="o">=</span> <span class="n">ktime_to_ms</span><span class="p">(</span><span class="n">ktime_get</span><span class="p">());</span></div><div class='line' id='LC578'>		<span class="n">cpufreq_interactive_boost</span><span class="p">();</span></div><div class='line' id='LC579'>	<span class="p">}</span></div><div class='line' id='LC580'><span class="p">}</span></div><div class='line' id='LC581'><br/></div><div class='line' id='LC582'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_interactive_input_open</span><span class="p">(</span><span class="k">struct</span> <span class="n">work_struct</span> <span class="o">*</span><span class="n">w</span><span class="p">)</span></div><div class='line' id='LC583'><span class="p">{</span></div><div class='line' id='LC584'>	<span class="k">struct</span> <span class="n">cpufreq_interactive_inputopen</span> <span class="o">*</span><span class="n">io</span> <span class="o">=</span></div><div class='line' id='LC585'>		<span class="n">container_of</span><span class="p">(</span><span class="n">w</span><span class="p">,</span> <span class="k">struct</span> <span class="n">cpufreq_interactive_inputopen</span><span class="p">,</span></div><div class='line' id='LC586'>			     <span class="n">inputopen_work</span><span class="p">);</span></div><div class='line' id='LC587'>	<span class="kt">int</span> <span class="n">error</span><span class="p">;</span></div><div class='line' id='LC588'><br/></div><div class='line' id='LC589'>	<span class="n">error</span> <span class="o">=</span> <span class="n">input_open_device</span><span class="p">(</span><span class="n">io</span><span class="o">-&gt;</span><span class="n">handle</span><span class="p">);</span></div><div class='line' id='LC590'>	<span class="k">if</span> <span class="p">(</span><span class="n">error</span><span class="p">)</span></div><div class='line' id='LC591'>		<span class="n">input_unregister_handle</span><span class="p">(</span><span class="n">io</span><span class="o">-&gt;</span><span class="n">handle</span><span class="p">);</span></div><div class='line' id='LC592'><span class="p">}</span></div><div class='line' id='LC593'><br/></div><div class='line' id='LC594'><span class="k">static</span> <span class="kt">int</span> <span class="nf">cpufreq_interactive_input_connect</span><span class="p">(</span><span class="k">struct</span> <span class="n">input_handler</span> <span class="o">*</span><span class="n">handler</span><span class="p">,</span></div><div class='line' id='LC595'>					     <span class="k">struct</span> <span class="n">input_dev</span> <span class="o">*</span><span class="n">dev</span><span class="p">,</span></div><div class='line' id='LC596'>					     <span class="k">const</span> <span class="k">struct</span> <span class="n">input_device_id</span> <span class="o">*</span><span class="n">id</span><span class="p">)</span></div><div class='line' id='LC597'><span class="p">{</span></div><div class='line' id='LC598'>	<span class="k">struct</span> <span class="n">input_handle</span> <span class="o">*</span><span class="n">handle</span><span class="p">;</span></div><div class='line' id='LC599'>	<span class="kt">int</span> <span class="n">error</span><span class="p">;</span></div><div class='line' id='LC600'><br/></div><div class='line' id='LC601'>	<span class="n">pr_info</span><span class="p">(</span><span class="s">&quot;%s: connect to %s</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">__func__</span><span class="p">,</span> <span class="n">dev</span><span class="o">-&gt;</span><span class="n">name</span><span class="p">);</span></div><div class='line' id='LC602'>	<span class="n">handle</span> <span class="o">=</span> <span class="n">kzalloc</span><span class="p">(</span><span class="k">sizeof</span><span class="p">(</span><span class="k">struct</span> <span class="n">input_handle</span><span class="p">),</span> <span class="n">GFP_KERNEL</span><span class="p">);</span></div><div class='line' id='LC603'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">handle</span><span class="p">)</span></div><div class='line' id='LC604'>		<span class="k">return</span> <span class="o">-</span><span class="n">ENOMEM</span><span class="p">;</span></div><div class='line' id='LC605'><br/></div><div class='line' id='LC606'>	<span class="n">handle</span><span class="o">-&gt;</span><span class="n">dev</span> <span class="o">=</span> <span class="n">dev</span><span class="p">;</span></div><div class='line' id='LC607'>	<span class="n">handle</span><span class="o">-&gt;</span><span class="n">handler</span> <span class="o">=</span> <span class="n">handler</span><span class="p">;</span></div><div class='line' id='LC608'>	<span class="n">handle</span><span class="o">-&gt;</span><span class="n">name</span> <span class="o">=</span> <span class="s">&quot;cpufreq_interactive&quot;</span><span class="p">;</span></div><div class='line' id='LC609'><br/></div><div class='line' id='LC610'>	<span class="n">error</span> <span class="o">=</span> <span class="n">input_register_handle</span><span class="p">(</span><span class="n">handle</span><span class="p">);</span></div><div class='line' id='LC611'>	<span class="k">if</span> <span class="p">(</span><span class="n">error</span><span class="p">)</span></div><div class='line' id='LC612'>		<span class="k">goto</span> <span class="n">err</span><span class="p">;</span></div><div class='line' id='LC613'><br/></div><div class='line' id='LC614'>	<span class="n">inputopen</span><span class="p">.</span><span class="n">handle</span> <span class="o">=</span> <span class="n">handle</span><span class="p">;</span></div><div class='line' id='LC615'>	<span class="n">queue_work</span><span class="p">(</span><span class="n">inputopen_wq</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">inputopen</span><span class="p">.</span><span class="n">inputopen_work</span><span class="p">);</span></div><div class='line' id='LC616'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC617'><span class="nl">err:</span></div><div class='line' id='LC618'>	<span class="n">kfree</span><span class="p">(</span><span class="n">handle</span><span class="p">);</span></div><div class='line' id='LC619'>	<span class="k">return</span> <span class="n">error</span><span class="p">;</span></div><div class='line' id='LC620'><span class="p">}</span></div><div class='line' id='LC621'><br/></div><div class='line' id='LC622'><span class="k">static</span> <span class="kt">void</span> <span class="nf">cpufreq_interactive_input_disconnect</span><span class="p">(</span><span class="k">struct</span> <span class="n">input_handle</span> <span class="o">*</span><span class="n">handle</span><span class="p">)</span></div><div class='line' id='LC623'><span class="p">{</span></div><div class='line' id='LC624'>	<span class="n">input_close_device</span><span class="p">(</span><span class="n">handle</span><span class="p">);</span></div><div class='line' id='LC625'>	<span class="n">input_unregister_handle</span><span class="p">(</span><span class="n">handle</span><span class="p">);</span></div><div class='line' id='LC626'>	<span class="n">kfree</span><span class="p">(</span><span class="n">handle</span><span class="p">);</span></div><div class='line' id='LC627'><span class="p">}</span></div><div class='line' id='LC628'><br/></div><div class='line' id='LC629'><span class="k">static</span> <span class="k">const</span> <span class="k">struct</span> <span class="n">input_device_id</span> <span class="n">cpufreq_interactive_ids</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC630'>	<span class="p">{</span></div><div class='line' id='LC631'>		<span class="p">.</span><span class="n">flags</span> <span class="o">=</span> <span class="n">INPUT_DEVICE_ID_MATCH_EVBIT</span> <span class="o">|</span></div><div class='line' id='LC632'>			 <span class="n">INPUT_DEVICE_ID_MATCH_ABSBIT</span><span class="p">,</span></div><div class='line' id='LC633'>		<span class="p">.</span><span class="n">evbit</span> <span class="o">=</span> <span class="p">{</span> <span class="n">BIT_MASK</span><span class="p">(</span><span class="n">EV_ABS</span><span class="p">)</span> <span class="p">},</span></div><div class='line' id='LC634'>		<span class="p">.</span><span class="n">absbit</span> <span class="o">=</span> <span class="p">{</span> <span class="p">[</span><span class="n">BIT_WORD</span><span class="p">(</span><span class="n">ABS_MT_POSITION_X</span><span class="p">)]</span> <span class="o">=</span></div><div class='line' id='LC635'>			    <span class="n">BIT_MASK</span><span class="p">(</span><span class="n">ABS_MT_POSITION_X</span><span class="p">)</span> <span class="o">|</span></div><div class='line' id='LC636'>			    <span class="n">BIT_MASK</span><span class="p">(</span><span class="n">ABS_MT_POSITION_Y</span><span class="p">)</span> <span class="p">},</span></div><div class='line' id='LC637'>	<span class="p">},</span> <span class="cm">/* multi-touch touchscreen */</span></div><div class='line' id='LC638'>	<span class="p">{</span></div><div class='line' id='LC639'>		<span class="p">.</span><span class="n">flags</span> <span class="o">=</span> <span class="n">INPUT_DEVICE_ID_MATCH_KEYBIT</span> <span class="o">|</span></div><div class='line' id='LC640'>			 <span class="n">INPUT_DEVICE_ID_MATCH_ABSBIT</span><span class="p">,</span></div><div class='line' id='LC641'>		<span class="p">.</span><span class="n">keybit</span> <span class="o">=</span> <span class="p">{</span> <span class="p">[</span><span class="n">BIT_WORD</span><span class="p">(</span><span class="n">BTN_TOUCH</span><span class="p">)]</span> <span class="o">=</span> <span class="n">BIT_MASK</span><span class="p">(</span><span class="n">BTN_TOUCH</span><span class="p">)</span> <span class="p">},</span></div><div class='line' id='LC642'>		<span class="p">.</span><span class="n">absbit</span> <span class="o">=</span> <span class="p">{</span> <span class="p">[</span><span class="n">BIT_WORD</span><span class="p">(</span><span class="n">ABS_X</span><span class="p">)]</span> <span class="o">=</span></div><div class='line' id='LC643'>			    <span class="n">BIT_MASK</span><span class="p">(</span><span class="n">ABS_X</span><span class="p">)</span> <span class="o">|</span> <span class="n">BIT_MASK</span><span class="p">(</span><span class="n">ABS_Y</span><span class="p">)</span> <span class="p">},</span></div><div class='line' id='LC644'>	<span class="p">},</span> <span class="cm">/* touchpad */</span></div><div class='line' id='LC645'>	<span class="p">{</span> <span class="p">},</span></div><div class='line' id='LC646'><span class="p">};</span></div><div class='line' id='LC647'><br/></div><div class='line' id='LC648'><span class="k">static</span> <span class="k">struct</span> <span class="n">input_handler</span> <span class="n">cpufreq_interactive_input_handler</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC649'>	<span class="p">.</span><span class="n">event</span>          <span class="o">=</span> <span class="n">cpufreq_interactive_input_event</span><span class="p">,</span></div><div class='line' id='LC650'>	<span class="p">.</span><span class="n">connect</span>        <span class="o">=</span> <span class="n">cpufreq_interactive_input_connect</span><span class="p">,</span></div><div class='line' id='LC651'>	<span class="p">.</span><span class="n">disconnect</span>     <span class="o">=</span> <span class="n">cpufreq_interactive_input_disconnect</span><span class="p">,</span></div><div class='line' id='LC652'>	<span class="p">.</span><span class="n">name</span>           <span class="o">=</span> <span class="s">&quot;cpufreq_interactive&quot;</span><span class="p">,</span></div><div class='line' id='LC653'>	<span class="p">.</span><span class="n">id_table</span>       <span class="o">=</span> <span class="n">cpufreq_interactive_ids</span><span class="p">,</span></div><div class='line' id='LC654'><span class="p">};</span></div><div class='line' id='LC655'><br/></div><div class='line' id='LC656'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_hispeed_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC657'>				 <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC658'><span class="p">{</span></div><div class='line' id='LC659'>	<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%llu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">hispeed_freq</span><span class="p">);</span></div><div class='line' id='LC660'><span class="p">}</span></div><div class='line' id='LC661'><br/></div><div class='line' id='LC662'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_hispeed_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC663'>				  <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span></div><div class='line' id='LC664'>				  <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC665'><span class="p">{</span></div><div class='line' id='LC666'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC667'>	<span class="n">u64</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC668'><br/></div><div class='line' id='LC669'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">strict_strtoull</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">val</span><span class="p">);</span></div><div class='line' id='LC670'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC671'>		<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC672'>	<span class="n">hispeed_freq</span> <span class="o">=</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC673'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC674'><span class="p">}</span></div><div class='line' id='LC675'><br/></div><div class='line' id='LC676'><span class="k">static</span> <span class="k">struct</span> <span class="n">global_attr</span> <span class="n">hispeed_freq_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">hispeed_freq</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC677'>		<span class="n">show_hispeed_freq</span><span class="p">,</span> <span class="n">store_hispeed_freq</span><span class="p">);</span></div><div class='line' id='LC678'><br/></div><div class='line' id='LC679'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_up_threshold</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC680'>				<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC681'><span class="p">{</span></div><div class='line' id='LC682'>	<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%lu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">up_threshold</span><span class="p">);</span></div><div class='line' id='LC683'><span class="p">}</span></div><div class='line' id='LC684'><br/></div><div class='line' id='LC685'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_up_threshold</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC686'>			<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC687'><span class="p">{</span></div><div class='line' id='LC688'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC689'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC690'><br/></div><div class='line' id='LC691'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">val</span><span class="p">);</span></div><div class='line' id='LC692'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC693'>		<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC694'>	<span class="n">up_threshold</span> <span class="o">=</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC695'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC696'><span class="p">}</span></div><div class='line' id='LC697'><br/></div><div class='line' id='LC698'><span class="k">static</span> <span class="k">struct</span> <span class="n">global_attr</span> <span class="n">up_threshold_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">up_threshold</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC699'>		<span class="n">show_up_threshold</span><span class="p">,</span> <span class="n">store_up_threshold</span><span class="p">);</span></div><div class='line' id='LC700'><br/></div><div class='line' id='LC701'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_min_sample_time</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC702'>				<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC703'><span class="p">{</span></div><div class='line' id='LC704'>	<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%lu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">min_sample_time</span><span class="p">);</span></div><div class='line' id='LC705'><span class="p">}</span></div><div class='line' id='LC706'><br/></div><div class='line' id='LC707'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_min_sample_time</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC708'>			<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC709'><span class="p">{</span></div><div class='line' id='LC710'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC711'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC712'><br/></div><div class='line' id='LC713'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">val</span><span class="p">);</span></div><div class='line' id='LC714'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC715'>		<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC716'>	<span class="n">min_sample_time</span> <span class="o">=</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC717'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC718'><span class="p">}</span></div><div class='line' id='LC719'><br/></div><div class='line' id='LC720'><span class="k">static</span> <span class="k">struct</span> <span class="n">global_attr</span> <span class="n">min_sample_time_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">min_sample_time</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC721'>		<span class="n">show_min_sample_time</span><span class="p">,</span> <span class="n">store_min_sample_time</span><span class="p">);</span></div><div class='line' id='LC722'><br/></div><div class='line' id='LC723'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_above_hispeed_delay</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC724'>					<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC725'><span class="p">{</span></div><div class='line' id='LC726'>	<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%lu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">above_hispeed_delay_val</span><span class="p">);</span></div><div class='line' id='LC727'><span class="p">}</span></div><div class='line' id='LC728'><br/></div><div class='line' id='LC729'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_above_hispeed_delay</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC730'>					 <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC731'>					 <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC732'><span class="p">{</span></div><div class='line' id='LC733'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC734'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC735'><br/></div><div class='line' id='LC736'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">val</span><span class="p">);</span></div><div class='line' id='LC737'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC738'>		<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC739'>	<span class="n">above_hispeed_delay_val</span> <span class="o">=</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC740'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC741'><span class="p">}</span></div><div class='line' id='LC742'><br/></div><div class='line' id='LC743'><span class="n">define_one_global_rw</span><span class="p">(</span><span class="n">above_hispeed_delay</span><span class="p">);</span></div><div class='line' id='LC744'><br/></div><div class='line' id='LC745'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_timer_rate</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC746'>			<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC747'><span class="p">{</span></div><div class='line' id='LC748'>	<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%lu</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">timer_rate</span><span class="p">);</span></div><div class='line' id='LC749'><span class="p">}</span></div><div class='line' id='LC750'><br/></div><div class='line' id='LC751'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_timer_rate</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC752'>			<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC753'><span class="p">{</span></div><div class='line' id='LC754'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC755'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC756'><br/></div><div class='line' id='LC757'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">val</span><span class="p">);</span></div><div class='line' id='LC758'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC759'>		<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC760'>	<span class="n">timer_rate</span> <span class="o">=</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC761'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC762'><span class="p">}</span></div><div class='line' id='LC763'><br/></div><div class='line' id='LC764'><span class="k">static</span> <span class="k">struct</span> <span class="n">global_attr</span> <span class="n">timer_rate_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">timer_rate</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC765'>		<span class="n">show_timer_rate</span><span class="p">,</span> <span class="n">store_timer_rate</span><span class="p">);</span></div><div class='line' id='LC766'><br/></div><div class='line' id='LC767'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_input_boost_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC768'>			  <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC769'><span class="p">{</span></div><div class='line' id='LC770'>	<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%d</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">input_boost_freq</span><span class="p">);</span></div><div class='line' id='LC771'><span class="p">}</span></div><div class='line' id='LC772'><br/></div><div class='line' id='LC773'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_input_boost_freq</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC774'>			   <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC775'><span class="p">{</span></div><div class='line' id='LC776'>	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC777'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC778'><br/></div><div class='line' id='LC779'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">strict_strtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">val</span><span class="p">);</span></div><div class='line' id='LC780'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC781'>		<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC782'><br/></div><div class='line' id='LC783'>	<span class="n">input_boost_freq</span> <span class="o">=</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC784'><br/></div><div class='line' id='LC785'>	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC786'><span class="p">}</span></div><div class='line' id='LC787'><br/></div><div class='line' id='LC788'><span class="k">static</span> <span class="k">struct</span> <span class="n">global_attr</span> <span class="n">input_boost_freq_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">input_boost_freq</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC789'>		<span class="n">show_input_boost_freq</span><span class="p">,</span> <span class="n">store_input_boost_freq</span><span class="p">);</span></div><div class='line' id='LC790'><br/></div><div class='line' id='LC791'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">show_dynamic_scaling</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC792'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">)</span></div><div class='line' id='LC793'><span class="p">{</span></div><div class='line' id='LC794'>&nbsp;&nbsp;	<span class="k">return</span> <span class="n">sprintf</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="s">&quot;%u</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span> <span class="n">dynamic_scaling</span><span class="p">);</span></div><div class='line' id='LC795'><span class="p">}</span></div><div class='line' id='LC796'><br/></div><div class='line' id='LC797'><span class="k">static</span> <span class="kt">ssize_t</span> <span class="nf">store_dynamic_scaling</span><span class="p">(</span><span class="k">struct</span> <span class="n">kobject</span> <span class="o">*</span><span class="n">kobj</span><span class="p">,</span></div><div class='line' id='LC798'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">attr</span><span class="p">,</span> <span class="k">const</span> <span class="kt">char</span> <span class="o">*</span><span class="n">buf</span><span class="p">,</span> <span class="kt">size_t</span> <span class="n">count</span><span class="p">)</span></div><div class='line' id='LC799'><span class="p">{</span></div><div class='line' id='LC800'>&nbsp;&nbsp;	<span class="kt">int</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC801'>	<span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC802'><br/></div><div class='line' id='LC803'>	<span class="n">ret</span> <span class="o">=</span> <span class="n">kstrtoul</span><span class="p">(</span><span class="n">buf</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">val</span><span class="p">);</span></div><div class='line' id='LC804'><br/></div><div class='line' id='LC805'>	<span class="k">if</span> <span class="p">(</span><span class="n">ret</span> <span class="o">&lt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC806'>		<span class="k">return</span> <span class="n">ret</span><span class="p">;</span></div><div class='line' id='LC807'>&nbsp;&nbsp;	</div><div class='line' id='LC808'>&nbsp;&nbsp;	<span class="n">dynamic_scaling</span> <span class="o">=</span> <span class="n">val</span><span class="p">;</span></div><div class='line' id='LC809'>&nbsp;&nbsp;	</div><div class='line' id='LC810'>&nbsp;&nbsp;	<span class="k">return</span> <span class="n">count</span><span class="p">;</span></div><div class='line' id='LC811'><span class="p">}</span></div><div class='line' id='LC812'><br/></div><div class='line' id='LC813'><span class="k">static</span> <span class="k">struct</span> <span class="n">global_attr</span> <span class="n">dynamic_scaling_attr</span> <span class="o">=</span> <span class="n">__ATTR</span><span class="p">(</span><span class="n">dynamic_scaling</span><span class="p">,</span> <span class="mo">0644</span><span class="p">,</span></div><div class='line' id='LC814'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">show_dynamic_scaling</span><span class="p">,</span> <span class="n">store_dynamic_scaling</span><span class="p">);</span></div><div class='line' id='LC815'><br/></div><div class='line' id='LC816'><span class="k">static</span> <span class="k">struct</span> <span class="n">attribute</span> <span class="o">*</span><span class="n">interactive_attributes</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC817'>	<span class="o">&amp;</span><span class="n">hispeed_freq_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC818'>	<span class="o">&amp;</span><span class="n">above_hispeed_delay</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC819'>	<span class="o">&amp;</span><span class="n">min_sample_time_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC820'>	<span class="o">&amp;</span><span class="n">timer_rate_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC821'>	<span class="o">&amp;</span><span class="n">input_boost_freq_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC822'>	<span class="o">&amp;</span><span class="n">dynamic_scaling_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span>  </div><div class='line' id='LC823'>	<span class="o">&amp;</span><span class="n">up_threshold_attr</span><span class="p">.</span><span class="n">attr</span><span class="p">,</span></div><div class='line' id='LC824'>	<span class="nb">NULL</span><span class="p">,</span></div><div class='line' id='LC825'><span class="p">};</span></div><div class='line' id='LC826'><br/></div><div class='line' id='LC827'><span class="k">static</span> <span class="k">struct</span> <span class="n">attribute_group</span> <span class="n">interactive_attr_group</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC828'>	<span class="p">.</span><span class="n">attrs</span> <span class="o">=</span> <span class="n">interactive_attributes</span><span class="p">,</span></div><div class='line' id='LC829'>	<span class="p">.</span><span class="n">name</span> <span class="o">=</span> <span class="s">&quot;interactive&quot;</span><span class="p">,</span></div><div class='line' id='LC830'><span class="p">};</span></div><div class='line' id='LC831'><br/></div><div class='line' id='LC832'><span class="kt">void</span> <span class="nf">scale_above_hispeed_delay</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">new_above_hispeed_delay</span><span class="p">)</span></div><div class='line' id='LC833'><span class="p">{</span></div><div class='line' id='LC834'>	<span class="k">if</span> <span class="p">(</span><span class="n">dynamic_scaling</span> <span class="o">&amp;&amp;</span> </div><div class='line' id='LC835'>		<span class="n">above_hispeed_delay_val</span> <span class="o">!=</span> <span class="n">new_above_hispeed_delay</span><span class="p">)</span></div><div class='line' id='LC836'>		<span class="n">above_hispeed_delay_val</span> <span class="o">=</span> <span class="n">new_above_hispeed_delay</span><span class="p">;</span></div><div class='line' id='LC837'><span class="p">}</span></div><div class='line' id='LC838'><br/></div><div class='line' id='LC839'><span class="kt">void</span> <span class="nf">scale_timer_rate</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">new_timer_rate</span><span class="p">)</span></div><div class='line' id='LC840'><span class="p">{</span></div><div class='line' id='LC841'>	<span class="k">if</span> <span class="p">(</span><span class="n">dynamic_scaling</span> <span class="o">&amp;&amp;</span> <span class="n">timer_rate</span> <span class="o">!=</span> <span class="n">new_timer_rate</span><span class="p">)</span></div><div class='line' id='LC842'>		<span class="n">timer_rate</span> <span class="o">=</span> <span class="n">new_timer_rate</span><span class="p">;</span></div><div class='line' id='LC843'><span class="p">}</span></div><div class='line' id='LC844'><br/></div><div class='line' id='LC845'><span class="kt">void</span> <span class="nf">scale_min_sample_time</span><span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">new_min_sample_time</span><span class="p">)</span></div><div class='line' id='LC846'><span class="p">{</span></div><div class='line' id='LC847'>	<span class="k">if</span> <span class="p">(</span><span class="n">dynamic_scaling</span> <span class="o">&amp;&amp;</span> <span class="n">min_sample_time</span> <span class="o">!=</span> <span class="n">new_min_sample_time</span><span class="p">)</span></div><div class='line' id='LC848'>		<span class="n">min_sample_time</span> <span class="o">=</span> <span class="n">new_min_sample_time</span><span class="p">;</span></div><div class='line' id='LC849'><span class="p">}</span></div><div class='line' id='LC850'><br/></div><div class='line' id='LC851'><span class="k">static</span> <span class="kt">int</span> <span class="nf">cpufreq_governor_interactive</span><span class="p">(</span><span class="k">struct</span> <span class="n">cpufreq_policy</span> <span class="o">*</span><span class="n">policy</span><span class="p">,</span></div><div class='line' id='LC852'>		<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">event</span><span class="p">)</span></div><div class='line' id='LC853'><span class="p">{</span></div><div class='line' id='LC854'>	<span class="kt">int</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC855'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">j</span><span class="p">;</span></div><div class='line' id='LC856'>	<span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="o">*</span><span class="n">pcpu</span><span class="p">;</span></div><div class='line' id='LC857'>	<span class="k">struct</span> <span class="n">cpufreq_frequency_table</span> <span class="o">*</span><span class="n">freq_table</span><span class="p">;</span></div><div class='line' id='LC858'><br/></div><div class='line' id='LC859'>	<span class="k">switch</span> <span class="p">(</span><span class="n">event</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC860'>	<span class="k">case</span> <span class="n">CPUFREQ_GOV_START</span>:</div><div class='line' id='LC861'>		<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">cpu_online</span><span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpu</span><span class="p">))</span></div><div class='line' id='LC862'>			<span class="k">return</span> <span class="o">-</span><span class="n">EINVAL</span><span class="p">;</span></div><div class='line' id='LC863'><br/></div><div class='line' id='LC864'>		<span class="n">freq_table</span> <span class="o">=</span></div><div class='line' id='LC865'>			<span class="n">cpufreq_frequency_get_table</span><span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpu</span><span class="p">);</span></div><div class='line' id='LC866'><br/></div><div class='line' id='LC867'>		<span class="n">for_each_cpu</span><span class="p">(</span><span class="n">j</span><span class="p">,</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpus</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC868'>			<span class="n">pcpu</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">j</span><span class="p">);</span></div><div class='line' id='LC869'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">policy</span> <span class="o">=</span> <span class="n">policy</span><span class="p">;</span></div><div class='line' id='LC870'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span> <span class="o">=</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">;</span></div><div class='line' id='LC871'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">freq_table</span> <span class="o">=</span> <span class="n">freq_table</span><span class="p">;</span></div><div class='line' id='LC872'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_set_time_in_idle</span> <span class="o">=</span></div><div class='line' id='LC873'>				<span class="n">get_cpu_idle_time</span><span class="p">(</span><span class="n">j</span><span class="p">,</span></div><div class='line' id='LC874'>					     <span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_set_time</span><span class="p">);</span></div><div class='line' id='LC875'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">floor_freq</span> <span class="o">=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_freq</span><span class="p">;</span></div><div class='line' id='LC876'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">floor_validate_time</span> <span class="o">=</span></div><div class='line' id='LC877'>				<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_set_time</span><span class="p">;</span></div><div class='line' id='LC878'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">hispeed_validate_time</span> <span class="o">=</span></div><div class='line' id='LC879'>				<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_set_time</span><span class="p">;</span></div><div class='line' id='LC880'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">governor_enabled</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span></div><div class='line' id='LC881'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span> <span class="o">=</span> <span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">target_set_time</span><span class="p">;</span></div><div class='line' id='LC882'>			<span class="n">mod_timer_pinned</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">,</span></div><div class='line' id='LC883'>				<span class="n">jiffies</span> <span class="o">+</span> <span class="n">usecs_to_jiffies</span><span class="p">(</span><span class="n">timer_rate</span><span class="p">));</span></div><div class='line' id='LC884'>			<span class="n">smp_wmb</span><span class="p">();</span></div><div class='line' id='LC885'>		<span class="p">}</span></div><div class='line' id='LC886'><br/></div><div class='line' id='LC887'>		<span class="cm">/*</span></div><div class='line' id='LC888'><span class="cm">		 * Do not register the idle hook and create sysfs</span></div><div class='line' id='LC889'><span class="cm">		 * entries if we have already done so.</span></div><div class='line' id='LC890'><span class="cm">		 */</span></div><div class='line' id='LC891'>		<span class="k">if</span> <span class="p">(</span><span class="n">atomic_inc_return</span><span class="p">(</span><span class="o">&amp;</span><span class="n">active_count</span><span class="p">)</span> <span class="o">&gt;</span> <span class="mi">1</span><span class="p">)</span></div><div class='line' id='LC892'>			<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC893'><br/></div><div class='line' id='LC894'>		<span class="n">rc</span> <span class="o">=</span> <span class="n">sysfs_create_group</span><span class="p">(</span><span class="n">cpufreq_global_kobject</span><span class="p">,</span></div><div class='line' id='LC895'>				<span class="o">&amp;</span><span class="n">interactive_attr_group</span><span class="p">);</span></div><div class='line' id='LC896'>		<span class="k">if</span> <span class="p">(</span><span class="n">rc</span><span class="p">)</span></div><div class='line' id='LC897'>			<span class="k">return</span> <span class="n">rc</span><span class="p">;</span></div><div class='line' id='LC898'><br/></div><div class='line' id='LC899'>		<span class="n">rc</span> <span class="o">=</span> <span class="n">input_register_handler</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_interactive_input_handler</span><span class="p">);</span></div><div class='line' id='LC900'>		<span class="k">if</span> <span class="p">(</span><span class="n">rc</span><span class="p">)</span></div><div class='line' id='LC901'>			<span class="n">pr_warn</span><span class="p">(</span><span class="s">&quot;%s: failed to register input handler</span><span class="se">\n</span><span class="s">&quot;</span><span class="p">,</span></div><div class='line' id='LC902'>				<span class="n">__func__</span><span class="p">);</span></div><div class='line' id='LC903'><br/></div><div class='line' id='LC904'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC905'><br/></div><div class='line' id='LC906'>	<span class="k">case</span> <span class="n">CPUFREQ_GOV_STOP</span>:</div><div class='line' id='LC907'>		<span class="n">for_each_cpu</span><span class="p">(</span><span class="n">j</span><span class="p">,</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cpus</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC908'>			<span class="n">pcpu</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">j</span><span class="p">);</span></div><div class='line' id='LC909'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">governor_enabled</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC910'>			<span class="n">smp_wmb</span><span class="p">();</span></div><div class='line' id='LC911'>			<span class="n">del_timer_sync</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">);</span></div><div class='line' id='LC912'><br/></div><div class='line' id='LC913'>			<span class="cm">/*</span></div><div class='line' id='LC914'><span class="cm">			 * Reset idle exit time since we may cancel the timer</span></div><div class='line' id='LC915'><span class="cm">			 * before it can run after the last idle exit time,</span></div><div class='line' id='LC916'><span class="cm">			 * to avoid tripping the check in idle exit for a timer</span></div><div class='line' id='LC917'><span class="cm">			 * that is trying to run.</span></div><div class='line' id='LC918'><span class="cm">			 */</span></div><div class='line' id='LC919'>			<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">idle_exit_time</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC920'>		<span class="p">}</span></div><div class='line' id='LC921'><br/></div><div class='line' id='LC922'>		<span class="n">flush_work</span><span class="p">(</span><span class="o">&amp;</span><span class="n">freq_scale_down_work</span><span class="p">);</span></div><div class='line' id='LC923'>		<span class="k">if</span> <span class="p">(</span><span class="n">atomic_dec_return</span><span class="p">(</span><span class="o">&amp;</span><span class="n">active_count</span><span class="p">)</span> <span class="o">&gt;</span> <span class="mi">0</span><span class="p">)</span></div><div class='line' id='LC924'>			<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC925'><br/></div><div class='line' id='LC926'>		<span class="n">input_unregister_handler</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_interactive_input_handler</span><span class="p">);</span></div><div class='line' id='LC927'>		<span class="n">sysfs_remove_group</span><span class="p">(</span><span class="n">cpufreq_global_kobject</span><span class="p">,</span></div><div class='line' id='LC928'>				<span class="o">&amp;</span><span class="n">interactive_attr_group</span><span class="p">);</span></div><div class='line' id='LC929'><br/></div><div class='line' id='LC930'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC931'><br/></div><div class='line' id='LC932'>	<span class="k">case</span> <span class="n">CPUFREQ_GOV_LIMITS</span>:</div><div class='line' id='LC933'>		<span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span> <span class="o">&lt;</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span></div><div class='line' id='LC934'>			<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span></div><div class='line' id='LC935'>					<span class="n">policy</span><span class="o">-&gt;</span><span class="n">max</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_H</span><span class="p">);</span></div><div class='line' id='LC936'>		<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span> <span class="o">&gt;</span> <span class="n">policy</span><span class="o">-&gt;</span><span class="n">cur</span><span class="p">)</span></div><div class='line' id='LC937'>			<span class="n">__cpufreq_driver_target</span><span class="p">(</span><span class="n">policy</span><span class="p">,</span></div><div class='line' id='LC938'>					<span class="n">policy</span><span class="o">-&gt;</span><span class="n">min</span><span class="p">,</span> <span class="n">CPUFREQ_RELATION_L</span><span class="p">);</span></div><div class='line' id='LC939'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC940'>	<span class="p">}</span></div><div class='line' id='LC941'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC942'><span class="p">}</span></div><div class='line' id='LC943'><br/></div><div class='line' id='LC944'><span class="k">static</span> <span class="kt">int</span> <span class="nf">cpufreq_interactive_idle_notifier</span><span class="p">(</span><span class="k">struct</span> <span class="n">notifier_block</span> <span class="o">*</span><span class="n">nb</span><span class="p">,</span></div><div class='line' id='LC945'>					     <span class="kt">unsigned</span> <span class="kt">long</span> <span class="n">val</span><span class="p">,</span></div><div class='line' id='LC946'>					     <span class="kt">void</span> <span class="o">*</span><span class="n">data</span><span class="p">)</span></div><div class='line' id='LC947'><span class="p">{</span></div><div class='line' id='LC948'>	<span class="k">switch</span> <span class="p">(</span><span class="n">val</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC949'>	<span class="k">case</span> <span class="n">IDLE_START</span>:</div><div class='line' id='LC950'>		<span class="n">cpufreq_interactive_idle_start</span><span class="p">();</span></div><div class='line' id='LC951'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC952'>	<span class="k">case</span> <span class="n">IDLE_END</span>:</div><div class='line' id='LC953'>		<span class="n">cpufreq_interactive_idle_end</span><span class="p">();</span></div><div class='line' id='LC954'>		<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC955'>	<span class="p">}</span></div><div class='line' id='LC956'><br/></div><div class='line' id='LC957'>	<span class="k">return</span> <span class="mi">0</span><span class="p">;</span></div><div class='line' id='LC958'><span class="p">}</span></div><div class='line' id='LC959'><br/></div><div class='line' id='LC960'><span class="k">static</span> <span class="k">struct</span> <span class="n">notifier_block</span> <span class="n">cpufreq_interactive_idle_nb</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC961'>	<span class="p">.</span><span class="n">notifier_call</span> <span class="o">=</span> <span class="n">cpufreq_interactive_idle_notifier</span><span class="p">,</span></div><div class='line' id='LC962'><span class="p">};</span></div><div class='line' id='LC963'><br/></div><div class='line' id='LC964'><span class="k">static</span> <span class="kt">int</span> <span class="n">__init</span> <span class="nf">cpufreq_interactive_init</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC965'><span class="p">{</span></div><div class='line' id='LC966'>	<span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC967'>	<span class="k">struct</span> <span class="n">cpufreq_interactive_cpuinfo</span> <span class="o">*</span><span class="n">pcpu</span><span class="p">;</span></div><div class='line' id='LC968'>	<span class="k">struct</span> <span class="n">sched_param</span> <span class="n">param</span> <span class="o">=</span> <span class="p">{</span> <span class="p">.</span><span class="n">sched_priority</span> <span class="o">=</span> <span class="n">MAX_RT_PRIO</span><span class="o">-</span><span class="mi">1</span> <span class="p">};</span></div><div class='line' id='LC969'><br/></div><div class='line' id='LC970'>	<span class="n">up_threshold</span> <span class="o">=</span> <span class="n">DEFAULT_UP_THRESHOLD</span><span class="p">;</span></div><div class='line' id='LC971'>	<span class="n">min_sample_time</span> <span class="o">=</span> <span class="n">DEFAULT_MIN_SAMPLE_TIME</span><span class="p">;</span></div><div class='line' id='LC972'>	<span class="n">above_hispeed_delay_val</span> <span class="o">=</span> <span class="n">DEFAULT_ABOVE_HISPEED_DELAY</span><span class="p">;</span></div><div class='line' id='LC973'>	<span class="n">timer_rate</span> <span class="o">=</span> <span class="n">DEFAULT_TIMER_RATE</span><span class="p">;</span></div><div class='line' id='LC974'>	<span class="n">hispeed_freq</span> <span class="o">=</span> <span class="n">DEFAULT_HISPEED_FREQ</span><span class="p">;</span></div><div class='line' id='LC975'>	<span class="n">input_boost_freq</span> <span class="o">=</span> <span class="n">DEFAULT_INPUT_BOOST_FREQ</span><span class="p">;</span></div><div class='line' id='LC976'><br/></div><div class='line' id='LC977'>	<span class="cm">/* Initalize per-cpu timers */</span></div><div class='line' id='LC978'>	<span class="n">for_each_possible_cpu</span><span class="p">(</span><span class="n">i</span><span class="p">)</span> <span class="p">{</span></div><div class='line' id='LC979'>		<span class="n">pcpu</span> <span class="o">=</span> <span class="o">&amp;</span><span class="n">per_cpu</span><span class="p">(</span><span class="n">cpuinfo</span><span class="p">,</span> <span class="n">i</span><span class="p">);</span></div><div class='line' id='LC980'>		<span class="n">init_timer</span><span class="p">(</span><span class="o">&amp;</span><span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">);</span></div><div class='line' id='LC981'>		<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">.</span><span class="n">function</span> <span class="o">=</span> <span class="n">cpufreq_interactive_timer</span><span class="p">;</span></div><div class='line' id='LC982'>		<span class="n">pcpu</span><span class="o">-&gt;</span><span class="n">cpu_timer</span><span class="p">.</span><span class="n">data</span> <span class="o">=</span> <span class="n">i</span><span class="p">;</span></div><div class='line' id='LC983'>	<span class="p">}</span></div><div class='line' id='LC984'><br/></div><div class='line' id='LC985'>	<span class="n">up_task</span> <span class="o">=</span> <span class="n">kthread_create</span><span class="p">(</span><span class="n">cpufreq_interactive_up_task</span><span class="p">,</span> <span class="nb">NULL</span><span class="p">,</span></div><div class='line' id='LC986'>				 <span class="s">&quot;kinteractiveup&quot;</span><span class="p">);</span></div><div class='line' id='LC987'>	<span class="k">if</span> <span class="p">(</span><span class="n">IS_ERR</span><span class="p">(</span><span class="n">up_task</span><span class="p">))</span></div><div class='line' id='LC988'>		<span class="k">return</span> <span class="n">PTR_ERR</span><span class="p">(</span><span class="n">up_task</span><span class="p">);</span></div><div class='line' id='LC989'><br/></div><div class='line' id='LC990'>	<span class="n">sched_setscheduler_nocheck</span><span class="p">(</span><span class="n">up_task</span><span class="p">,</span> <span class="n">SCHED_FIFO</span><span class="p">,</span> <span class="o">&amp;</span><span class="n">param</span><span class="p">);</span></div><div class='line' id='LC991'>	<span class="n">get_task_struct</span><span class="p">(</span><span class="n">up_task</span><span class="p">);</span></div><div class='line' id='LC992'><br/></div><div class='line' id='LC993'>	<span class="cm">/* No rescuer thread, bind to CPU queuing the work for possibly</span></div><div class='line' id='LC994'><span class="cm">	   warm cache (probably doesn&#39;t matter much). */</span></div><div class='line' id='LC995'>	<span class="n">down_wq</span> <span class="o">=</span> <span class="n">alloc_workqueue</span><span class="p">(</span><span class="s">&quot;knteractive_down&quot;</span><span class="p">,</span> <span class="mi">0</span><span class="p">,</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC996'><br/></div><div class='line' id='LC997'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">down_wq</span><span class="p">)</span></div><div class='line' id='LC998'>		<span class="k">goto</span> <span class="n">err_freeuptask</span><span class="p">;</span></div><div class='line' id='LC999'><br/></div><div class='line' id='LC1000'>	<span class="n">INIT_WORK</span><span class="p">(</span><span class="o">&amp;</span><span class="n">freq_scale_down_work</span><span class="p">,</span></div><div class='line' id='LC1001'>		  <span class="n">cpufreq_interactive_freq_down</span><span class="p">);</span></div><div class='line' id='LC1002'><br/></div><div class='line' id='LC1003'>	<span class="n">spin_lock_init</span><span class="p">(</span><span class="o">&amp;</span><span class="n">up_cpumask_lock</span><span class="p">);</span></div><div class='line' id='LC1004'>	<span class="n">spin_lock_init</span><span class="p">(</span><span class="o">&amp;</span><span class="n">down_cpumask_lock</span><span class="p">);</span></div><div class='line' id='LC1005'>	<span class="n">mutex_init</span><span class="p">(</span><span class="o">&amp;</span><span class="n">set_speed_lock</span><span class="p">);</span></div><div class='line' id='LC1006'><br/></div><div class='line' id='LC1007'>	<span class="n">inputopen_wq</span> <span class="o">=</span> <span class="n">create_workqueue</span><span class="p">(</span><span class="s">&quot;cfinteractive&quot;</span><span class="p">);</span></div><div class='line' id='LC1008'><br/></div><div class='line' id='LC1009'>	<span class="k">if</span> <span class="p">(</span><span class="o">!</span><span class="n">inputopen_wq</span><span class="p">)</span></div><div class='line' id='LC1010'>		<span class="k">goto</span> <span class="n">err_freeuptask</span><span class="p">;</span></div><div class='line' id='LC1011'><br/></div><div class='line' id='LC1012'>	<span class="n">INIT_WORK</span><span class="p">(</span><span class="o">&amp;</span><span class="n">inputopen</span><span class="p">.</span><span class="n">inputopen_work</span><span class="p">,</span> <span class="n">cpufreq_interactive_input_open</span><span class="p">);</span></div><div class='line' id='LC1013'><br/></div><div class='line' id='LC1014'>	<span class="cm">/* Kick the kthread to idle */</span></div><div class='line' id='LC1015'>	<span class="n">wake_up_process</span><span class="p">(</span><span class="n">up_task</span><span class="p">);</span></div><div class='line' id='LC1016'><br/></div><div class='line' id='LC1017'>	<span class="n">idle_notifier_register</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_interactive_idle_nb</span><span class="p">);</span></div><div class='line' id='LC1018'>	<span class="k">return</span> <span class="n">cpufreq_register_governor</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_gov_interactive</span><span class="p">);</span></div><div class='line' id='LC1019'><br/></div><div class='line' id='LC1020'><span class="nl">err_freeuptask:</span></div><div class='line' id='LC1021'>	<span class="n">put_task_struct</span><span class="p">(</span><span class="n">up_task</span><span class="p">);</span></div><div class='line' id='LC1022'>	<span class="k">return</span> <span class="o">-</span><span class="n">ENOMEM</span><span class="p">;</span></div><div class='line' id='LC1023'><span class="p">}</span></div><div class='line' id='LC1024'><br/></div><div class='line' id='LC1025'><span class="cp">#ifdef CONFIG_CPU_FREQ_DEFAULT_GOV_INTERACTIVE</span></div><div class='line' id='LC1026'><span class="n">fs_initcall</span><span class="p">(</span><span class="n">cpufreq_interactive_init</span><span class="p">);</span></div><div class='line' id='LC1027'><span class="cp">#else</span></div><div class='line' id='LC1028'><span class="n">module_init</span><span class="p">(</span><span class="n">cpufreq_interactive_init</span><span class="p">);</span></div><div class='line' id='LC1029'><span class="cp">#endif</span></div><div class='line' id='LC1030'><br/></div><div class='line' id='LC1031'><span class="k">static</span> <span class="kt">void</span> <span class="n">__exit</span> <span class="nf">cpufreq_interactive_exit</span><span class="p">(</span><span class="kt">void</span><span class="p">)</span></div><div class='line' id='LC1032'><span class="p">{</span></div><div class='line' id='LC1033'>	<span class="n">cpufreq_unregister_governor</span><span class="p">(</span><span class="o">&amp;</span><span class="n">cpufreq_gov_interactive</span><span class="p">);</span></div><div class='line' id='LC1034'>	<span class="n">kthread_stop</span><span class="p">(</span><span class="n">up_task</span><span class="p">);</span></div><div class='line' id='LC1035'>	<span class="n">put_task_struct</span><span class="p">(</span><span class="n">up_task</span><span class="p">);</span></div><div class='line' id='LC1036'>	<span class="n">destroy_workqueue</span><span class="p">(</span><span class="n">down_wq</span><span class="p">);</span></div><div class='line' id='LC1037'>	<span class="n">destroy_workqueue</span><span class="p">(</span><span class="n">inputopen_wq</span><span class="p">);</span></div><div class='line' id='LC1038'><span class="p">}</span></div><div class='line' id='LC1039'><br/></div><div class='line' id='LC1040'><span class="n">module_exit</span><span class="p">(</span><span class="n">cpufreq_interactive_exit</span><span class="p">);</span></div><div class='line' id='LC1041'><br/></div><div class='line' id='LC1042'><span class="n">MODULE_AUTHOR</span><span class="p">(</span><span class="s">&quot;Mike Chan &lt;mike@android.com&gt;&quot;</span><span class="p">);</span></div><div class='line' id='LC1043'><span class="n">MODULE_DESCRIPTION</span><span class="p">(</span><span class="s">&quot;&#39;cpufreq_interactive&#39; - A cpufreq governor for &quot;</span></div><div class='line' id='LC1044'>	<span class="s">&quot;Latency sensitive workloads&quot;</span><span class="p">);</span></div><div class='line' id='LC1045'><span class="n">MODULE_LICENSE</span><span class="p">(</span><span class="s">&quot;GPL&quot;</span><span class="p">);</span></div></pre></div>
          </td>
        </tr>
      </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" class="js-jump-to-line" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

          </div>
        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div>
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/">
      <span class="mega-octicon octicon-mark-github"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2013 <span title="0.49014s from fe4.rs.github.com">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-fullscreen-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="js-fullscreen-contents" placeholder="" data-suggester="fullscreen_suggester"></textarea>
          <div class="suggester-container">
              <div class="suggester fullscreen-suggester js-navigation-container" id="fullscreen_suggester"
                 data-url="/Ntemis/lge-kernel-p880/suggestions/commit">
              </div>
          </div>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped leftwards" title="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped leftwards"
      title="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-remove-close close ajax-error-dismiss"></a>
      Something went wrong with that request. Please try again.
    </div>

    
  </body>
</html>

