//
//  thingy.hpp
//  ofHomework3
//
//  Created by Jane Mitchell on 11/17/15.
//
//

#ifndef Thingy_hpp
#define Thingy_hpp

#include <stdio.h>



#include "ofMain.h"
#include "ofxExplodingString.h"


class Thingy : public ofBaseApp{
    
public:
    void setup();
    void update();
    void draw();
    void mousePressed();
    
    
    ofTrueTypeFont font;
    ofxExplodingString * xplodingString;
    
    
    
};


#endif /* Thingy_hpp */
