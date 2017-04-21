//
//  Sketch170421.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/04/21.
//
//

#ifndef Sketch170421_hpp
#define Sketch170421_hpp

#include "ofMain.h"

class Sketch170421 {
    
public:
    void setup();
    void update();
    void draw();
    void keyPressed(int key);
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    
private:
    vector<ofRectangle> squares;
    
};

#endif /* Sketch170421_hpp */
