#include "ofApp.h"



//--------------------------------------------------------------
void ofApp::setup(){
    ofEnableSmoothing();

    ofSetFrameRate(120);

}

//--------------------------------------------------------------
void ofApp::update(){
    theBall.x += (mouseX - xPos)*0.1;
    theBall.y += (mouseY - yPos)*0.1;

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackgroundGradient(ofColor::gray, ofColor(30,10,30), OF_GRADIENT_CIRCULAR);
    theBall.draw();
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
    xPos = ofRandom(ofGetWindowWidth());
    yPos = ofRandom(ofGetWindowHeight());

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
