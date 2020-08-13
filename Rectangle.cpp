#include "Rectangle.h"

Rectangle::Rectangle()
{
	width = 10.0;
	length = 10.0;
}

Rectangle::Rectangle(double l)
{
	width = 10;
	length = l;
}
Rectangle::Rectangle(double w, double l)
{
	width = w;
	length = l;
}

Rectangle::~Rectangle()
{

}

void Rectangle::setWidth(double w)
{
	width = w;
}

void Rectangle::setLength(double l)
{
	length = l;
}

double Rectangle::getWidth() const
{
	return width;
}

double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getArea() const
{
	return width * length;
}