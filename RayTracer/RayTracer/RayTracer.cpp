// RayTracer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "CImg.h"
#include "Display.h"
#include "Scene.h"
#include <string>
#include "Camera.h"



int main()
{
	//variables
	std::string answer;
	Camera camera;

	//Start text
	std::cout << "Welcome to Eriks and Daniels Monto Carlo raytracer renderer" << std::endl << std::endl;

	//Intial and start scene
	std::cout << "---------Intial room and object----------" << std::endl;
	Scene scene;
	std::cout << "Room is initialized..." << std::endl;
	std::cout << std::endl << std::endl;

	camera = Camera();
	camera.render(scene);
	camera.createImage();
	//Printing all triangles for debugging
	std::cout << "Do you want to print all triangels with normals and vertexes? y/n?" <<std::endl;
	std::getline(std::cin, answer);
	if (answer == "y" || answer == "Y") {
		scene.print();
	}
	



	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
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

