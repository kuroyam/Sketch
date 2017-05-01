//
//  Sketch170501.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/05/01.
//
//

#include "Sketch170501.hpp"

void Sketch170501::setup() {
    ofSetWindowShape(520, 520);
    ofBackground(255);
    
    ofColor aqua(0, 255, 255, 150);
    ofColor purple(198, 0, 205, 150);
    
    float step = 20;
    
    for (int y = 0; y < ofGetHeight(); y += step) {
        for (int x = 0; x < ofGetWidth(); x += step) {
            float posX = x + step / 2.0;
            float posY = y + step / 2.0;
            ofColor color = aqua.getLerped(purple, ofRandom(1.0));
            shapes.push_back(new RotatePlus(ofPoint(posX, posY), step, color));
        }
    }
}

void Sketch170501::update() {
    for_each(shapes.begin(), shapes.end(), [](RotatePlus* shape){
        shape->update();
    });
}

void Sketch170501::draw() {
    for_each(shapes.begin(), shapes.end(), [](RotatePlus* shape){
        shape->draw();
    });
}

void Sketch170501::keyPressed(int key) {
    
}

void Sketch170501::mouseDragged(int x, int y, int button) {
    
}

void Sketch170501::mousePressed(int x, int y, int button) {
    
}
