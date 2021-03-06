#include "ofApp.h"

void ofApp::setup(){
    
    leap.open();
    
    leapGestures.setup();
    leapGestures.setClassifyMode();
    
}

void ofApp::update(){
    
    if(leap.isFrameNew()) {
        leapGestures.recieveNewLeapData(leap.getLeapHands());
    }
    leap.markFrameAsOld();
    
}

void ofApp::draw(){

    
    
}

void ofApp::keyReleased(int key){
    
}
