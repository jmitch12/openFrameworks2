//
//  Walrus.cpp
//  ofHomework3
//
//  Created by Jane Mitchell on 11/17/15.
//
//

#include <stdio.h>
#include "Walrus.h"


//--------------------------------------------------------------
void Walrus::setup(){
    ofSetVerticalSync(true);
    
//    ofBackground(0,0,0);
    
    ofSetCircleResolution(100);
    
    kiss.loadImage("image/kiss.png");
}

//--------------------------------------------------------------
void Walrus::update(){
    
}

//--------------------------------------------------------------
void Walrus::draw(){
    float xorig = 50;
    float yorig = 50;
    float radius = 25;
    float angle = ofGetElapsedTimef()*5;
    
    float x = xorig + radius * cos(angle);
    float y = yorig + radius * -sin(angle);
    
    kiss.draw(x,y);
}

//--------------------------------------------------------------
void Walrus::keyPressed(int key){
    
}

//--------------------------------------------------------------
void Walrus::keyReleased(int key){
    
}

//--------------------------------------------------------------
void Walrus::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void Walrus::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Walrus::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Walrus::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void Walrus::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void Walrus::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void Walrus::dragEvent(ofDragInfo dragInfo){
}