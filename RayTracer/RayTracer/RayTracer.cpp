// RayTracer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CImg.h"
#include "Display.h"
#include "Scene.h"


int main()
{
	//Start text
	std::cout << "Welcome to Eriks and Daniels Monto Carlo raytracer renderer" << std::endl << std::endl;

	//Intial and start scene
	Scene scene;

	scene.print();



	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/******************************************
	*********Test program to show Erik*********
	******************************************/
	//Intiate a display object with size X=500 and y = 800
	/*Display picture(500,800);
	
	//Change a little square in the top to white
	picture(0, 0, 0) = 255;
	picture(0, 0, 1) = 255;
	picture(0, 0, 2) = 255;

	picture(0, 1, 0) = 255;
	picture(0, 1, 1) = 255;
	picture(0, 1, 2) = 255;

	picture(1, 0, 0) = 255;
	picture(1, 0, 1) = 255;
	picture(1, 0, 2) = 255;

	picture(1, 1, 0) = 255;
	picture(1, 1, 1) = 255;
	picture(1, 1, 2) = 255;

	//Show current image
	picture.display_image();*/

	//Stops from ending console 
	int i = 0;
	std::cin >> i;

	//End program
    return 0;
}

