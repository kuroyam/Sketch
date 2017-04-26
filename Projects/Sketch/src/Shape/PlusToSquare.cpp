//
//  PlusToSquare.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/23.
//
//

#include "PlusToSquare.hpp"

PlusToSquare::PlusToSquare(ofPoint _p, float _w, float _h) {
    position = ofVec3f(_p.x, _p.y, 0);
    width = _w;
    height = _h;
    
    ofColor aqua(0, 255, 255, 150);
    ofColor purple(198, 0, 205, 150);
    ofColor inbetween = aqua.getLerped(purple, ofRandom(1.0));
    color = inbetween;
    
    inset = 2.0;
    degree = ofRandom(0, 360);
}

PlusToSquare::PlusToSquare(float _x, float _y, float _z, float _w, float _h) {
    position = ofVec3f(_x, _y, _z);
    width = _w;
    height = _h;
    
    ofColor aqua(0, 255, 255, 150);
    ofColor purple(198, 0, 205, 150);
    ofColor inbetween = aqua.getLerped(purple, ofRandom(1.0));
    color = inbetween;
    
    inset = 8.0;
    degree = ofRandom(0, 360);
}

void PlusToSquare::setup() {
    
}

void PlusToSquare::update() {
//    position.z -= 1;
}

void PlusToSquare::draw() {
    float left   = position.x - width  / 2.0 + inset;
    float right  = position.x + width  / 2.0 - inset;
    float top    = position.y - height / 2.0 + inset;
    float bottom = position.y + height / 2.0 - inset;
    
    ofPath path1;
    path1.lineTo(left,  position.y, position.z);
    path1.lineTo(right, position.y, position.z);
    path1.setStrokeWidth(1);
    path1.setStrokeColor(color);
//    path1.rotate(45, ofVec3f(0, 1, 0));
    path1.draw();
    
    ofPath path2;
    path2.lineTo(position.x, top,    position.z);
    path2.lineTo(position.x, bottom, position.z);
    path2.setStrokeWidth(1);
    path2.setStrokeColor(color);
//    path2.rotate(45, ofVec3f(0, 1, 0));
    path2.draw();
}
