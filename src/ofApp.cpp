#include "ofApp.h"
int count_rotate;
int i;

//--------------------------------------------------------------
void ofApp::setup(){

//    for(int i = 0; i < 1000; i++){
//        ofColor(255,0,0,25);
//        particles.add(new Particle(new PVector(width/2, height/2), new PVector(0, 0), random(10, 30)));
//    }
    
    mVideo.load("louvrevid.mp4");
    mImagebg.load("museum.jpg");
    mImageh1.load("1-2.png");
    mImagep1.load("1-1.png");
    mImageh2.load("2-2.png");
    mImagep2.load("2-1.png");
    mImageh3.load("3-2.png");
    mImageh3_1.load("3-3.png");
    mImagep3.load("3-1.png");
    mImageh4.load("4-2.png");
    mImageh4_1.load("4-3.png");
    mImagep4.load("4-1.png");
    mImage_cigar.load("cigar1.png");
    mImage_hat.load("hat.png");
    mImage_title.load("thuglife.png");
    mImages1.load("1-3.png");
    mImages1_2.load("1-4.png");
    mImages2.load("2-3.png");
    mImages2_2.load("2-4.png");
    mImages2_3.load("2-5.png");
    mImages3.load("3-4.png");
    mImages3_2.load("3-5.png");
    mImages4.load("4-4.png");
    mImages4_2.load("4-5.png");
    mImages4_3.load("4-6.png");
    mImages4_4.load("4-7.png");
    
    mAudio.load("sunglasses.mp3");
    mAudio.play();
    
    
    count_rotate=0;
    i=0;
}

//class Particle {
//    ofVec2f loc, vel;
//    // Store the size and the origonal or max size of the particle
//    float s, ms;
//
//    Particle(ofVec2f l, ofVec2f v, float s) {
//        loc = l;
//        vel = v;
//
//        this.s = s;
//        ms = s;
//    }
//}

