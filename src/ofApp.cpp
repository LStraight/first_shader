#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	triangle.addVertex(glm::vec3(0.0, 0.0, 0.0));
	triangle.addVertex(glm::vec3(0.0, 768, 0.0));
	triangle.addVertex(glm::vec3(1024, 768, 0.0));

	triangle.addColor(ofFloatColor(1.0, 0.0, 0.0, 1.0));
	triangle.addColor(ofFloatColor(0.0, 1.0, 0.0, 1.0));
	triangle.addColor(ofFloatColor(0.0, 0.0, 1.0, 1.0));

	shader.load("shader.vert", "shader.frag");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	shader.begin();
	triangle.draw();
	shader.end();
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
