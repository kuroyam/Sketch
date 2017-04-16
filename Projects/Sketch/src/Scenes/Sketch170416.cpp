//
//  Sketch170416.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/16.
//
//

#include "Sketch170416.hpp"

void Sketch170416::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
}

void Sketch170416::update() {
    
}

void Sketch170416::draw() {
    for_each(blobs.begin(), blobs.end(), [](Blob& blob){
        blob.draw();
    });
}

void Sketch170416::mousePressed(int x, int y, int button) {
    if (button == OF_MOUSE_BUTTON_LEFT) {
        blobs.push_back(Blob(ofPoint(x, y)));
    } else if (button == OF_MOUSE_BUTTON_RIGHT) {
        blobs.clear();
    }
}
