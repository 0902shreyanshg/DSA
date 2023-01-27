#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class Parent
{
public:
    void show()
    {
        cout << "Inside parent class" << endl;
    }
};

class subclass1 : public Parent
{
public:
    void show()
    {
        cout << "Inside subclass1" << endl;
    }
};

class subclass2 : public Parent
{
public:
    void show()
    {
        cout << "Inside subclass2";
    }
};

int main()
{
    subclass1 o1;
    subclass2 o2;
    o1.show(); // If you remove show() from subclass 1, then the ouput will be of Parent class
    o2.show();
}