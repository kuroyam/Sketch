//
//  Sketch170423.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/23.
//
//

#ifndef Sketch170423_hpp
#define Sketch170423_hpp

#include "ofMain.h"
#include "PlusToSquare.hpp"

class Sketch170423 {
    
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    
private:
    vector<PlusToSquare> shapes;
    
};

#endif /* Sketch170423_hpp */