//--------------------------------------------------------------
void ofApp::update(){
    mVideo.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    count_rotate=count_rotate+1;//for nodding head
    ofBackground(255);
    mVideo.play();
    
    if(count_rotate < 120)
    {
        //background video
        mVideo.draw(0 ,0 ,ofGetWidth() ,ofGetHeight());
        
        if(count_rotate<30)
        {
            mImagep1.draw(600,ofGetHeight()-mImageh1.getHeight()*4/7-180,mImageh1.getWidth()*4/7,mImageh1.getHeight()*4/7 );
        }
        
        if(count_rotate>=  30 && count_rotate<60)
        {
            mImagep1.draw(600,ofGetHeight()-mImageh1.getHeight()*4/7-180,mImageh1.getWidth()*4/7,mImageh1.getHeight()*4/7 );
            mImagep2.draw(-50 ,ofGetHeight()-mImageh2.getHeight()*5/7 ,mImageh2.getWidth()*5/7,mImageh2.getHeight()*5/7);
        }
        if(60<=count_rotate && count_rotate<90)
        {
            mImagep1.draw(600,ofGetHeight()-mImageh1.getHeight()*4/7-180,mImageh1.getWidth()*4/7,mImageh1.getHeight()*4/7 );
            mImagep2.draw(-50 ,ofGetHeight()-mImageh2.getHeight()*5/7 ,mImageh2.getWidth()*5/7,mImageh2.getHeight()*5/7);
            mImagep3.draw(mImageh2.getWidth()*5/7 - 150 ,ofGetHeight()-mImageh3.getHeight()*4/7 ,mImageh3.getWidth()*4/7,mImageh3.getHeight()*4/7);
        }
        if(90<=count_rotate && count_rotate<120)
        {
            mImagep1.draw(600,ofGetHeight()-mImageh1.getHeight()*4/7-180,mImageh1.getWidth()*4/7,mImageh1.getHeight()*4/7 );
            mImagep2.draw(-50 ,ofGetHeight()-mImageh2.getHeight()*5/7 ,mImageh2.getWidth()*5/7,mImageh2.getHeight()*5/7);
            mImagep3.draw(mImageh2.getWidth()*5/7 - 150 ,ofGetHeight()-mImageh3.getHeight()*4/7 ,mImageh3.getWidth()*4/7,mImageh3.getHeight()*4/7);
            mImagep4.draw(mImageh2.getWidth()*5/7 - 250+mImageh3.getWidth()*4/7 ,ofGetHeight()-mImageh4.getHeight()*5/7 ,mImageh4.getWidth()*5/7,mImageh4.getHeight()*5/7);
        }
        
        
        
    }

        
    //after 120 times
    else{
        
    ofSetColor(255,0,0);// red color
    mVideo.draw(0 ,0 ,ofGetWidth() ,ofGetHeight());
    //mImage_cigar.draw(0,0,mImage_cigar.getWidth()/4,mImage_cigar.getHeight()/4);
    ofSetColor(255,255,255);
    mImagep1.draw(600,ofGetHeight()-mImageh1.getHeight()*4/7-180,mImageh1.getWidth()*4/7,mImageh1.getHeight()*4/7 );
    //mImageh1.draw(600,ofGetHeight()-mImageh1.getHeight()*4/7-250,mImagep1.getWidth()*4/7,mImagep1.getHeight()*4/7);
    mImagep2.draw(-50 ,ofGetHeight()-mImageh2.getHeight()*5/7 ,mImageh2.getWidth()*5/7,mImageh2.getHeight()*5/7);
    mImages2_3.draw(-50 ,ofGetHeight()-mImageh2.getHeight()*5/7 ,mImageh2.getWidth()*5/7,mImageh2.getHeight()*5/7);
    mImagep3.draw(mImageh2.getWidth()*5/7 - 150 ,ofGetHeight()-mImageh3.getHeight()*4/7 ,mImageh3.getWidth()*4/7,mImageh3.getHeight()*4/7);
    mImagep4.draw(mImageh2.getWidth()*5/7 - 250+mImageh3.getWidth()*4/7 ,ofGetHeight()-mImageh4.getHeight()*5/7 ,mImageh4.getWidth()*5/7,mImageh4.getHeight()*5/7);
    mImages4.draw(mImageh2.getWidth()*5/7 - 250+mImageh3.getWidth()*4/7 ,ofGetHeight()-mImageh4.getHeight()*5/7 ,mImageh4.getWidth()*5/7,mImageh4.getHeight()*5/7);
     mImages4_3.draw(mImageh2.getWidth()*5/7 - 250+mImageh3.getWidth()*4/7 ,ofGetHeight()-mImageh4.getHeight()*5/7 ,mImageh4.getWidth()*5/7,mImageh4.getHeight()*5/7);
    

    ofPushMatrix();
    
    if(count_rotate /37 %2 == 1)
    {
        
        
        ofRotateX(-5); //nodding
        
        mImage_title.draw(0,0,mImage_title.getWidth()*1.1,mImage_title.getHeight()*1.1);
        mImageh1.draw(600-mImagep1.getWidth()*4/7*0.15, ofGetHeight()-mImageh1.getHeight()*4/7-180-mImagep1.getHeight()*4/7*0.15, mImagep1.getWidth()*4/7*1.4, mImagep1.getHeight()*4/7*1.4);
        mImages1.draw(600-mImagep1.getWidth()*4/7*0.15, ofGetHeight()-mImageh1.getHeight()*4/7-180-mImagep1.getHeight()*4/7*0.15, mImagep1.getWidth()*4/7*1.4, mImagep1.getHeight()*4/7*1.4);
        mImages1_2.draw(600-mImagep1.getWidth()*4/7*0.15, ofGetHeight()-mImageh1.getHeight()*4/7-180-mImagep1.getHeight()*4/7*0.15, mImagep1.getWidth()*4/7*1.4, mImagep1.getHeight()*4/7*1.4);
        
        mImageh2.draw(-50-mImagep2.getWidth()*5/7*0.25 ,ofGetHeight()-mImageh2.getHeight()*5/7-mImageh2.getHeight()*5/7*0.08 ,mImageh2.getWidth()*5/7*1.5,mImageh2.getHeight()*5/7*1.5);
        mImages2.draw(-50-mImagep2.getWidth()*5/7*0.25 ,ofGetHeight()-mImageh2.getHeight()*5/7-mImageh2.getHeight()*5/7*0.08 ,mImageh2.getWidth()*5/7*1.5,mImageh2.getHeight()*5/7*1.5);
        mImages2_2.draw(-50-mImagep2.getWidth()*5/7*0.25 ,ofGetHeight()-mImageh2.getHeight()*5/7-mImageh2.getHeight()*5/7*0.08 ,mImageh2.getWidth()*5/7*1.5,mImageh2.getHeight()*5/7*1.5);
        
        mImageh3.draw(mImageh2.getWidth()*5/7 - 150-mImageh3.getWidth()*4/7*0.3 ,ofGetHeight()-mImageh3.getHeight()*4/7-mImageh3.getHeight()*4/7*0.1 ,mImageh3.getWidth()*4/7*1.5,mImageh3.getHeight()*4/7*1.5);
        mImageh3_1.draw(mImageh2.getWidth()*5/7 - 150-mImageh3.getWidth()*4/7*0.3 ,ofGetHeight()-mImageh3.getHeight()*4/7-mImageh3.getHeight()*4/7*0.28 ,mImageh3.getWidth()*4/7*1.5,mImageh3.getHeight()*4/7*1.5);
        mImages3_2.draw(mImageh2.getWidth()*5/7 - 150-mImageh3.getWidth()*4/7*0.3 ,ofGetHeight()-mImageh3.getHeight()*4/7-mImageh3.getHeight()*4/7*0.28 ,mImageh3.getWidth()*4/7*1.5,mImageh3.getHeight()*4/7*1.5);
        
        
        
        mImageh4.draw(mImageh2.getWidth()*5/7 - 250+mImageh3.getWidth()*4/7 - mImageh4.getWidth()*5/7*0.08 ,ofGetHeight()-mImageh4.getHeight()*5/7-mImageh4.getHeight()*5/7*0.05 ,mImageh4.getWidth()*5/7*1.3,mImageh4.getHeight()*5/7*1.3);
        mImages4_4.draw(mImageh2.getWidth()*5/7 - 250+mImageh3.getWidth()*4/7 - mImageh4.getWidth()*5/7*0.08 ,ofGetHeight()-mImageh4.getHeight()*5/7-mImageh4.getHeight()*5/7*0.05 ,mImageh4.getWidth()*5/7*1.3,mImageh4.getHeight()*5/7*1.3);
        mImageh4_1.draw(mImageh2.getWidth()*5/7 - 230+mImageh3.getWidth()*4/7 - mImageh4.getWidth()*5/7*0.3 ,ofGetHeight()-mImageh4.getHeight()*5/7-mImageh4.getHeight()*5/7*0.1 ,mImageh4.getWidth()*5/7*1.4,mImageh4.getHeight()*5/7*1.4);
        mImages4_2.draw(mImageh2.getWidth()*5/7 - 230+mImageh3.getWidth()*4/7 - mImageh4.getWidth()*5/7*0.3 ,ofGetHeight()-mImageh4.getHeight()*5/7-mImageh4.getHeight()*5/7*0.1 ,mImageh4.getWidth()*5/7*1.4,mImageh4.getHeight()*5/7*1.4);
        
        mImages3.draw(mImageh2.getWidth()*5/7 - 150-mImageh3.getWidth()*4/7*0.3 ,ofGetHeight()-mImageh3.getHeight()*4/7-mImageh3.getHeight()*4/7*0.1 ,mImageh3.getWidth()*4/7*1.5,mImageh3.getHeight()*4/7*1.5);
        
        
        
    }
    else
    {
        
        mImage_title.draw(0,0);
        mImageh1.draw(600-mImagep1.getWidth()*4/7*0.15, ofGetHeight()-mImageh1.getHeight()*4/7-180-mImagep1.getHeight()*4/7*0.15, mImagep1.getWidth()*4/7*1.4, mImagep1.getHeight()*4/7*1.4);
        mImages1.draw(600-mImagep1.getWidth()*4/7*0.15, ofGetHeight()-mImageh1.getHeight()*4/7-180-mImagep1.getHeight()*4/7*0.15, mImagep1.getWidth()*4/7*1.4, mImagep1.getHeight()*4/7*1.4);
        mImages1_2.draw(600-mImagep1.getWidth()*4/7*0.15, ofGetHeight()-mImageh1.getHeight()*4/7-180-mImagep1.getHeight()*4/7*0.15, mImagep1.getWidth()*4/7*1.4, mImagep1.getHeight()*4/7*1.4);
        
        mImageh2.draw(-50-mImagep2.getWidth()*5/7*0.25 ,ofGetHeight()-mImageh2.getHeight()*5/7-mImageh2.getHeight()*5/7*0.08 ,mImageh2.getWidth()*5/7*1.5,mImageh2.getHeight()*5/7*1.5);
        mImages2.draw(-50-mImagep2.getWidth()*5/7*0.25 ,ofGetHeight()-mImageh2.getHeight()*5/7-mImageh2.getHeight()*5/7*0.08 ,mImageh2.getWidth()*5/7*1.5,mImageh2.getHeight()*5/7*1.5);
        mImages2_2.draw(-50-mImagep2.getWidth()*5/7*0.25 ,ofGetHeight()-mImageh2.getHeight()*5/7-mImageh2.getHeight()*5/7*0.08 ,mImageh2.getWidth()*5/7*1.5,mImageh2.getHeight()*5/7*1.5);
        
        mImageh3.draw(mImageh2.getWidth()*5/7 - 150-mImageh3.getWidth()*4/7*0.3 ,ofGetHeight()-mImageh3.getHeight()*4/7-mImageh3.getHeight()*4/7*0.1 ,mImageh3.getWidth()*4/7*1.5,mImageh3.getHeight()*4/7*1.5);
        mImageh3_1.draw(mImageh2.getWidth()*5/7 - 150-mImageh3.getWidth()*4/7*0.3 ,ofGetHeight()-mImageh3.getHeight()*4/7-mImageh3.getHeight()*4/7*0.28 ,mImageh3.getWidth()*4/7*1.5,mImageh3.getHeight()*4/7*1.5);
        mImages3_2.draw(mImageh2.getWidth()*5/7 - 150-mImageh3.getWidth()*4/7*0.3 ,ofGetHeight()-mImageh3.getHeight()*4/7-mImageh3.getHeight()*4/7*0.28 ,mImageh3.getWidth()*4/7*1.5,mImageh3.getHeight()*4/7*1.5);
        
        
        mImageh4.draw(mImageh2.getWidth()*5/7 - 250+mImageh3.getWidth()*4/7 - mImageh4.getWidth()*5/7*0.08 ,ofGetHeight()-mImageh4.getHeight()*5/7-mImageh4.getHeight()*5/7*0.05 ,mImageh4.getWidth()*5/7*1.3,mImageh4.getHeight()*5/7*1.3);
        mImages4_4.draw(mImageh2.getWidth()*5/7 - 250+mImageh3.getWidth()*4/7 - mImageh4.getWidth()*5/7*0.08 ,ofGetHeight()-mImageh4.getHeight()*5/7-mImageh4.getHeight()*5/7*0.05 ,mImageh4.getWidth()*5/7*1.3,mImageh4.getHeight()*5/7*1.3);
        mImageh4_1.draw(mImageh2.getWidth()*5/7 - 230+mImageh3.getWidth()*4/7 - mImageh4.getWidth()*5/7*0.3 ,ofGetHeight()-mImageh4.getHeight()*5/7-mImageh4.getHeight()*5/7*0.1 ,mImageh4.getWidth()*5/7*1.4,mImageh4.getHeight()*5/7*1.4);
        mImages4_2.draw(mImageh2.getWidth()*5/7 - 230+mImageh3.getWidth()*4/7 - mImageh4.getWidth()*5/7*0.3 ,ofGetHeight()-mImageh4.getHeight()*5/7-mImageh4.getHeight()*5/7*0.1 ,mImageh4.getWidth()*5/7*1.4,mImageh4.getHeight()*5/7*1.4);
        
        mImages3.draw(mImageh2.getWidth()*5/7 - 150-mImageh3.getWidth()*4/7*0.3 ,ofGetHeight()-mImageh3.getHeight()*4/7-mImageh3.getHeight()*4/7*0.1 ,mImageh3.getWidth()*4/7*1.5,mImageh3.getHeight()*4/7*1.5);
    }
    
    ofPopMatrix();
    }
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
