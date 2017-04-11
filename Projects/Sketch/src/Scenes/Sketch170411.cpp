//
//  Sketch170411.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/11.
//
//

#include "Sketch170411.hpp"

void Sketch170411::setup() {
    ofBackground(255);
    ofSetColor(0);
}

void Sketch170411::update() {
    
}

void Sketch170411::draw() {
    
    float centerX = ofGetWidth() / 2.0;
    float centerY = ofGetHeight() / 2.0;
    float radius = 300;
    
    for (int deg = 0; deg <= 360; deg += 5) {
        float rad = ofDegToRad(deg);
        float x = centerX + (radius * cos(rad));
        float y = centerY + (radius * sin(rad));
        ofDrawSphere(x, y, 1.0);
    }
    
}
