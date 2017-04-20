//
//  Sketch170420.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/20.
//
//

#include "Sketch170420.hpp"

void Sketch170420::setup() {
    ofSetWindowShape(500, 500);
    ofBackground(255);
    ofSetLineWidth(1);
    ofNoFill();
    
    running = false;
    
    minRadius = 3;
    maxRadius = 50;
    
    positionList.push_back(ofPoint(ofGetWidth() / 2, ofGetHeight() / 2));
    radiusList.push_back(50);
    closestIndexList.push_back(0);
}

void Sketch170420::update() {
    if (!running) {
        return;
    }
    
    float x = ofRandom(0, ofGetWidth());
    float y = ofRandom(0, ofGetHeight());
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
    
    int closestIndex;
    
    float newRadius = ofGetWidth();
    for (int i = 0; i < positionList.size(); i++) {
        ofPoint& p = positionList[i];
        float dist = ofDist(x, y, p.x, p.y);
        if (newRadius > dist - radiusList[i]) {
            newRadius = dist - radiusList[i];
            closestIndex = i;
        }
    }
    
    positionList.push_back(ofPoint(x, y));
    radiusList.push_back(min(newRadius, maxRadius));
    closestIndexList.push_back(closestIndex);
}

void Sketch170420::draw() {
    for (int i = 0; i < positionList.size(); i++) {
        ofPoint& p = positionList[i];
        float&   r = radiusList[i];
        ofSetColor(0);
        ofDrawCircle(p.x, p.y, r);
        
        int&     ci = closestIndexList[i];
        ofPoint& cp = positionList[ci];
        ofSetColor(0, 0, 255);
        ofDrawLine(p.x, p.y, cp.x, cp.y);
    }
}

void Sketch170420::keyPressed(int key) {
    if (key == 's') {
        running = !running;
    }
    if (key == 'c') {
        positionList.clear();
        radiusList.clear();
    }
}

void Sketch170420::mouseDragged(int x, int y, int button) {
    
}

void Sketch170420::mousePressed(int x, int y, int button) {
    
}
