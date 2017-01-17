#include "ofApp.h"
void ofApp::setup(){
    if( XML.loadFile("setting.xml") ){
        //message = "setting.xml loaded!";
        loaded=true;
    }else{
        message = "unable to load setting.xml check data/ folder";
        loaded=false;
    }
    width	= XML.getValue("SETTING:SIZE:WIDTH", 1920);
    height	= XML.getValue("SETTING:SIZE:HEIGHT", 1080);
    cout<<ofToString(width)<<endl;
    
    
    vid.load("video.mp4");
    vid.play();
    vid.setLoopState(OF_LOOP_NORMAL);
    
    
    ofSetWindowShape(width,height);
    ofSetWindowPosition(0,0);
}

//--------------------------------------------------------------
void ofApp::update(){
    vid.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    vid.draw(0,0,width,height);
    if(!loaded){
        ofDrawBitmapStringHighlight(message, 10, 10);
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
