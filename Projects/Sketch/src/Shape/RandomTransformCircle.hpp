//
//  RandomTransformCircle.hpp
//  Sketch
//
//  Created by Shun Kuroda on 2017/05/03.
//
//

#ifndef RandomTransformCircle_hpp
#define RandomTransformCircle_hpp

#include "ofMain.h"

class RandomTransformCircle {
    
public:
    void setup();
    void update();
    void draw();
    
private:
    vector<ofPoint> firstTargetPoints;
    vector<ofPoint> secondTargetPoints;
    vector<ofPoint> thirdTargetPoints;
    
    int counter;
    
    float bounceOut(float time, float total);
    
};

#endif /* RandomTransformCircle_hpp */
