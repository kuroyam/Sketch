//
//  Sketch170409.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/09.
//
//

#include "Sketch170409.hpp"

void Sketch170409::setup() {
    ofBackground(0);
    ofSetBackgroundAuto(false);
}

void Sketch170409::update() {
    
}

void Sketch170409::draw() {
    if (!ofGetMousePressed()) {
        return;
    }
    
    float start = ofRandom(0, 360);
    float end   = ofRandom(0, 360);
    
    ofPoint center(ofGetWidth() / 2.0, ofGetHeight() / 2.0);
    float radius = ofMap(ofGetMouseY(), 0, ofGetHeight(), 30, 500);
    
    ofPath path;
    path.arc(center, radius, radius, start, end);
    path.setStrokeWidth(ofRandom(2.0, 10.0));
    path.setCircleResolution(90);
    path.setFilled(false);
    
    ofColor aqua(0, 255, 255, 150);
    ofColor purple(198, 0, 205, 150);
    ofColor inbetween = aqua.getLerped(purple, ofRandom(1.0));
    path.setStrokeColor(inbetween);
    
    path.draw();
}
