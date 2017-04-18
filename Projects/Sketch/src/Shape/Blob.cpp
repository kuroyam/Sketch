//
//  Blob.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/16.
//
//

#include "Blob.hpp"

Blob::Blob(ofPoint _position) {
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

Blob::Blob(ofPoint _position, ofColor _color, float _radius) {
    position = _position;
    color    = _color;
    radius   = _radius;
    
    for (int deg = 0; deg <= 360; deg += 10) {
        float rad = ofDegToRad(deg);
        float x = position.x + (radius * cos(rad)) + ofRandom(-10, 10);
        float y = position.y + (radius * sin(rad)) + ofRandom(-10, 10);
        vertexes.push_back(ofPoint(x, y));
    }
}


void Blob::setup() {
    
}

void Blob::update() {
    
}

void Blob::draw() {
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

