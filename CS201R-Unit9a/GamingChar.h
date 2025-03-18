#pragma once
#include <iostream>

using namespace std;

// Abstract base class
class Character {
public:
    string name;
    virtual void attack() const {
        cout << "Parent class does nothing" << endl;
    }
    virtual ~Character() {}           // Virtual destructor

    Character() {   name = " ";   }
    Character(string n) { name = n;  }
};

// Derived class: Warrior
class Warrior : public Character {
public:
    Warrior(string n) : Character(n) {}
    void attack() const override {
        cout << "Warrior swings a mighty sword!" << endl;
    }
};

// Derived class: Mage
class Mage : public Character {
public:
    Mage(string n) : Character(n) {}
    void attack() const override {
        cout << "Mage casts a powerful fireball!" << endl;
    }
};

// Derived class: Rogue
class Rogue : public Character {
public:
    Rogue(string n) : Character(n) {}
    void attack() const override {
        cout << "Rogue strikes from the shadows with a dagger!" << endl;
    }
};