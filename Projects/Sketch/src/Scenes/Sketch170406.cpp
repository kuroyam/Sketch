//
//  Sketch170406.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/06.
//
//

#include "Sketch170406.hpp"

void Sketch170406::setup() {
    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofNoFill();
}

void Sketch170406::update() {
    
}

void Sketch170406::draw() {
    if (ofGetMousePressed()) {
        ofPushMatrix();
        
        ofTranslate(ofGetWidth() / 2.0, ofGetHeight() / 2.0);
        
        int resolution = ofMap(ofGetMouseY() + 100, 0, ofGetHeight(), 2.0, 10.0);
        int radius = ofGetMouseX() - ofGetWidth() / 2.0;
        float angle = M_PI * 2 / resolution;
        
        ofColor color;
        color.setHsb(150, ofRandom(0, 255), 255 * 1.0);
        ofSetColor(color);
        
        ofSetLineWidth(2.0);
        
        ofBeginShape();
        for (int i = 0; i < resolution; i++) {
            float x = 0 + cos(angle * i) * radius;
            float y = 0 + sin(angle * i) * radius;
            ofVertex(x, y);
        }
        ofVertex(0 + cos(angle * 0) * radius, 0 + sin(angle * 0) * radius);
        ofEndShape();
        
        ofPopMatrix();
    }
}
