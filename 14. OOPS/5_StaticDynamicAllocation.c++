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
    // Static allocation
    Hero ramesh;

    ramesh.setHealth(80);
    ramesh.setLevel('B');

    cout << "Health is :" << ramesh.getHealth() << endl;
    cout << "Level is :" << ramesh.level << endl;


    // Dynamic allocation
    Hero* suresh = new Hero;

    suresh->setHealth(50);
    suresh->setLevel('A');

    //? Both the methods below give the same result
    //dereferencing & using . operator
    cout << "Health is :" << (*suresh).getHealth() << endl;
    cout << "Level is :" << (*suresh).level << endl;

    // using ->
    cout << "Health is :" << suresh->getHealth() << endl;
    cout << "Level is :" << suresh->level << endl;

    return 0;
}