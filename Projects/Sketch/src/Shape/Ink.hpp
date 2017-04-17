//
//  Ink.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/17.
//
//

#ifndef Ink_hpp
#define Ink_hpp

#include "ofMain.h"

class Ink {
    
public:
    Ink(ofPoint _position);
    void setup();
    void update();
    void draw();
    
private:
    ofPoint position;
    ofColor color;
    float radius;
    vector<ofPoint> vertexes;
    
};

#endif /* Ink_hpp */
