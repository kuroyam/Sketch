//
//  Polygon.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/03.
//
//

#include "Polygon.hpp"

Sketch::Polygon::Polygon() {
    
}

Sketch::Polygon::Polygon(ofPoint _position, float _radius, int _vertexCount, ofColor _color) {
    position = _position;
    radius = _radius;
    vertexCount = _vertexCount;
    color = _color;
}

void Sketch::Polygon::setup() {
    
}

void Sketch::Polygon::update() {
    
}

void Sketch::Polygon::draw() {
    ofPath path;
    path.setColor(color);
    
    ofPushMatrix();
    ofTranslate(position.x, position.y);
    
    for (int i = 0, l = 360; i < l; i += l / vertexCount) {
        path.lineTo(radius * cos(ofDegToRad(i)), radius * sin(ofDegToRad(i)));
    }
    
    path.draw();
    ofPopMatrix();
}
