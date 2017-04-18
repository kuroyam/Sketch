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
    Blob(ofPoint _position, ofColor _color, float _radius);
    void setup();
    void update();
    void draw();
    
    ofPoint position;
    ofColor color;
    float   radius;
    
private:
    
    vector<ofPoint> vertexes;
    
};

#endif /* Blob_hpp */
