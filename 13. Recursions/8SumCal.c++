#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;
int Sum(int arr[], int size)
{
    // base case
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    int remainingPart = Sum(arr + 1, size - 1);
    return (arr[0] + remainingPart);
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int sum = Sum(arr, size);
    cout << "Sum is " << sum << endl;
    return 0;
}