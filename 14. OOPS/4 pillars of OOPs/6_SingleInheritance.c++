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

int main()
{
    Dog d;
    d.speak();

    return 0;
}