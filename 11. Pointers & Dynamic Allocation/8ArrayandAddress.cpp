#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>
 
using namespace std;
 
int main()
{
    // Address of array (first block of memory)
    int arr[10] = {2, 88, 4};  // REMOVING = SIGN?? IT WORKS?? TF...

    // Address using name
    cout << "Address of first memory block is: " << arr << endl;
    // using & operator
    cout << "Address of first memory block is: " << &arr[0] << endl << endl;

    // Prints garbage value (if the array had not been initialised)
    // cout << arr[0] << endl << endl;

    // This means ki pehli location pe jo value padi hai arr mein woh print ho jaayegi
    cout << "Using dereference operator on arr: " << *arr << endl;
    cout << "*arr + 1: " << *arr + 1 << endl;  // SAME as ABOVE: (*arr) + 1
    cout << "*(arr) + 1: " << *(arr) + 1 << endl;
    // This one below is different from above 
    cout << "*(arr + 1): " << *(arr + 1) << endl << endl;

    cout << arr[2] << endl;
    cout << *(arr + 2) << endl;
    // BELOW:
    // Index bahar likha aur array ka naam andar
    cout << "tf: " << 2[arr] << endl;

    return 0;
}