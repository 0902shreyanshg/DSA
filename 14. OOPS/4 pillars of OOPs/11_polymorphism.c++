#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

//? When there are multiple functions in a class with the same name but different parameters, these functions are overloaded.
//? The main advantage of function overloading is it increases the readability of the program.
//? Functions can be overloaded by using different numbers of arguments and by using different types of arguments.

//TODO: Function overloading with different number of arguments
// Function with two parameters
int add(int num1, int num2) { 
    return num1 + num2; 
    }

// Function with three parameters
int add(int num1, int num2, int num3) { 
    return num1 + num2 + num3; 
    }

int main()
{
    cout << add(10, 20) << endl;
    cout << add(10, 20, 30);
    return 0;
}