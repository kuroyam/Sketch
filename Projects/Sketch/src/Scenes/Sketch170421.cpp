//
//  Sketch170421.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/21.
//
//

#include "Sketch170421.hpp"

void Sketch170421::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
    
    float width = 20.0;
    float height = width;
    
    for (int y = 0; y < ofGetHeight(); y += height) {
        for (int x = 0; x < ofGetWidth(); x += width) {
            squares.push_back(ofRectangle(x, y, width, height));
        }
    }
}

void Sketch170421::update() {

}

void Sketch170421::draw() {
    for_each(squares.begin(), squares.end(), [](ofRectangle& square){
        float dist = ofDist(square.getCenter().x, square.getCenter().y, ofGetMouseX(), ofGetMouseY());
        
        ofColor colorA = ofColor(255, 255, 255);
        ofColor colorB = ofColor(255, 200, 250);
        
        ofSetColor(colorA.lerp(colorB, ofRandom(1.0)));
        ofDrawRectangle(square);
    });
}

void Sketch170421::keyPressed(int key) {

}

void Sketch170421::mouseDragged(int x, int y, int button) {

}

void Sketch170421::mousePressed(int x, int y, int button) {

}
