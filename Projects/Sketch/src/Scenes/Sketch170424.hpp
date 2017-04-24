//
//  Sketch170424.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/24.
//
//

#ifndef Sketch170424_hpp
#define Sketch170424_hpp

#include "ofMain.h"
#include "PlusToSquare.hpp"

class Sketch170424 {
    
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

#endif /* Sketch170424_hpp */
