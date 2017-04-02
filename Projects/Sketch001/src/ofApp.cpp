#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    
    for (int i = 0; i < MaxBallCount; i++) {
        int size = 30;
        int randomX = ofRandom(0, ofGetWidth());
        int randomY = ofRandom(0, ofGetHeight());
        
        ofColor color;
        color.setHsb(ofRandom(0, 255), 255 * 0.3, 255 * 1.0);
        
        MoveCircle circle = MoveCircle(randomX, randomY, size, color);
        circles[i] = circle;
    }
    
    ofSetFrameRate(60);
    
    videoRecorder.setVideoCodec("mpeg4");
    videoRecorder.setVideoBitrate("8000k");
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < MaxBallCount; i++) {
        circles[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < MaxBallCount; i++) {
        circles[i].draw();
    }
    
    ofImage image;
    image.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
    
    bool success = videoRecorder.addFrame(image.getPixels());
    if (!success) {
        //ofLogWarning("This frame was not added!");
    }
    
    if (videoRecorder.hasVideoError()) {
        ofLogWarning("videoError");
    }
    if (videoRecorder.hasAudioError()) {
        ofLogWarning("audioError");
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'r') {
        videoRecorder.setup(ofGetTimestampString()+"sketch.mov", ofGetWidth(), ofGetHeight(), 60);
        videoRecorder.start();
    } else if (key == 'c') {
        videoRecorder.close();
    }
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
