//
//  Polygon.cpp
//  Sketch002
//
//  Created by Shun Kuroda on 2017/04/03.
//
//

#include "Polygon.hpp"

skPolygon::skPolygon() {
    
}

skPolygon::skPolygon(ofPoint _position, float _radius, int _vertexCount, ofColor _color) {
    position = _position;
    radius = _radius;
    vertexCount = _vertexCount;
    color = _color;
}

void skPolygon::setup() {
    
}

void skPolygon::update() {
    
}

void skPolygon::draw() {
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
