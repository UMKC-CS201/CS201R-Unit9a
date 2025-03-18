#include "Examples.h"

void SlicingExample() {
    vector<Pet> myPets;

    Pet pet1("Babs", "cat");
    Pet pet2("Chatty", "parrot");
    Pet pet3("Soft Kitty", "cat");
    myPets.push_back(pet1);
    myPets.push_back(pet2);
    myPets.push_back(pet3);

    Dog dog1("Tiny", "dog", "Great Dane");
    Dog dog2("Zeus", "dog", "Toy Poodle");
    Dog dog3("Fluffy", "dog", "Golden Retriever");
    myPets.push_back(dog1);
    myPets.push_back(dog2);
    myPets.push_back(dog3);
    for (auto i : myPets)
        i.print();
}

void PolymorphismExample() {

    vector <Character> party;
    Warrior temp1("Will");
    Mage temp2("Margie");
    Rogue temp3("Raul");
    party.push_back(temp1);
    party.push_back(temp2);
    party.push_back(temp3);

    // All characters attack (should demonstrate polymorphism in action!)
    cout << "\n\nBattle starts! Characters attack:\n";
    for (const auto& character : party) {
        character.attack();     // should make method calls dynamically
    }
}

void ComplexExample() {
    cout << "\n\nCOMPLEX NUMBER EXAMPLE\n";
    Complex newC1(1,2);
    Complex newC2(3,4);
    Complex newC3;

    cout << "\nEnter the real & imaginary values: ";
    cin >> newC1;

    cout << "\nChecking equality: ";
    if (newC1 == newC2)
        cout << "They are equal!\n";
    else
        cout << "Not equal\n";


    cout << "\nChecking assignment: ";
    newC3 = newC1;
    cout << newC3;

    cout << "\nChecking addition: ";
    newC3 = newC1 + newC2;
    cout << newC3;
    
    cout << "\nEnter the real & imaginary values: ";
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

    Rectangle newR = rect1 + rect2;
    cout << newR;
}
