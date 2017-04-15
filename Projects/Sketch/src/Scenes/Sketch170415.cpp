//
//  Sketch170415.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/15.
//
//

#include "Sketch170415.hpp"

void Sketch170415::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
}

void Sketch170415::update() {
    
}

void Sketch170415::draw() {
    
    float centerX = ofGetWidth() / 2.0;
    float centerY = ofGetHeight() / 2.0;
    float radius = 150;
    
    ofPushMatrix();
    
    ofPath path;
    
    for (int deg = 0; deg <= 360; deg += 10) {
        float rad = ofDegToRad(deg);
        float x = centerX + (radius * cos(rad)) + ofRandom(-10, 10);
        float y = centerY + (radius * sin(rad)) + ofRandom(-10, 10);
        path.curveTo(x, y);
    }
    path.close();
    
    path.setStrokeColor(ofColor(0));
    path.setStrokeWidth(1);
    path.draw();
    
    ofPopMatrix();
}
