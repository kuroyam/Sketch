//
//  Polygon.hpp
//  Sketch002
//
//  Created by Shun Kuroda on 2017/04/03.
//
//

#ifndef Polygon_hpp
#define Polygon_hpp

#include "ofMain.h"
#include "IDrawable.hpp"

class skPolygon: IDrawable {
    
public:
    
    skPolygon();
    skPolygon(ofPoint _position, float _radius, int _vertexCount, ofColor _color);
    
    ofPoint position;
    float radius;
    int vertexCount;
    ofColor color;
    
    // IDrawable
    void setup();
    void update();
    void draw();
    
};

#endif /* Polygon_hpp */
