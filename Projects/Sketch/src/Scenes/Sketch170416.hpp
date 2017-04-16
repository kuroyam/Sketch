//
//  Sketch170416.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/16.
//
//

#ifndef Sketch170416_hpp
#define Sketch170416_hpp

#include "ofMain.h"
#include "Blob.hpp"

class Sketch170416 {
    
public:
    void setup();
    void update();
    void draw();
    void mousePressed(int x, int y, int button);
    
private:
    vector<Blob> blobs;
    
};

#endif /* Sketch170416_hpp */
