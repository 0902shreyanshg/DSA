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
    void HumanBark() {
        cout << "Pagli " << endl;
    }
};

class billu: public Animal, public Human {

};

int main()
{
    billu d;
    d.speak();
    d.HumanBark();

    return 0;
}