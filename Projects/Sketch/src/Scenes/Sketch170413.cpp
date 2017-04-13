//
//  Sketch170413.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/13.
//
//

#include "Sketch170413.hpp"

void Sketch170413::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
    ofSetColor(0);
}

void Sketch170413::update() {
    
}

void Sketch170413::draw() {
    
    float centerX = ofGetWidth() / 2.0;
    float centerY = ofGetHeight() / 2.0;
    float radius = 30;
    
    for (int deg = 0; deg <= 360 * 10; deg += 5) {
        radius += 0.5;
        float rad = ofDegToRad(deg + ofGetElapsedTimeMillis() / 4);
        float x = centerX + (radius * cos(rad));
        float y = centerY + (radius * sin(rad));
        ofDrawSphere(x, y, 1.0);
    }
    
}
