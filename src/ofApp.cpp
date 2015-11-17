#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
//    test.setup();
    
    walrus2.loadImage("image/walrus.jpg");
    
    thingy.setup();
    
    walrus.setup();
    
//    thingy.setup();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofBackground(255);
    
//    test.update();
    
    thingy.update();
    
    walrus.update();
    
//    thingy.update();
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    walrus2.draw(0, 0);
    
    thingy.draw();
    
    walrus.draw();
    
//    thingy.draw();
    
    ofSetColor(255);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
    thingy.mousePressed();
       
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
