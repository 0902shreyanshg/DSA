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

class Male: public Human {
    public:
    string color;

    void sleep() {
        cout << "Male sleeping" << endl;
    }
};

int main()
{
    Male ob1;
    //ob1 will have the data members AND functions of both the classes
    // use 'ob1.' to see this
    cout << ob1.age << endl;
    cout << ob1.weight << endl;
    cout << ob1.height << endl;

    cout << ob1.color << endl;

    // setting weight
    ob1.setWeight(84);
    cout << ob1.weight << endl;
    
    // You cannot write cout << ob1.sleep() as it is not returning anything
    ob1.sleep();

    return 0;
}