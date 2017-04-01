#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255, 255, 255);
    
    for (int i = 0; i < MaxBallCount; i++) {
        int size = 30;
        int randomX = ofRandom(0, ofGetWidth());
        int randomY = ofRandom(0, ofGetHeight());
        
        ofColor color;
        color.r = ofRandom(0, 255);
        color.g = ofRandom(0, 255);
        color.b = ofRandom(0, 255);
        
        Circle c = Circle(randomX, randomY, size, color);
        circles[i] = c;
    }
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
    image.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    image.save("sketch001.png");
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
