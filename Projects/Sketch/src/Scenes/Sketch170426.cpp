//
//  Sketch170426.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/26.
//
//

#include "Sketch170426.hpp"

void Sketch170426::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
    
    float width  = 50;
    float height = width;
    
    for (int z = 0; z < ofGetWidth(); z += width) {
        for (int y = 0; y < ofGetHeight(); y += height) {
            for (int x = 0; x < ofGetWidth(); x += width) {
                shapes.push_back(PlusToSquare(x + width / 2.0, y + height / 2.0, z - 1000, width, height));
            }
        }
    }
}

void Sketch170426::update() {
    for_each(shapes.begin(), shapes.end(), [](PlusToSquare& shape){
        shape.update();
    });
}

void Sketch170426::draw() {
    for_each(shapes.begin(), shapes.end(), [](PlusToSquare& shape){
        shape.draw();
    });
}

void Sketch170426::keyPressed(int key) {
    
}

void Sketch170426::mouseDragged(int x, int y, int button) {
    
}

void Sketch170426::mousePressed(int x, int y, int button) {
    
}
