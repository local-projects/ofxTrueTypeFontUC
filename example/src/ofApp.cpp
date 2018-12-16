#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
  myFont.load("dummyFont.ttf", 64, true, true);
  
  sampleString = "あいうえお";
  
  p1 = ofPoint(100, 200);
  p2 = ofPoint(200, 300);
  p3 = ofPoint(300, 400);
  
  rect1 = myFont.getStringBoundingBox(sampleString, p1.x, p1.y);
  rect2 = myFont.getStringBoundingBox(sampleString, p2.x, p2.y);
  rect3 = myFont.getStringBoundingBox(sampleString, p3.x, p3.y);
  
  characters = myFont.getStringAsPoints(sampleString);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
  string fpsStr = "frame rate: " + ofToString(ofGetFrameRate(), 2);
  ofDrawBitmapString(fpsStr, 100, 100);
  
  ofDrawLine(rect1.getTopLeft(), rect1.getTopRight());
  ofDrawLine(rect1.getTopRight(), rect1.getBottomRight());
  ofDrawLine(rect1.getBottomRight(), rect1.getBottomLeft());
  ofDrawLine(rect1.getBottomLeft(), rect1.getTopLeft());
  myFont.drawString(sampleString, p1.x, p1.y);
  
  ofDrawLine(rect2.getTopLeft(), rect2.getTopRight());
  ofDrawLine(rect2.getTopRight(), rect2.getBottomRight());
  ofDrawLine(rect2.getBottomRight(), rect2.getBottomLeft());
  ofDrawLine(rect2.getBottomLeft(), rect2.getTopLeft());
  myFont.drawStringAsShapes(sampleString, p2.x, p2.y);
  
  ofDrawLine(rect3.getTopLeft(), rect3.getTopRight());
  ofDrawLine(rect3.getTopRight(), rect3.getBottomRight());
  ofDrawLine(rect3.getBottomRight(), rect3.getBottomLeft());
  ofDrawLine(rect3.getBottomLeft(), rect3.getTopLeft());
  vector<ofPath>::iterator iter = characters.begin();
  for (; iter != characters.end(); ++iter)
    (*iter).draw(p3.x, p3.y);
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
