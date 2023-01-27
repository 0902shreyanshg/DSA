#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

//! See the table

class Human {

    protected:
    int height;
    public:
    int weight;
    private:
    int age;

    public:
    int getAge() {
        return this -> age;
    }
    void setWeight(int w) {
        this -> weight = w;
    }
};

class Male: /*public OR private OR */protected Human {
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
    cout << ob1.getHeight() << endl;

    return 0;
}