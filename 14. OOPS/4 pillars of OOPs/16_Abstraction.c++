#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// Encapsulation:-- Information hiding.
// Abstraction:-- Implementation hiding.

class abstraction
{
private:
    int a, b;

public:
    // method to set values of private members
    void set(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
int main()
{
    abstraction obj;
    obj.set(10, 20);
    obj.display();
    return 0;
}
