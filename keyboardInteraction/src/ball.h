#ifndef ball_h
#define ball_h

#include "ofMain.h"

class Ball{
public:
    Ball();

    void moveTo();
    void draw();

    int x;
    int y;
    ofColor color;
};

#endif

