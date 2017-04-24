//
//  PlusToSquare.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/23.
//
//

#include "PlusToSquare.hpp"

PlusToSquare::PlusToSquare(ofPoint _p, float _w, float _h) {
    position = _p;
    width = _w;
    height = _h;
    
    ofColor aqua(0, 255, 255, 150);
    ofColor purple(198, 0, 205, 150);
    ofColor inbetween = aqua.getLerped(purple, ofRandom(1.0));
    color = inbetween;
    
    inset = 2.0;
    degree = ofRandom(0, 360);
}

void PlusToSquare::setup() {
    
}

void PlusToSquare::update() {
    degree += 1;
}

void PlusToSquare::draw() {
    float left   = position.x - width  / 2.0 + inset;
    float right  = position.x + width  / 2.0 - inset;
    float top    = position.y - height / 2.0 + inset;
    float bottom = position.y + height / 2.0 - inset;
    
    ofPath path1;
    path1.lineTo(left,  position.y);
    path1.lineTo(right, position.y);
    path1.setStrokeWidth(1);
    path1.setStrokeColor(color);
    path1.rotate(degree, ofVec3f(0, 1, 0));
    path1.draw();
    
    ofPath path2;
    path2.lineTo(position.x, top);
    path2.lineTo(position.x, bottom);
    path2.setStrokeWidth(1);
    path2.setStrokeColor(color);
    path2.rotate(degree, ofVec3f(0, 1, 0));
    path2.draw();
}
