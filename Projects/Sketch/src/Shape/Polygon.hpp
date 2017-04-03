//
//  Polygon.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/03.
//
//

#ifndef Polygon_hpp
#define Polygon_hpp

#include "ofMain.h"

namespace Sketch {
    
    class Polygon {
        
    public:
        
        Polygon();
        Polygon(ofPoint _position, float _radius, int _vertexCount, ofColor _color);
        
        ofPoint position;
        float radius;
        int vertexCount;
        ofColor color;
        
        void setup();
        void update();
        void draw();
        
    };
    
}

#endif /* Polygon_hpp */
