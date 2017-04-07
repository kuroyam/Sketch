//
//  Sketch170407.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/07.
//
//

#include "Sketch170407.hpp"

void Sketch170407::setup() {
    ofBackground(255);
    ofNoFill();
    ofSetColor(0);
    
    ofSetFrameRate(30);
    
    tileCount = 20;
}

void Sketch170407::update() {
    
}

void Sketch170407::draw() {
    for (int y = 0; y < tileCount; y++) {
        for (int x = 0; x < tileCount; x++) {
            
            int posX = ofGetWidth() / tileCount * x;
            int posY = ofGetHeight() / tileCount * y;
            
            int random = round(ofRandom(0, 1));
            
            if (random == 0) {
                ofSetLineWidth(ofGetMouseX() / tileCount);
                ofDrawLine(posX, posY, posX + ofGetWidth() / tileCount, posY + ofGetHeight() / tileCount);
            } else {
                ofSetLineWidth(ofGetMouseY() / tileCount);
                ofDrawLine(posX, posY + ofGetWidth() / tileCount, posX + ofGetHeight() / tileCount, posY);
            }
            
        }
    }
}
