//
//  Sketch170417.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/17.
//
//

#include "Sketch170417.hpp"

void Sketch170417::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
}

void Sketch170417::update() {
    
}

void Sketch170417::draw() {
    for_each(inks.begin(), inks.end(), [](Ink& ink){
        ink.draw();
    });
}

void Sketch170417::mouseDragged(int x, int y, int button) {
    if (button == OF_MOUSE_BUTTON_LEFT) {
        inks.push_back(Ink(ofPoint(x, y)));
    }
}

void Sketch170417::mousePressed(int x, int y, int button) {
    if (button == OF_MOUSE_BUTTON_LEFT) {
        inks.push_back(Ink(ofPoint(x, y)));
    } else if (button == OF_MOUSE_BUTTON_RIGHT) {
        inks.clear();
    }
}
