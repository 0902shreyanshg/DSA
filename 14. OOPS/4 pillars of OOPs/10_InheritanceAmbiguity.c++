#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Animal {
    public:
    int age;
    int weight;

    public:
    void speak() {
        cout << "Speaking " << endl;
    }
};

class Human {
    public:
    string color;

    public:
    void speak() {
        cout << "Pagli " << endl;
    }
};

class billu: public Animal, public Human {

};

int main()
{
    billu d;
    //! SCOPE RESOLUTION OPERATOR
    d.Human :: speak();
    d.Animal :: speak();

    return 0;
}