//
//  thingy.cpp
//  ofHomework3
//
//  Created by Jane Mitchell on 11/17/15.
//
//


#include <stdio.h>
#include "Thingy.hpp"

int x = 800;
int y = 750;
string text = "True Love";

//--------------------------------------------------------------
    void Thingy::setup(){
    
    
    font.loadFont("Lobster 1.4.otf", 80, true,true,true);
    xplodingString = new ofxExplodingString( &font, ofColor(255) );
}

//--------------------------------------------------------------
void Thingy::update(){
    
    xplodingString->update(0.01666);
}

//--------------------------------------------------------------
void Thingy::draw(){
    
    ofSetColor(255);
    font.drawString(text, x, y);
    xplodingString->draw();
}

void Thingy::mousePressed(){
    
    xplodingString->explode(text, x, y);
    
}