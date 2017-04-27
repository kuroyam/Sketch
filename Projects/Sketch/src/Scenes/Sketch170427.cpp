//
//  Sketch170427.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/27.
//
//

#include "Sketch170427.hpp"

void Sketch170427::setup() {
    ofSetWindowShape(520, 520);
    ofBackground(255);
    
    float width  = 20;
    float height = width;
    
    for (int y = 0; y < ofGetHeight(); y += height) {
        for (int x = 0; x < ofGetWidth(); x += width) {
            shapes.push_back(PlusToSquare(ofPoint(x + width / 2.0, y + height / 2.0), width, height));
        }
    }
}

void Sketch170427::update() {
    for_each(shapes.begin(), shapes.end(), [](PlusToSquare& shape){
        shape.update();
    });
}

void Sketch170427::draw() {
    for_each(shapes.begin(), shapes.end(), [](PlusToSquare& shape){
        shape.draw();
    });
}

void Sketch170427::keyPressed(int key) {
    
}

void Sketch170427::mouseDragged(int x, int y, int button) {
    
}

void Sketch170427::mousePressed(int x, int y, int button) {
    
}
