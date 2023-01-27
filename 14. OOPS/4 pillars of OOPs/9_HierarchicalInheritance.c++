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

class Dog: public Animal {

};

class Cat: public Animal {

};

int main()
{
    Cat d;
    d.speak();

    Dog c;
    c.speak();

    return 0;
}