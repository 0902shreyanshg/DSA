#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// An object-like macro could have a multi-line.
// So to create a multi-line macro you have to use backslash-newline.
#define ELE 1, \
            2, \
            3
int main()
{
    int arr[] = {ELE};

    // Print elements
    cout << "Elements of Array are: " << endl;

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}