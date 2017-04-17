//
//  Sketch170417.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/17.
//
//

#ifndef Sketch170417_hpp
#define Sketch170417_hpp

#include "ofMain.h"
#include "Ink.hpp"

class Sketch170417 {
    
public:
    void setup();
    void update();
    void draw();
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    
private:
    vector<Ink> inks;
    
};

#endif /* Sketch170417_hpp */
