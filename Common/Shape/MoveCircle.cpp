//
//  MoveCircle.cpp
//  Sketch001
//
//  Created by Shun Kuroda on 2017/04/02.
//
//

#include "MoveCircle.hpp"

using super = Circle;

MoveCircle::MoveCircle() {
    
}

MoveCircle::MoveCircle(float _x, float _y, float _radius, const ofColor & _color)
: Circle(_x, _y, _radius, _color) {
    speed = ofRandom(-3, 3);
}

void MoveCircle::update() {
    super::update();
    
    x += speed;
    
    if (x < 0) {
        x = 0;
        speed *= -1;
    } else if (x > ofGetWidth()) {
        x = ofGetWidth();
        speed *= -1;
    }
}
