#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Human {

    public:
    int height;
    int weight;
    int age;

    public:
    int getAge() {
        return this -> age;
    }
    void setWeight(int w) {
        this -> weight = w;
    }
};

class Male: private Human {
    public:
    string color;

    void sleep() {
        cout << "Male sleeping" << endl;
    }

    // To access protected 
    int getHeight() {
        return this -> height;
    }
};

int main()
{
    Male ob1;
    // works for both protected & private mode
    cout << ob1.getHeight() << endl;

    return 0;
}