#include "Ball.h"



Ball::Ball(ofColor mycolor, int myradius)
{
	color = mycolor;
	radius = myradius;

	xpos = ofRandom(0, ofGetWidth());
	ypos = ofRandom(0, ofGetHeight());

	xspeed = ofRandom(-2, 2);
	yspeed = ofRandom(-2, 2);
	
	
} 


void Ball::update()
{
	if (xpos < 0 + radius || xpos > ofGetWidth() - radius)
	{
		xspeed = -xspeed;
	}

	if (ypos < 0 + radius || ypos > ofGetHeight() - radius)
	{
		yspeed = -yspeed;
	}


//|| or


	xpos = xpos + xspeed;
	ypos = ypos + yspeed;


//HUE color
	float hue = color.getHue();
	hue = hue + 1;

	if (hue > 255)
	{
		hue = 0;
	}

	color.setHue(hue);

}


void Ball::draw()
{
	ofFill();
	ofSetColor(color); 
	ofDrawCircle(xpos, ypos, radius);


}