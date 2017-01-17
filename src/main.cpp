#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGLFWWindow.h"

//========================================================================
int main( ){
	//ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context
    ofAppGLFWWindow win;
    //win.setNumSamples(8);
    win.setMultiDisplayFullscreen(true); //this makes the fullscreen window span across all your monitors
    
    ofSetupOpenGL(&win, 800,500, OF_FULLSCREEN);
    // this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
