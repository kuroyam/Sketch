//
//  Blob.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/16.
//
//

#ifndef Blob_hpp
#define Blob_hpp

#include "ofMain.h"

class Blob {
    
public:
    Blob(ofPoint _position);
    void setup();
    void update();
    void draw();
    
private:
    ofPoint position;
    ofColor color;
    float radius;
    vector<ofPoint> vertexes;
    
};

#endif /* Blob_hpp */
