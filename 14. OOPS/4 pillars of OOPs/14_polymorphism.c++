#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

class B {
    public:
    int a; 
    int b;

    public:
    int add() {
        return a + b;
    }

    void operator+ (B &obj) {
        // current object
        int value1 = this -> a;
        // input object
        int value2 = obj.a;

        cout << "Output: " << value2 - value1 << endl;
    }
};

int main()
{
    //! WRONG ANSWER
    B obj1, obj2;

    obj1.a = 4;
    obj2.b = 7;

    // operator will 
    obj1 + obj2;

    return 0;
}