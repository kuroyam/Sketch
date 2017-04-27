//
//  Sketch170427.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/27.
//
//

#ifndef Sketch170427_hpp
#define Sketch170427_hpp

#include "ofMain.h"
#include "PlusToSquare.hpp"

class Sketch170427 {
    
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

#endif /* Sketch170427_hpp */
