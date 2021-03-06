#pragma once
#include "Vertex.h"
#include "ColorDbl.h"
#include "Direction.h"
#include <time.h>  
#include <random>



class Ray;
const int LAMBERTIAN = 0;
const int SPECULAR = 1;
const int LIGHtSOURCE = 2;



class Triangle
{
public:
	Triangle();
	Triangle(Vertex _p1, Vertex _p2, Vertex _p3, ColorDbl _Color);
	bool rayIntersection(Ray &r, Vertex &p);
	Direction normalCalc();
	double GetArea();
	Vertex GetRandomPoint();
	Triangle(Vertex _p1, Vertex _p2, Vertex _p3, ColorDbl _Color, int type);
	ColorDbl LambertianReflection(double angle);
	double BRDF();

	friend std::ostream& operator<<(std::ostream& os, const Triangle& t);
	//variable
	Vertex p1;
	Vertex p2;
	Vertex p3;
	ColorDbl Color;
	Direction normal;
	int surface = LAMBERTIAN;
	double rcoef = 0.8;

private:
	Vertex GetBarycentric(double u, double v);

};



