#pragma once

#include "ofMain.h"

class Particle {
public:
 Particle(); //Class constructor
 void setup(); //Start particle
 void update( float dt ); //Recalculate physics
 void draw(); //Draw particle
 ofPoint pos; //Position
 ofPoint vel; //Velocity
 float time; //Time of living
 float lifeTime; //Allowed lifetime
 bool live; //Is particle live
};

class Params {
public:
 void setup();
 ofPoint eCenter; //Emitter center
 float eRad; //Emitter radius
 float velRad; //Initial velocity limit
 float lifeTime; //Lifetime in seconds
 float rotate; //Direction rotation speed in angles per second
};
extern Params param; //Declaration of a global variable

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
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

		Particle p; //Particle
		ofFbo fbo; //Offscreen buffer for trails
		float history; //Control parameter for trails
		float time0; //Time value for computing dt

};

