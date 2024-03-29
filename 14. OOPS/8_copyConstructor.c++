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
        cout << "Simple constructor called" << endl;
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
        cout << "Mera copy constructor called: " << endl;
        this -> health = temp.health;
        this -> level = temp.level;
    }
    //********************************************************************

    void print() {
        cout << "Health " << this -> health << endl;
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
    Hero suresh(70, 'C');
    suresh.print();

    // copy constructor
    Hero ramesh(suresh);
    ramesh.print();

    //? Since, we have made our own copy constructor above,
    //? so the in-built copy constructor does not exist any more

    return 0;
}