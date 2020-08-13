#pragma once

#include <iostream>
using namespace std;

class Rectangle
{
private:
	//atributes
	double width;
	double length;

public:
	//constructors and destructors
	Rectangle();
	Rectangle(double);
	Rectangle(double, double);
	~Rectangle();

	//setters and geters
	void setWidth(double);
	void setLength(double);
	double getWidth() const;
	double getLength() const;
	double getArea() const;
};

