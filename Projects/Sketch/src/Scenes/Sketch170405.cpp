//
//  Sketch170405.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/05.
//
//

#include "Sketch170405.hpp"

void Sketch170405::setup() {
    ofBackground(255);
    ofSetBackgroundAuto(false);
    ofNoFill();
}

void Sketch170405::update() {
    
}

void Sketch170405::draw() {
    if (ofGetMousePressed()) {
        ofPushMatrix();
        
        ofTranslate(ofGetWidth() / 2.0, ofGetHeight() / 2.0);
        
        int resolution = ofMap(ofGetMouseY() + 100, 0, ofGetHeight(), 2.0, 10.0);
        int radius = ofGetMouseX() - ofGetWidth() / 2.0;
        float angle = M_PI * 2 / resolution;
        
        ofColor color;
        color.setHsb(ofRandom(0, 255), 255 * 0.4, 255 * 0.9);
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
