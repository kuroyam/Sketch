//
//  Sketch170419.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/19.
//
//

#ifndef Sketch170419_hpp
#define Sketch170419_hpp

#include "ofMain.h"

class Sketch170419 {
    
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    
private:
    bool running;
    
    float minRadius;
    float maxRadius;
    
    vector<ofPoint> positionList;
    vector<float>   radiusList;
    
};

#endif /* Sketch170419_hpp */
