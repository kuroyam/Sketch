//
//  TestScene.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/03.
//
//

#ifndef TestScene_hpp
#define TestScene_hpp

#include "Polygon.hpp"

#define PolygonCount 750

class TestScene {
    
public:
    
    void setup();
    void update();
    void draw();
    
private:
    
    vector<Sketch::Polygon*> polygons;
    ofImage image;
    
};

#endif /* TestScene_hpp */
