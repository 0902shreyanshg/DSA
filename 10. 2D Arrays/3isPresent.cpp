#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;
// Why do we need to specify the column size when passing a 2D array as a
// parameter?

// When it comes to describing parameters, arrays always decay into pointers to
// their first element.

// When you pass an array declared as int Array[3] to the function
// void foo(int array[]), it decays into a pointer to the beginning of the
// array i.e. int *Array;. Btw, you can describe a parameter as int array[3]
// or int array[6] or even int *array - all these will be equivalent and you
// can pass any integer array without problems.

// In case of arrays of arrays (2D arrays), it decays to a pointer to its first
// element as well, which happens to be a single dimensional array i.e. we get
// int (*Array)[3].

// Specifying the size here is important. If it were not mandatory, there won't
// be any way for compiler to know how to deal with expression Array[2][1], for
// example.

// To dereference that a compiler needs to compute the offset of the item we
// need in a contiguous block of memory (int Array[2][3] is a contiguous block
// of integers), which should be easy for pointers. If a is a pointer, then a[N]
// is expanded as start_address_in_a + N * size_of_item_being_pointed_by_a.
// In case of expression Array[2][1] inside a function (we want to access this
// element) the Array is a pointer to a single dimensional array and the same
// formula applies. The number of bytes in the last square bracket is required
// to find size_of_item_being_pointed_by_a. If we had just Array[][] it would be
// impossible to find it out and hence impossible to dereference an array
// element we need.

// Without the size, pointers arithmetics wouldn't work for arrays of arrays.
// What address would Array + 2 produce: advance the address in Array 2 bytes
// ahead (wrong) or advance the pointer 3* sizeof(int) * 2 bytes ahead?

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cin >> target;

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element found" << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}