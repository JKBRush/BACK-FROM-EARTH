#include "ofApp.h"

void ofApp::setup(){
    
    ofBackground(0);
    ofSetloglevel("ofxCsv", OF_LOG_VERBOSE);
    ofSetCircleResolution(3);
    
    if(csv.load("airports-extended.dat")){
        
        for(int i = 0; i < csv.getNumRows(); i++){
            for(int j = 0; j < csv.getNumCols(i); j++){
            
            }
        
        }
    
    }
    

}


void ofApp::update(){

}

void ofApp::draw(){
    
    ofVec2f airportLoc;
    
    ofPushmatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeigh()/2);
}



}





