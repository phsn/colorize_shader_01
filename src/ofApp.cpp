#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myImg.loadImage("input.jpg");
    specRef.loadImage("spectrum.png");
    
    colorizeSpectrum.load("colorizeSpectrum");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    colorizeSpectrum.begin();
    colorizeSpectrum.setUniform1f("spectrumPosition",ofGetMouseX()/float(ofGetWidth()));
    colorizeSpectrum.setUniform2f("screenSize", ofGetWidth(), ofGetHeight());
    colorizeSpectrum.setUniformTexture("spectrum", specRef.getTextureReference(),3);
    
    myImg.draw(50,50);
    colorizeSpectrum.end();
    
    specRef.draw(700,50);
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
