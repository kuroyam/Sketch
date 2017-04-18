//
//  Sketch170418.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/18.
//
//

#ifndef Sketch170418_hpp
#define Sketch170418_hpp

#include "ofMain.h"
#include "Ink.hpp"

class Sketch170418 {
    
public:
    void setup();
    void update();
    void draw();
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    
private:
    vector<Ink> inks;
    
};

#endif /* Sketch170418_hpp */
