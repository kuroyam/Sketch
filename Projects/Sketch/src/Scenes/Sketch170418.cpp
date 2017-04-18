//
//  Sketch170418.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/18.
//
//

#include "Sketch170418.hpp"

void Sketch170418::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
}

void Sketch170418::update() {
    for_each(inks.begin(), inks.end(), [](Ink& ink){
        ink.update();
    });
}

void Sketch170418::draw() {
    for_each(inks.begin(), inks.end(), [](Ink& ink){
        ink.draw();
    });
}

void Sketch170418::mouseDragged(int x, int y, int button) {
    if (button == OF_MOUSE_BUTTON_LEFT) {
        inks.push_back(Ink(ofPoint(x, y)));
    }
}

void Sketch170418::mousePressed(int x, int y, int button) {
    if (button == OF_MOUSE_BUTTON_LEFT) {
        inks.push_back(Ink(ofPoint(x, y)));
    } else if (button == OF_MOUSE_BUTTON_RIGHT) {
        inks.clear();
    }
}
