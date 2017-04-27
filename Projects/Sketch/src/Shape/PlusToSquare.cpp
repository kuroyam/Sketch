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
    
    inset = 2.0;
    degree = ofRandom(0, 360);
    count = 0;
}

void PlusToSquare::setup() {
    
}

void PlusToSquare::update() {
    count += 1;
    if (count == 100) {
        count = 0;
    }
}

void PlusToSquare::draw() {
    float left   = position.x - width  / 2.0 + inset;
    float right  = position.x + width  / 2.0 - inset;
    float top    = position.y - height / 2.0 + inset;
    float bottom = position.y + height / 2.0 - inset;
    
    float x1;
    float x2;
    float y1;
    float y2;
    
    if (count <= 50) {
        x1 = ofMap(count, 0, 50, position.x, left);
        x2 = ofMap(count, 0, 50, position.x, right);
        y1 = ofMap(count, 0, 50, position.y, top);
        y2 = ofMap(count, 0, 50, position.y, bottom);
    } else {
        x1 = ofMap(count, 51, 100, left,   position.x);
        x2 = ofMap(count, 51, 100, right,  position.x);
        y1 = ofMap(count, 51, 100, top,    position.y);
        y2 = ofMap(count, 51, 100, bottom, position.y);
    }
    
    ofPath path1;
    path1.lineTo(left,  y1);
    path1.lineTo(right, y1);
    path1.setStrokeWidth(1);
    path1.setStrokeColor(color);
    path1.draw();
    
    ofPath path2;
    path2.lineTo(left,  y2);
    path2.lineTo(right, y2);
    path2.setStrokeWidth(1);
    path2.setStrokeColor(color);
    path2.draw();
    
    ofPath path3;
    path3.lineTo(x1, top);
    path3.lineTo(x1, bottom);
    path3.setStrokeWidth(1);
    path3.setStrokeColor(color);
    path3.draw();
    
    ofPath path4;
    path4.lineTo(x2, top);
    path4.lineTo(x2, bottom);
    path4.setStrokeWidth(1);
    path4.setStrokeColor(color);
    path4.draw();
}
