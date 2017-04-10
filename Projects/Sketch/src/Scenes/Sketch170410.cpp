//
//  Sketch170410.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/10.
//
//

#include "Sketch170410.hpp"

void Sketch170410::setup() {
    ofBackground(0);
    ofSetBackgroundAuto(false);
    ofSetColor(255);
    ofSetLineWidth(2.0);
}

void Sketch170410::update() {
    
}

void Sketch170410::draw() {
    if (!ofGetMousePressed()) {
        return;
    }
    
    int step = 20;
    
    float lastX = -step;
    float lastY = ofGetMouseY();
    float random = ofRandom(10);
    
    for (int x = 0; x < ofGetWidth(); x += step) {
        float y = 10 + ofNoise(random) * 80 + ofGetMouseY();
        ofDrawLine(x, y, lastX, lastY);
        lastX = x;
        lastY = y;
        random += 0.1;
    }
    
}
