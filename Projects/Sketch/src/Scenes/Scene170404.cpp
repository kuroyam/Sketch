//
//  Scene170404.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/04.
//
//

#include "Scene170404.hpp"

void Scene170404::setup() {
    ofBackground(0);
    
    for (int i = 0; i < 50; i++) {
        ofPoint point;
        point.x = ofRandom(0, ofGetWidth());
        point.y = ofRandom(0, ofGetHeight());
        points.push_back(point);
    }
}

void Scene170404::update() {
    
}

void Scene170404::draw() {
    for_each(points.begin(), points.end(), [](ofPoint point){
        int lineCount = 30;
        int minRadius = 25;
        int maxRadius = 125;
        for (int i=0; i < lineCount; i++) {
            float angle = ofRandom(ofDegToRad(360.0));
            float distance = ofRandom(minRadius, maxRadius);
            float xOffset = cos(angle) * distance;
            float yOffset = sin(angle) * distance;
            float alpha = ofMap(distance, minRadius, maxRadius, 150, 0);
            ofSetColor(255, alpha);
            ofDrawLine(point.x, point.y, point.x + xOffset, point.y + yOffset);
        }
    });
}
