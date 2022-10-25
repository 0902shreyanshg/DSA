#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// Function like macro
// These macros are the same as a function call. It replaces the entire code instead of a function name.
// Pair of parentheses immediately after the macro name is necessary.
// If we put a space between the macro name and the parentheses in the macro definition then the macro will
// not work.
// A function-like macro is only lengthened if an only if its name appears with a pair of parentheses
// after it. If we don’t do this, the function pointer will get the address of the real function and
// lead to a syntax error.
#define min(a, b) (((a) < (b)) ? (a) : (b))

int main()
{
    int a = 18;
    int b = 76;

    cout << "Minimum value between "
        << a << " and " << b
        << " is: " << min(a, b);
    return 0;
}