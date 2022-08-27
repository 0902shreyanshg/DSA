#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <numeric> // This header describes a set of algorithms to perform certain operations on 
// sequences of numeric values. Due to their flexibility, 
// they can also be adapted for other kinds of sequences.

// FUNCTIONS: 
// accumulate: Accumulate values in range
// adjacent_difference: Compute adjacent difference of range
// inner_product: Compute cumulative inner product of range
// partial_sum: Compute partial sums of range
// iota: Store increasing sequence

int myfunc(int x, int y){
    return x * y;
}

using namespace std;

// accumulate(first, last, sum);
// accumulate(first, last, sum, myfun); 

// first, last: first and last elements of range whose elements are to be added
// sum:  initial value of the sum
// myfun: a function for performing any specific task. 

int main()
{
    int sum = 1;
    int a[] = {5 ,10, 15};

    cout << "\n Result using accumulate: ";
    cout << accumulate(a, a + 3, sum);

    cout << "\n Result using accumulate with user-defined function: ";
    cout << accumulate(a, a + 3, sum, myfunc);

    return 0;
}