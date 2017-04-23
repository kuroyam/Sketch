//
//  PlusToSquare.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/23.
//
//

#ifndef PlusToSquare_hpp
#define PlusToSquare_hpp

#include "ofMain.h"

class PlusToSquare {
    
public:
    PlusToSquare(ofPoint _p, float _w, float _h);
    
    void setup();
    void update();
    void draw();
    
private:
    ofPoint position;
    float   width;
    float   height;
    
    ofColor color;
    float   inset;
};

#endif /* PlusToSquare_hpp */
