//
//  TestScene.cpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/03.
//
//

#include "TestScene.hpp"

void TestScene::setup() {
    ofBackground(255, 255, 255);
    
    for (int i = 0; i < PolygonCount; i++) {
        ofPoint point;
        point.x = ofRandom(0, ofGetWidth());
        point.y = ofRandom(0, ofGetHeight());
        
        int radius = 30;
        
        int vertexCount = ofRandom(3, 10);
        
        ofColor color;
        color.setHsb(ofRandom(0, 255), 255 * 0.4, 255 * 1.0);
        
        auto polygon = new Sketch::Polygon(point, radius, vertexCount, color);
        polygon->setup();
        polygons.push_back(polygon);
    }
}

void TestScene::update() {
    for_each(polygons.begin(), polygons.end(), [](Sketch::Polygon *polygon) {
        polygon->update();
    });
}

void TestScene::draw() {
    for_each(polygons.begin(), polygons.end(), [](Sketch::Polygon *polygon) {
        polygon->draw();
    });
}
