//
//  Sketch170511.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/05/11.
//
//

#include "Sketch170511.hpp"

void Sketch170511::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
}

void Sketch170511::update() {
    
}

void Sketch170511::draw() {
    float offX = 0.0;
    float offY = 0.0;
    
    float stepX = ofMap(ofGetMouseX(), 0, ofGetWidth(), 0.0, 1.0);
    float stepY = ofMap(ofGetMouseY(), 0, ofGetHeight(), 0.0, 1.0);
    
    for (int y = 0; y < ofGetHeight(); y++) {
        for (int x = 0; x < ofGetWidth(); x++) {
            float noise = ofNoise(offX, offY);
            float brightness = ofMap(noise, 0, 1, 0, 255);
            
            ofSetColor(brightness);
            ofDrawSphere(x, y, 1);
            
            offX += stepX;
        }
        offY += stepY;
    }
}

void Sketch170511::keyPressed(int key) {
    
}

void Sketch170511::mouseDragged(int x, int y, int button) {
    
}

void Sketch170511::mousePressed(int x, int y, int button) {
    
}
