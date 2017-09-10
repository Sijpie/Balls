#include "ofApp.h"

ofApp::ofApp() :
	ball1(ofColor::blueSteel, 20),
	ball2(ofColor::darkBlue, 30),
	ball3(ofColor::blue, 40)

{

}

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
	ball1.update();
	ball2.update();
	ball3.update();

}

//--------------------------------------------------------------
void ofApp::draw(){
	ball1.draw();
	ball2.draw();
	ball3.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}


