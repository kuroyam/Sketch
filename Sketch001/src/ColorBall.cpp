//
//  ColorBall.cpp
//  Sketch001
//
//  Created by Shun Kuroda on 2017/04/01.
//
//

#include "ColorBall.hpp"

ColorBall::ColorBall() {
    
}

void ColorBall::setup(float _x, float _y, int _size) {
    x = _x;
    y = _y;
    
    size = _size;
    
    color.set(ofRandom(255), ofRandom(255), ofRandom(255));
}

void ColorBall::update() {
    
}

void ColorBall::draw() {
    ofSetColor(color);
    ofDrawCircle(x, y, size);
}

