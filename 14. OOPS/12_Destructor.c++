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
    char *name; // better practise than statically allocating here
    char level;

    // Making our own constructor
    Hero() {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    // Parameterized constructor
    //*********************************************************************
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
    //********************************************************************

    //! COPY CONSTRUCTOR (OUR OWN)
    //********************************************************************
    Hero(Hero& temp){

        //? DEEP COPY 
        //? Making a new array
        char *ch = new char[strlen(temp.name) + 1];  // +1 is for null character
        strcpy(ch, temp.name);
        this -> name = ch;

        cout << "Mera copy constructor called: " << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }
    //********************************************************************

    void print() {
        cout << endl;
        cout << "Name: " << this -> name << endl;
        cout << "Health: " << this -> health << endl;
        cout << "Level: " << level << endl;
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

    void setName(char name[]) {
        strcpy(this -> name, name);
    }

    //! Destructor
    ~Hero() {
        cout << "Destructor called " << endl;
    }
};

int main()
{
    // Static allocation
    // Destructor automatically called
    Hero a;

    // Dynamic allocation
    // You've to write delete to call destructor here
    Hero *b = new Hero();
    delete b;

    return 0;
}