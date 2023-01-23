#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Hero {

    // Properties
    private:
    int health;

    public:
    char level;

    // Making our own constructor
    Hero() {
        cout << "Constructor called" << endl;
    }

    // Parameterized constructor
    Hero(int health) {
        cout << "this -> " << this << endl;
        // Ramesh (object) ki health = input wali health (in this function)
        this -> health = health;
    }
    
    Hero(int health, char level) {
        cout << "this -> " << this << endl;
        this -> health = health;
        this -> level = level;
    }

    void print() {
        cout << level << endl;
    }

    int getHealth() {
        return health;
    }

    char getLevel() {
        return level;
    }

    void setHealth(int h) {
        health = h;
    }

    void setLevel(char ch) {
        level = ch;
    }
};

int main()
{
    //! "this" value and "Address" of ramesh is the same. Execute to see 

    Hero ramesh(10); // parameterized constructor
    cout << "Address of ramesh " << &ramesh << endl << endl;

    Hero temp(22, 'A');
    cout << "Address of temp " << &temp << endl;
    return 0;
}