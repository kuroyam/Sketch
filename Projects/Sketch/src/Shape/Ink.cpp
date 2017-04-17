//
//  Ink.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/17.
//
//

#include "Ink.hpp"

Ink::Ink(ofPoint _position) {
    position = _position;
    color.setHsb(ofRandom(255), 255, 255);
    radius = 30;
    
    for (int deg = 0; deg <= 360; deg += 10) {
        float rad = ofDegToRad(deg);
        float x = position.x + (radius * cos(rad)) + ofRandom(-10, 10);
        float y = position.y + (radius * sin(rad)) + ofRandom(-10, 10);
        vertexes.push_back(ofPoint(x, y));
    }
}

void Ink::setup() {
    
}

void Ink::update() {
    
}

void Ink::draw() {
    ofPushMatrix();
    
    ofPath path;
    for_each(vertexes.begin(), vertexes.end(), [&](ofPoint& vertex){
        path.curveTo(vertex);
    });
    path.close();
    
    path.setFillColor(color);
    path.draw();
    
    ofPopMatrix();
}
