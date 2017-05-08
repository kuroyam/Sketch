//
//  RandomTransformCircle.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/05/03.
//
//

#include "RandomTransformCircle.hpp"

void RandomTransformCircle::setup() {
    float centerX = ofGetWidth() / 2.0;
    float centerY = ofGetHeight() / 2.0;
    float radius = 150;
    
    for (int deg = 0; deg <= 360; deg += 5) {
        float rad = ofDegToRad(deg);
        float x1 = centerX + ((radius - 100) * cos(rad));
        float y1 = centerY + ((radius - 100) * sin(rad));
        float x2 = centerX + (radius * cos(rad)) + ofRandom(-10, 10);
        float y2 = centerY + (radius * sin(rad)) + ofRandom(-10, 10);
        
        firstTargetPoints.push_back(ofPoint(centerX, centerY));
        secondTargetPoints.push_back(ofPoint(x1, y1));
        thirdTargetPoints.push_back(ofPoint(x2, y2));
    }
    
    counter = 0;
}

void RandomTransformCircle::update() {
    counter++;
    
    if (counter > 200) {
        counter = 0;
    }
}

void RandomTransformCircle::draw() {
    
    ofPushMatrix();
    
    ofPath path;
    
    for (int i = 0; i < firstTargetPoints.size(); i++) {
        
        if (counter < 50) {
            ofPoint p1 = firstTargetPoints[i];
            ofPoint p2 = secondTargetPoints[i];
            
            float c = ofMap(counter, 0, 49, 0.0, 1.0);
            c = bounceOut(c, 1.0);
            
            float x = ofMap(c, 0, 1.0, p1.x, p2.x);
            float y = ofMap(c, 0, 1.0, p1.y, p2.y);
            
            path.curveTo(x, y);
        } else if (counter < 100) {
            path.curveTo(secondTargetPoints[i]);
        } else if (counter < 150) {
            ofPoint p1 = secondTargetPoints[i];
            ofPoint p2 = thirdTargetPoints[i];
            
            float c = ofMap(counter, 100, 149, 0.0, 1.0);
            c = bounceOut(c, 1.0);
            
            float x = ofMap(c, 0, 1.0, p1.x, p2.x);
            float y = ofMap(c, 0, 1.0, p1.y, p2.y);
            
            path.curveTo(x, y);
        } else {
            path.curveTo(thirdTargetPoints[i]);
        }
        
    }
    
    path.close();
    
    path.setStrokeColor(ofColor(0));
    path.setStrokeWidth(1);
    path.draw();
    
    ofPopMatrix();
    
}

float RandomTransformCircle::bounceOut(float time, float total) {
    time /= total;
    
    if (time < 1.0 / 2.75) {
        return 7.5625 * time * time;
    } else if (time < 2 / 2.75) {
        time -= 1.5 / 2.75;
        return 7.5625 * time * time + 0.75;
    } else if (time < 2.5 / 2.75) {
        time -= 2.25 / 2.75;
        return 7.5625 * time * time + 0.9375;
    } else {
        time -= 2.625 / 2.75;
        return 7.5625 * time * time + 0.984375;
    }
    
}
