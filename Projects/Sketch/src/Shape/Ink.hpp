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
#include "Blob.hpp"

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
    vector<Blob*> blobs;
    
};

#endif /* Ink_hpp */
