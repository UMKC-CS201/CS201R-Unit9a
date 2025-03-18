#include "Complex.h"

Complex::Complex() {
    real = 0;
    imaginary = 0;
}
Complex::Complex(float r, float i) {
    real = r;
    imaginary = i;
}

Complex Complex::operator+ (Complex rhs) {
    cout << "\nCODE THIS\n//this function adds the real and imaginary parts of a complex number\n";
    Complex tempC;

    return tempC;
}

Complex Complex::operator- (Complex rhs) {
    //cout << "\nCODE THIS\n//this function adds the real and imaginary parts of a complex number\n";
    Complex tempC;

    return tempC;
}

Complex Complex::operator= (Complex rhs) {
    cout << "\nCODE THIS\n//this function assigns the real and imaginary values to the complex object\n";

    return *this;
}

Complex Complex::operator+= (Complex rhs) {
    cout << "\nCODE THIS\n//this function assigns the real and imaginary values to the complex object\n";

    return *this;
}

/*
Complex Complex::operator= (Complex rhs) {
    //cout << "\nCODE THIS\n//this function assigns the real and imaginary values to the complex object\n";
    Complex newC;
    newC.real = rhs.real;
    newC.imaginary = rhs.imaginary;
    return newC;
}
*/
bool Complex::operator== (Complex rhs) {
    cout << "\nCODE THIS\n//this function checks to see if 2 complex objects are equal(returns true)\n";

    return false;
}

Complex Complex::operator* (Complex rhs) {
    //cout << "\nCODE THIS\n//this function multiplies two complex numbers together\n";
    Complex tempC(0, 0);
    tempC.real = this->real * rhs.real
        + this->imaginary * rhs.imaginary * (-1);
    tempC.imaginary = this->real * rhs.imaginary
        + this->imaginary * rhs.real;

    return tempC;
}

istream& operator>>(istream& in, Complex& n) {
    //this function accepts the real & imaginary parts of a complex object from input 
    in >> n.real >> n.imaginary;
    return in;
}

ostream& operator<<(ostream& out, Complex n) {
    cout << "\nCODE THIS\n//this function writes out the complex object\n\n";

    return out;
}

