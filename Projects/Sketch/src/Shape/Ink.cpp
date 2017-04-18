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
    radius = 60;
    
    blobs.push_back(new Blob(position, color, radius));
}

void Ink::setup() {
    
}

void Ink::update() {
    auto last = blobs.at(blobs.size() - 1);
    
    if (last->position.y > ofGetHeight() + radius / 2) {
        return;
    }
    
    blobs.push_back(new Blob(last->position + ofPoint(0, 5), color, radius));
}

void Ink::draw() {
    for_each(blobs.begin(), blobs.end(), [](Blob* blob){
        blob->draw();
    });
}
