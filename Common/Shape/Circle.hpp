//
//  Circle.hpp
//  Sketch001
//
//  Created by Shun Kuroda on 2017/04/02.
//
//

#ifndef Circle_hpp
#define Circle_hpp

#include "ofMain.h"
#include "IDrawable.hpp"

class Circle: public IDrawable {
    
public:
    
    Circle();
    Circle(float _x, float _y, float _radius, const ofColor & _color);
    
    float x;
    float y;
    float radius;
    ofColor color;
    
    // IDrawable
    void setup();
    void update();
    void draw();
    
};

#endif /* Circle_hpp */
