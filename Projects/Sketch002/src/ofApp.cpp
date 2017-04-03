#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255, 255, 255);
    
    for (int i = 0; i < PolygonCount; i++) {
        ofPoint point;
        point.x = ofRandom(0, ofGetWidth());
        point.y = ofRandom(0, ofGetHeight());
        
        int radius = 30;
        
        int vertexCount = ofRandom(3, 10);
        
        ofColor color;
        color.setHsb(ofRandom(0, 255), 255 * 0.4, 255 * 1.0);
        
        polygons[i] = skPolygon(point, radius, vertexCount, color);
        polygons[i].setup();
    }
    
}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i = 0; i < PolygonCount; i++) {
        polygons[i].update();
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i = 0; i < PolygonCount; i++) {
        polygons[i].draw();
    }
    
    image.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == 'r') {
        image.save("sketch002.png");
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
