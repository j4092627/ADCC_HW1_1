#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
//    int particles [];
    
    ofVideoPlayer mVideo;
    
    ofImage mImagebg;
    ofImage mImagep1;
    ofImage mImageh1;
    ofImage mImagep2;
    ofImage mImageh2;
    ofImage mImagep3;
    ofImage mImageh3_1;
    ofImage mImageh3;
    ofImage mImagep4;
    ofImage mImageh4;
    ofImage mImageh4_1;
    ofImage mImage_cigar;
    ofImage mImage_hat;
    ofImage mImage_title;
    ofImage mImages1;
    ofImage mImages1_2;
    ofImage mImages2;
    ofImage mImages2_2;
    ofImage mImages2_3;
    ofImage mImages3;
    ofImage mImages3_2;
    ofImage mImages4;
    ofImage mImages4_2;
    ofImage mImages4_3;
    ofImage mImages4_4;
    
    ofSoundPlayer mAudio;
};
