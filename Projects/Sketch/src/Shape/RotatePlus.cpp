//
//  RotatePlus.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/05/01.
//
//

#include "RotatePlus.hpp"

RotatePlus::RotatePlus(ofPoint _p, float _r, ofColor _c) {
    position = _p;
    radius = _r;
    color = _c;
    
    degree = 0;
}

void RotatePlus::setup() {
    
}

void RotatePlus::update() {
    degree++;
    if (degree > 360) {
        degree = 0;
    }
}

void RotatePlus::draw() {
    float x1 = position.x + (radius * cos(ofDegToRad(degree)));
    float y1 = position.y + (radius * sin(ofDegToRad(degree)));
    
    float x2 = position.x + (radius * cos(ofDegToRad(degree + 90)));
    float y2 = position.y + (radius * sin(ofDegToRad(degree + 90)));
    
    float x3 = position.x + (radius * cos(ofDegToRad(degree + 180)));
    float y3 = position.y + (radius * sin(ofDegToRad(degree + 180)));
    
    float x4 = position.x + (radius * cos(ofDegToRad(degree + 270)));
    float y4 = position.y + (radius * sin(ofDegToRad(degree + 270)));
    
    ofPath path1;
    path1.lineTo(x1, y1);
    path1.lineTo(x3, y3);
    path1.setStrokeWidth(2);
    path1.setStrokeColor(color);
    path1.draw();
    
    ofPath path2;
    path2.lineTo(x2, y2);
    path2.lineTo(x4, y4);
    path2.setStrokeWidth(2);
    path2.setStrokeColor(color);
    path2.draw();
}
