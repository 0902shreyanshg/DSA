#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
 
int main()
{
    int a = 3;
    int b = 5;

    // DON'T DO THIS NONSENSE
    // cout << "Swapping the elements: " << swap(a, b) << endl;

    swap(a, b);
    cout << "Elements swapped: " <<  endl;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    return 0;
}