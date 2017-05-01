//
//  RotatePlus.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/05/01.
//
//

#ifndef RotatePlus_hpp
#define RotatePlus_hpp

#include "ofMain.h"

class RotatePlus {
    
public:
    RotatePlus(ofPoint _p, float _r, ofColor _c);
    
    void setup();
    void update();
    void draw();
    
private:
    ofPoint position;
    float   radius;
    ofColor color;
    
    float degree;
    
};

#endif /* RotatePlus_hpp */
