//
//  Sketch170423.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/23.
//
//

#include "Sketch170423.hpp"

void Sketch170423::setup() {
    ofSetWindowShape(800, 800);
    ofBackground(255);
    
    float width  = 20;
    float height = width;
    
    for (int y = 0; y < ofGetHeight(); y += height) {
        for (int x = 0; x < ofGetWidth(); x += width) {
            shapes.push_back(PlusToSquare(ofPoint(x + width / 2.0, y + height / 2.0), width, height));
        }
    }
}

void Sketch170423::update() {
    
}

void Sketch170423::draw() {
    for_each(shapes.begin(), shapes.end(), [](PlusToSquare& shape){
        shape.draw();
    });
}

void Sketch170423::keyPressed(int key) {
    
}

void Sketch170423::mouseDragged(int x, int y, int button) {
    
}

void Sketch170423::mousePressed(int x, int y, int button) {
    
}
