//
//  Sketch170425.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/26.
//
//

#ifndef Sketch170425_hpp
#define Sketch170425_hpp

#include "ofMain.h"
#include "PlusToSquare.hpp"

class Sketch170425 {
    
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

#endif /* Sketch170425_hpp */
