#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// Call by value
void update1(int n){
    n++;
}

// Pass by reference
void update2(int& n){
    n++;
}

// BAD PRACTICE 
// RETURN BY REFERENCE
// num and ans are local variables
// Jesse hi yeh block khatam hoga toh yeh memory clear ho jaayegi toh
// ho sakta hai fer aap un memories ko access hi na kar paao
int& func(int a){
    int num = a;
    int& ans = num;
    return ans;
}

// SAME IN CASE OF POINTERS (As above)
int* fun(int n){
    int *ptr = &n;
    return ptr;
}

int main()
{
    int n = 9;
    int m = 9;

    // Call by value
    cout << "Before: " << n << endl;
    update1(n);
    cout << "After: " << n << endl << endl;

    // Using Reference variable
    // Pass by reference  
    cout << "Before: " << m << endl;
    update2(m);
    cout << "After: " << m << endl << endl;

    // Will show Warning: reference to stack memory associated with local variable 'num' returned
    func(n);

    // Will show warning: reference to stack memory associated with local variable 'num' returned
    fun(n);

    return 0;
}