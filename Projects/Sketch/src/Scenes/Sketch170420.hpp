//
//  Sketch170420.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/20.
//
//

#ifndef Sketch170420_hpp
#define Sketch170420_hpp

#include "ofMain.h"

class Sketch170420 {
    
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
    vector<int>     closestIndexList;
    
};

#endif /* Sketch170420_hpp */
