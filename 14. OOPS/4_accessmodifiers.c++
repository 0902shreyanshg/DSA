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
    Hero Shreyansh;
    cout << "Size of Shreyansh: " << sizeof(Shreyansh) << endl; 

    // Shreyansh.health = 100;
    //TODO Using setter
    Shreyansh.setHealth(100);

    Shreyansh.level = 'A';

    //TODO Using getter
    cout << "Health is :" << Shreyansh.getHealth() << endl;
    cout << "Level is :" << Shreyansh.level << endl;
    return 0;
}