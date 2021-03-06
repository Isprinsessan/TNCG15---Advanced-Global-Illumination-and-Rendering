#pragma once
#include <iostream>

class ColorDbl
{
public:
	ColorDbl();
	ColorDbl(double _r, double _g, double _b);
	ColorDbl(const ColorDbl &c);
	ColorDbl(double a);

	ColorDbl operator*(double t)const;
	ColorDbl operator*(const ColorDbl c)const;
	ColorDbl operator/(double t)const;
	void operator+=(const ColorDbl c);
	ColorDbl operator+(const ColorDbl c);

	//ColorDbl operator*(ColorDbl c, double t);
	friend std::ostream& operator<<(std::ostream& os, const ColorDbl& c);
		
	double r;
	double g;
	double b;
};

