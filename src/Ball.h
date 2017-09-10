#pragma once

#include "ofMain.h"

class Ball
{
public:
	Ball(
		ofColor mycolor,
		int myradius);

//constructor
	//bij maken object Ball1 roep je constructor Ball aan
	//c++ geeft dan aan dat je parameters mycolor en myradius
	//aan moet geven
	//hierdoor heeft elk object eigen color en radius
	
	
	void update();
//void zegt dat deze functie retourneert geen resultaat
//Opdracht om uit te voeren 
	void draw();

private:
	float xpos;
	float ypos;
	float xspeed;
	float yspeed;

	ofColor color;
	int radius;


};

