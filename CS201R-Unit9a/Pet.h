#pragma once
#include <string>
#include <iostream>
using namespace std;

//Base class
class Pet {
protected:
    string name;
    string type;

public:
    Pet() {
        name = " ";
        type = " ";
    }
    Pet(string n, string t) {
        name = n;
        type = t;
    }
    string getName() { return name; }
    string getType() { return type; }
    void   setName(string n) { name = n; }
    void   setType(string t) { type = t; }

    virtual void print() const {
        cout << "My pet " << name << " is a " << type << endl;
    }
};

//Derived class
class Dog : public Pet {
private:
    string breed;
public:
    Dog(string n, string t, string b) {
        name = n;
        type = t;
        breed = b;
    }
    void   setBreed(string b) { breed = b; }
    string getBreed() { return breed; }

    void print() const {
        cout << "My dog " << name
            << " is a " << breed << endl;
    }

};
