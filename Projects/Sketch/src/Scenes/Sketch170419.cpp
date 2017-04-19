//
//  Sketch170419.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/19.
//
//

#include "Sketch170419.hpp"

void Sketch170419::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
    ofSetLineWidth(1);
    ofSetColor(0);
    ofNoFill();
    
    running = false;
    
    minRadius = 3;
    maxRadius = 50;
    
    positionList.push_back(ofPoint(ofGetWidth() / 2, ofGetHeight() / 2));
    radiusList.push_back(50);
}

void Sketch170419::update() {
    if (!running) {
        return;
    }
    
    float x = ofRandom(0 + maxRadius, ofGetWidth() - maxRadius);
    float y = ofRandom(0 + maxRadius, ofGetHeight() - maxRadius);
    float r = minRadius;
    
    bool intersection = false;
    
    for (int i = 0; i < positionList.size(); i++) {
        ofPoint& p = positionList[i];
        float dist = ofDist(x, y, p.x, p.y);
        if (dist < r + radiusList[i]) {
            intersection = true;
            break;
        }
    }
    
    if (intersection) {
        return;
    }
    
    float newRadius = ofGetWidth();
    for (int i = 0; i < positionList.size(); i++) {
        ofPoint& p = positionList[i];
        float dist = ofDist(x, y, p.x, p.y);
        if (newRadius > dist - radiusList[i]) {
            newRadius = dist - radiusList[i];
        }
    }
    
    positionList.push_back(ofPoint(x, y));
    radiusList.push_back(min(newRadius, maxRadius));
}

void Sketch170419::draw() {
    for (int i = 0; i < positionList.size(); i++) {
        ofPoint& p = positionList[i];
        float& r = radiusList[i];
        ofDrawCircle(p.x, p.y, r);
    }
}

void Sketch170419::keyPressed(int key) {
    if (key == 's') {
        running = !running;
    }
    if (key == 'c') {
        positionList.clear();
        radiusList.clear();
    }
}

void Sketch170419::mouseDragged(int x, int y, int button) {

}

void Sketch170419::mousePressed(int x, int y, int button) {

}
