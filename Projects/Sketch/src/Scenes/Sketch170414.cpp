//
//  Sketch170414.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/15.
//
//

#include "Sketch170414.hpp"

void Sketch170414::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
    ofSetColor(0);
}

void Sketch170414::update() {
    
}

void Sketch170414::draw() {
    
    float centerX = ofGetWidth() / 2.0;
    float centerY = ofGetHeight() / 2.0;
    float radius = 10 + (ofGetElapsedTimeMillis() % 2000) * 0.1;
    
    for (int deg = 0; deg <= 360 * 10; deg += 5) {
        radius += 0.25;
        float rad = ofDegToRad(deg + ofGetElapsedTimeMillis() / 4);
        float x = centerX + (radius * cos(rad));
        float y = centerY + (radius * sin(rad));
        ofDrawSphere(x, y, 1.0);
    }
}
