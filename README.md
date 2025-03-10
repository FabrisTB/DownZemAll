<img align="left" src="./src/resources/logo/icon64.png">

# DownZemAll!

[![GitHub release](https://img.shields.io/github/v/release/setvisible/downzemall.svg)](../../releases/latest)
[![GitHub license](https://img.shields.io/github/license/setvisible/downzemall.svg)](LICENSE) 
[![Chrome Web Store](https://img.shields.io/chrome-web-store/users/modofbhnhlagjmejdbalnijgncppjeio?label=users&logo=google)](https://chrome.google.com/webstore/detail/down-right-now/modofbhnhlagjmejdbalnijgncppjeio "Google Chrome Add-on")
[![Mozilla Add-on](https://img.shields.io/amo/users/down-right-now?label=users&logo=mozilla)](https://addons.mozilla.org/firefox/addon/down-right-now/ "Mozilla Firefox Add-on")
![GitHub All Releases](https://img.shields.io/github/downloads/setvisible/DownZemAll/total)
[![Twitter Follow](https://img.shields.io/twitter/follow/downzemall?label=Follow)](https://twitter.com/downzemall)


| master | develop |
|---------|-----------|
| [![Built with GitHub Actions](https://github.com/setvisible/downzemall/actions/workflows/deployment.yml/badge.svg?branch=master)](https://github.com/setvisible/DownZemAll/actions "Go to GitHub Actions") | [![Built with GitHub Actions](https://github.com/setvisible/downzemall/actions/workflows/deployment.yml/badge.svg?branch=develop)](https://github.com/setvisible/DownZemAll/actions "Go to GitHub Actions") |


*DownZemAll!* is a rewrite of the legacy software [DownThemAll!](https://en.wikipedia.org/wiki/DownThemAll! "https://en.wikipedia.org/wiki/DownThemAll!") which was an extension for Mozilla Firefox, but whose development stopped around 2016, when Mozilla Firefox migrated to WebExtensions.

*DownZemAll!* is a standalone download manager for Windows, MacOS and Linux. 

It aims to work with latest versions of Mozilla Firefox (powered by *WebExtensions*), and other web browsers (Chrome, Edge, Safari...). 

*DownZemAll!* is written in C++ and based on the [Qt](https://www.qt.io/ "https://www.qt.io/") framework.

[![Built with Qt](./screenshots/built_with_qt.png)](https://www.qt.io/ "Go to Qt official site - www.qt.io")


## Screenshots

<details open="">
<summary>Video Streams</summary>

![Video Download](./screenshots/anim_youtube.gif)

</details>
<details>
<summary>Webpage Content</summary>

![WebPage](./screenshots/anim_01.gif)

</details>
<details>
<summary>Batch of Files</summary>

![Batch](./screenshots/anim_02.gif)

</details>

More screenshots on the [Gallery](https://setvisible.github.io/DownZemAll/category/screenshots.html "Go to Screenshots page") page.


## Installation

Go to [Download](https://setvisible.github.io/DownZemAll/category/download.html) page to install the application for your operating system.

Rem: *Native-Client* is an alternative to *DownRightNow*. Click [here](NativeClient.md "NativeClient.md") for more information.


## Usage

Go to [Tutorial](https://setvisible.github.io/DownZemAll/category/tutorial.html) page.

## Under the hood

*DownZemAll!* is a standalone application, embedding its own web engine. That is, it aims to be free and independent, and not rely on any third-party Web Browser technology.

The internal web engine is currently:

* [Google Gumbo Parser](https://github.com/google/gumbo-parser "https://github.com/google/gumbo-parser"), for the **MinGW** and **GNU** versions. 

     Gumbo is a small pure-C HTML5 parser (but doesn't parse Javascript)

* [Chromium](https://fr.wikipedia.org/wiki/Chromium "https://fr.wikipedia.org/wiki/Chromium"), for the **MSVC** version.

     Chromium is a powerful web engine (parses HTML+Javascript)

When we give an URL address to *DownZemAll!*, *DownZemAll!* downloads the page, parses the HTML page and collects the links.

Due to rapid evolution of web technology, *DownZemAll!* is designed to implement new parsers or add existing ones if required.


## Code of Conduct

Click [here](CODE_OF_CONDUCT.md "CODE_OF_CONDUCT.md") for Code of Conduct.


## Translations

Click [here](TRANSLATORS.md "TRANSLATORS.md") for translator guide.


## Build with QtCreator on Windows

Assuming that the configured Kit in QtCreator is the auto-detected *Desktop Qt 6.3.1 MinGW 64-bit (by default)*. (see **Tools** > **Options** > **Kits**)

Assuming that libtorrent is already compiled.

1. **File** > **Open File or Project...**. 
   Select `./CMakeLists.txt`

1. Go to page **Debug**. Click **Configure**

1. Go to page **Projects**.
   Select **Build** > **Parameters**    
   Set the values:
    - *Boost_ROOT*: "path/to/Boost"
    - *LibtorrentRasterbar_ROOT*: "path/to/libtorrent"

    Eventually, if OpenSSL path is not recognized, set explicitly:
    - *OpenSSL_ROOT_DIR*: "(path/to/Qt6)/Tools/OpenSSL/Win_x64"

    Moreover,
    - *CMAKE_INSTALL_PREFIX*: Chose another install path.

1. Click **Run CMake**.

1. Go to page **Editor**. Build. Run.

1. To install: go to page **Projects**.
    Select **Build** > **Parameters**.
    In Step *Build*, check *install* amongst the targets, thus CMake will build and install.


## Other builds

Click [here](CONTRIBUTING.md "CONTRIBUTING.md") for build instructions and tips.


## License and Disclaimer

The code is released under the GNU [Lesser General Public License (LGPL)](LICENSE "LICENSE").

Use it at your own risk. None of the authors, contributors, or anyone else connected with this DownZemAll software and the DownRightNow web-extension, in any way whatsoever, can be responsible for your use of the application. 

Please be aware that this site contains copyrighted material the use of which has not always been specifically authorized by the copyright owner.
