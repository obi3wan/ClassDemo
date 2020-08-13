// Programming Assignment:		In class demo
// Developer:			        Svetla Tzvetkov
// Date Written:				08/11/2020
// Purpose:						Classes
// ---------------------------------------------------------------


#include <iostream>
#include "Rectangle.h"

using namespace std;

//Function main
int main()
{
	Rectangle box;   //define an instance of te Rectangle class
	Rectangle defl_box;  //crating an object with the default constructor
	Rectangle prm_box(77, 888);  //creating an ogject using the parameterized constructor
	Rectangle one_prm_box(55);    //creating an object using the one parameter constructor
	double rectWidth;  //local variable for width
	double rectLength;    //local variable for length

	//Get teh rectangle's width and length from user
	cout << "\nThis program will calculate the area of a rectangle\n";
	cout << "\nWhat is the width? ";
	cin >> rectWidth;
	cout << "WHat is teh lenght? ";
	cin >> rectLength;

	//Store the sidth and length of the rectangle in the box object
	box.setWidth(rectWidth);
	box.setLength(rectLength);

	//Display the rectangle's data
	cout << "\nHere is the user's rectangle data:\n";
	cout << "Width: " << box.getWidth() << endl;
	cout << "Length: " << box.getLength() << endl;
	cout << "Area: " << box.getArea() << endl;

	cout << "\n\nHere is the default rectangle's data:\n";
	cout << "Width: " << defl_box.getWidth() << endl;
	cout << "Length: " << defl_box.getLength() << endl;
	cout << "Area: " << defl_box.getArea() << endl;

	cout << "\n\nHere is the new rectangle's data:\n";
	cout << "Width: " << prm_box.getWidth() << endl;
	cout << "Width: " << prm_box.getLength() << endl;
	cout << "Area: " << prm_box.getArea() << endl;
	
	cout << "\n\nHere is the one parameter rectangle's data:\n";
	cout << "Width: " << one_prm_box.getWidth() << endl;
	cout << "Length: " << one_prm_box.getLength() << endl;
	cout << "Area: " << one_prm_box.getArea() << endl;

	system("pause");

	return 0;
}

