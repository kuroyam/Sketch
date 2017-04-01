//
//  IDrawable.hpp
//  Sketch001
//
//  Created by Shun Kuroda on 2017/04/02.
//
//

#ifndef IDrawable_hpp
#define IDrawable_hpp

class IDrawable {
    
public:
    
    virtual void setup() = 0;
    virtual void update() = 0;
    virtual void draw() = 0;
    
};

#endif /* IDrawable_hpp */
