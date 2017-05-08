//
//  Sketch170503.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/05/03.
//
//

#ifndef Sketch170503_hpp
#define Sketch170503_hpp

#include "ofMain.h"
#include "RandomTransformCircle.hpp"

class Sketch170503 {
    
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    
private:
    RandomTransformCircle shape;
    
    bool isRunning;
    
};

#endif /* Sketch170503_hpp */
