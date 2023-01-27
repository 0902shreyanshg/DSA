#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

//TODO: Function overloading with different types of arguments
// Function with two integer parameters
int add(int num1, int num2) { 
    return num1 + num2; 
    }

// Function with two double parameters
double add(double num1, double num2) { 
    return num1 + num2; 
    }

int main()
{
    cout << add(10, 20) << endl;
    cout << add(10.4, 20.2);
    return 0;
}