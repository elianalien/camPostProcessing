#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground (128,128,128);

    vidGrab.setup(640,480);
    
    postPro.init(ofGetWidth(), ofGetHeight());
    
    PixelatePass::Ptr pixelate;
    pixelate = postPro.createPass<PixelatePass>();
    pixelate->setResolution(50.0f, 50.0f);
}

//--------------------------------------------------------------
void ofApp::update(){

    vidGrab.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    postPro.begin();
        vidGrab.draw(0,0,640,480);
    postPro.end(false);
    postPro.draw();
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
