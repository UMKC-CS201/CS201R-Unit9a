#pragma once 
#include <iostream>
using namespace std;


class Rectangle {
private:
	double length;
	double width;

public:
	Rectangle();
	Rectangle(double length, double width);

	double area();  //calculate area
	bool operator== (const Rectangle rhs);
	Rectangle operator= (Rectangle rhs);
	Rectangle& operator+ (Rectangle rhs);
	friend ostream& operator << (ostream& out, Rectangle& rhs);
	friend istream& operator >> (istream& in, Rectangle& rhs);

};