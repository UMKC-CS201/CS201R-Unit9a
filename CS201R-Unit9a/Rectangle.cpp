#include "Rectangle.h"

Rectangle::Rectangle() {
	length = 0;
	width = 0;
}

Rectangle::Rectangle(double length, double width) {
	this->length = length;
	this->width = width;
}

bool Rectangle::operator== (const Rectangle rhs) {
	cout << "\nCODE THIS\ncomplete code to check for equality of 2 rectangles\n";
	return false;

}

Rectangle  Rectangle::operator= (Rectangle rhs) {
	cout << "\nCODE THIS\nComplete code to assignment operator\n";
	Rectangle newR;

	return newR;
}

Rectangle& Rectangle::operator+(Rectangle rhs) {
	Rectangle result = Rectangle(this->width + rhs.width,this->length + rhs.length);
	return result;
}

double Rectangle::area() {
	return length * width;
}

istream& operator >> (istream& in, Rectangle& r) {
	cout << "\nCODE THIS\nComplete code to input length & width\n";
 
	return in;
}

ostream& operator<<(ostream& out, Rectangle& r) {
	out << "\nCODE THIS\nComplete code to output rectangle\n";

	return out;
}

