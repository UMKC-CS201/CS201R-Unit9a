#pragma once

#include <iostream>
using namespace std;

class Complex {
protected:
    float real;
    float imaginary;

public:
    Complex();
    Complex(float r, float i);
    void setReal(float r) { real = r; }
    void setImag(float i) { imaginary = i; }
    float getReal() { return real; }
    float getImag() { return imaginary; }

    Complex operator+(Complex rhs);
    Complex operator-(Complex rhs);
    Complex operator*(Complex rhs);
    Complex operator=(Complex rhs);
    Complex operator+=(Complex rhs);
    bool operator==(Complex rhs);

    // friend operators for input & output streams
    friend istream& operator>>(istream& in, Complex& n);
    friend ostream& operator<<(ostream& out, Complex c);
};

void ComplexExample();
