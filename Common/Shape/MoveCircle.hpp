//
//  MoveCircle.hpp
//  Sketch001
//
//  Created by Shun Kuroda on 2017/04/02.
//
//

#ifndef MoveCircle_hpp
#define MoveCircle_hpp

#include "Circle.hpp"

class MoveCircle: public Circle {
    
public:
    
    MoveCircle();
    MoveCircle(float _x, float _y, float _radius, const ofColor & _color);
    
    void update();
    
private:
    
    float speed;
    
};

#endif /* MoveCircle_hpp */
