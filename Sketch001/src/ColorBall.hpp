//
//  ColorBall.hpp
//  Sketch001
//
//  Created by Shun Kuroda on 2017/04/01.
//
//

#ifndef ColorBall_hpp
#define ColorBall_hpp

#include "ofMain.h"

class ColorBall {
    
public:
    
    ColorBall();
    
    float x;
    float y;
    int size;
    ofColor color;
    
    void setup(float _x, float _y, int _size);
    void update();
    void draw();
    
};

#endif /* ColorBall_hpp */
