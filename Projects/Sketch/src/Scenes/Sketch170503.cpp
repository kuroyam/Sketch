//
//  Sketch170503.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/05/03.
//
//

#include "Sketch170503.hpp"

void Sketch170503::setup() {
    ofSetWindowShape(520, 520);
    ofBackground(255);
    
    shape.setup();
    
    isRunning = false;
}

void Sketch170503::update() {
    if (!isRunning) {
        return;
    }
    
    shape.update();
}

void Sketch170503::draw() {
    shape.draw();
}

void Sketch170503::keyPressed(int key) {
    if (key == 's') {
        isRunning = !isRunning;
    }
}

void Sketch170503::mouseDragged(int x, int y, int button) {
    
}

void Sketch170503::mousePressed(int x, int y, int button) {
    
}
