#include "Examples.h"

void ComplexExample() {
    cout << "\n\nCOMPLEX NUMBER EXAMPLE\n";
    Complex newC1(5, 8);
    Complex newC2(5, 8);
    Complex newC3;

    cout << "Enter the real & imaginary values: ";
    cin >> newC1;

    newC3 = newC1 + newC2;
    cout << newC3;

    if (newC1 == newC2)
        cout << "They are equal!\n";
    else
        cout << "Not equal\n";
    cout << newC3;

    newC3 = newC1;
    cout << newC3;


    cout << "Enter the real & imaginary values: ";
    cin >> newC2;

    cout << "\nThe sum of the first 2 values is: ";
    Complex newSum = newC1 + newC2;

    cout << newSum;

    if (newSum == newC2)
        cout << "newSum and newC2 match!\n";
    else
        cout << "newSum and newC2 do not match!\n";

    cout << "\nThe product of the last 2 values is: ";
    newSum = newC1 * newC2;
    cout << newSum;


}

void RectangleExample() {
    cout << "\n\nRECTANGLE EXAMPLE\n";
    Rectangle rect1(5, 2);
    Rectangle rect2(3, 4);
    Rectangle rect3(5, 2);

    if (rect1 == rect2)
        cout << "Rect 1 and 2 are equal" << endl;
    else
        cout << "Rect 1 and 2 are not equal" << endl;

    cout << rect1.area() << endl;

    if (rect1 == rect3)
        cout << "Rect 1 and 3 are equal" << endl;
    else
        cout << " Rect 1 and 3 are not equal" << endl;

    Rectangle rect4 = rect2;
    cout << rect4;
}
