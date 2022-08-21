#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;

void swap(int a, int b){
    // A COPY OF a & b IS CREATED WHICH IS CHANGED ONLY IN THIS FUNCTION AND NOT IN THE MAIN FUNCTION
    int temp;
    temp = a;
    a = b;
    b = temp;

    return;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Before Swap: " << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl << endl;

    swap(a, b);

    // WE SEE THAT NO CHANGE IN VALUE HAS TAKEN PLACE AS WE HAVEN'T RETURNED ANYTHING OR PRINTED ANYTHING 
    cout << "After Swap: " << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}