//
//  Sketch170412.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/12.
//
//

#include "Sketch170412.hpp"

void Sketch170412::setup() {
    ofBackground(255);
    ofSetColor(0);
}

void Sketch170412::update() {
    
}

void Sketch170412::draw() {
    
    float centerX = ofGetWidth() / 2.0;
    float centerY = ofGetHeight() / 2.0;
    float radius = 30;
    
    for (int deg = 0; deg <= 360 * 10; deg += 5) {
        radius += 1;
        float rad = ofDegToRad(deg);
        float x = centerX + (radius * cos(rad));
        float y = centerY + (radius * sin(rad));
        ofDrawSphere(x, y, 1.0);
    }
    
}
