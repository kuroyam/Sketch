//
//  Sketch170408.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/08.
//
//

#include "Sketch170408.hpp"

void Sketch170408::setup() {
    ofBackground(0);
    ofSetBackgroundAuto(false);
    ofEnableSmoothing();
}

void Sketch170408::update() {
    
}

void Sketch170408::draw() {
    if (!ofGetMousePressed()) {
        return;
    }
    
    int numTriangles = 10.0;
    int minOffset = 5.0;
    int maxOffset = 70.0;
    int alpha = 150.0;
    
    for (int t = 0; t < numTriangles; t++) {
        ofVec2f mousePos(ofGetMouseX(), ofGetMouseY());
        
        ofVec2f p1(0.0, 6.25);
        ofVec2f p2(25.0, 0.0);
        ofVec2f p3(0, -6.25);
        
        float rotation = ofRandom(360);
        p1.rotate(rotation);
        p2.rotate(rotation);
        p3.rotate(rotation);
        
        float offsetDistance = ofRandom(minOffset, maxOffset);
        ofVec2f triangleOffset(offsetDistance, 0.0);
        triangleOffset.rotate(rotation);
        
        p1 += mousePos + triangleOffset;
        p2 += mousePos + triangleOffset;
        p3 += mousePos + triangleOffset;
        
        ofColor aqua(0, 255, 255, alpha);
        ofColor purple(198, 0, 205, alpha);
        ofColor inbetween = aqua.getLerped(purple, ofRandom(1.0));
        ofSetColor(inbetween);
        
        ofDrawTriangle(p1, p2, p3);
    }
}
