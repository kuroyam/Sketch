//
//  Sketch170501.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/05/01.
//
//

#ifndef Sketch170501_hpp
#define Sketch170501_hpp

#include "ofMain.h"
#include "RotatePlus.hpp"

class Sketch170501 {
    
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    
private:
    vector<RotatePlus*> shapes;
    
};

#endif /* Sketch170501_hpp */
