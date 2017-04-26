//
//  Sketch170425.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/26.
//
//

#include "Sketch170425.hpp"

void Sketch170425::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
    
    float width  = 20;
    float height = width;
    
    for (int z = 0; z < ofGetWidth(); z += width) {
        for (int y = 0; y < ofGetHeight(); y += height) {
            for (int x = 0; x < ofGetWidth(); x += width) {
                shapes.push_back(PlusToSquare(x + width / 2.0, y + height / 2.0, z, width, height));
            }
        }
    }
}

void Sketch170425::update() {
    
}

void Sketch170425::draw() {
    for_each(shapes.begin(), shapes.end(), [](PlusToSquare& shape){
        shape.draw();
    });
}

void Sketch170425::keyPressed(int key) {
    
}

void Sketch170425::mouseDragged(int x, int y, int button) {
    
}

void Sketch170425::mousePressed(int x, int y, int button) {
    
}
