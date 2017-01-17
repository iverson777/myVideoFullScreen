# myVideoFullScreen

相容於openFrameworks 0.9.3 (http://openframeworks.cc)
##關於about
此程式能夠開啟跨顯示器全螢幕視窗

open fullscreen app even in multi monitor

如果你已經有寫過openframeworks僅需要知道在main.cpp加入

if you already wrote some oF code, just need know add code in main.cpp

```
#include "ofAppGLFWWindow.h"
int main(){
  ofAppGLFWWindow win;
  win.setMultiDisplayFullscreen(true); //this makes the fullscreen window span across all your monitors
  ofSetupOpenGL(&win, 800,500, OF_FULLSCREEN);
  ofRunApp(new ofApp());
}
```

其他在

>data/setting.xml

修改width, height可改變視窗中影片尺寸
建議可以Sublime Text開啟，記筆本也行，但較難閱讀

modify width, height in 

>data/setting.xml

adjust video size


##使用需知 
★影片請放data資料夾，命名為video.mp4

★video rename as "video.mp4" and put in data folder

★在MAC系統中，多螢幕情況下需要在"系統偏好設定">>Mission Control>>顯示器有單獨Space不能打勾
修改後登出再登入即可 

★in OSX, system preferences >> mission control >> and set "Displays have separate Spaces" to false.
Log out and Log in again, and it will work.

★在WINDOWS系統中，如果開啟後畫面全灰，可能是系統沒有影片編碼器，可至

★in Windows, if launch application, all gary no video, maybe video codec lost, just download and install on

[下載LINK](https://www.codecguide.com/download_kl.htm)


★如果無法開啟執行檔，請嘗試以下步驟
★if can not launch application, follow setps please
1. 安裝vc_redist.x86.exe(2015 32位元電腦)，vc_redist.x64.exe(2015 64位元電腦)
2. 移除相關Apple程式再重裝(reinstall apple program)
3. 以上都無法解決，請安裝vs_community.exe(需網路)

★操作說明：
★keyboard control: 
1. spacebar空白鍵>>暫停或播放pause or play
2. P     >>從頭開始播放play from start
