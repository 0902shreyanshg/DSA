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
    //* The purpose of a constructor is to construct an object and 
    //* assign values to the object's members
    
    //? Here constructor will be called two times, one for static & 
    //? other for dynamic

    //! Here the default constructor will get removed automatically as
    //! we have created our own constructor

    // Static allocation
    cout << "Mota billa " << endl;
    Hero ramesh;
    cout << "Hello" << endl;

    // Dynamic allocation
    Hero* suresh = new Hero;
    // Hero* suresh = new Hero()

    return 0;
}