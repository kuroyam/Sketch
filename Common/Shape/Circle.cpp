//
//  Circle.cpp
//  Sketch001
//
//  Created by Shun Kuroda on 2017/04/02.
//
//

#include "Circle.hpp"

Circle::Circle() {
    
}

Circle::Circle(float _x, float _y, float _radius, const ofColor & _color) {
    x = _x;
    y = _y;
    radius = _radius;
    color = _color;
}

void Circle::setup() {
    
}

void Circle::update() {
    
}

void Circle::draw() {
    ofSetColor(color);
    ofDrawCircle(x, y, radius);
}
