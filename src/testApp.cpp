#include "testApp.h"


//--------------------------------------------------------------
void testApp::setup(){
	ofSetWindowTitle("template project");
	myWorm =new worm(ofxVec3f(100,100,0),ofxVec3f(0,0,0));
	ofSetFrameRate(60); // if vertical sync is off, we can go a bit fast... this caps the framerate at 60fps.
	ofBackground(0, 0, 0);
	myWorm->vel=ofxVec3f(1,0,0);
	cnt=0;
}

//--------------------------------------------------------------
void testApp::update(){
	cnt++;
	myWorm->acc=ofxVec3f(1,sin(4*PI*cnt/360),0);
	myWorm->update();
}

//--------------------------------------------------------------
void testApp::draw(){
	myWorm->draw();
}


//--------------------------------------------------------------
void testApp::keyPressed  (int key){
	if (key == 'f'){
		ofToggleFullscreen();
	}
}

//--------------------------------------------------------------
void testApp::keyReleased  (int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
}


//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}
