//
//  Sketch170422.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/22.
//
//

#include "Sketch170422.hpp"

void Sketch170422::setup() {
    ofSetWindowShape(800, 800);
    ofBackground(255);
    
}

void Sketch170422::update() {

}

void Sketch170422::draw() {
    float width = 20.0;
    float height = width;
    
    for (int y = 0; y < ofGetHeight(); y += height) {
        for (int x = 0; x < ofGetWidth(); x += width) {
            float start = ofRandom(0, 360);
            float end   = ofRandom(0, 360);
            
            float radius = width / 2.0;
            ofPoint center(x + radius, y + radius);
            
            ofPath path;
            path.arc(center, radius, radius, start, end);
            path.setStrokeWidth(1);
            path.setCircleResolution(30);
            path.setFilled(false);
            
            ofColor aqua(0, 255, 255, 150);
            ofColor purple(198, 0, 205, 150);
            ofColor inbetween = aqua.getLerped(purple, ofRandom(1.0));
            path.setStrokeColor(inbetween);
            
            path.draw();
        }
    }
}

void Sketch170422::keyPressed(int key) {

}

void Sketch170422::mouseDragged(int x, int y, int button) {

}

void Sketch170422::mousePressed(int x, int y, int button) {

}
