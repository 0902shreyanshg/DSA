//IMPORTANT 

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;

void swap(int a, int b){
    // A COPY OF a & b is created for this particular function & if the value changes, it changes for 
    // this function only, NOT for the main() function
    int temp;
    temp = a;
    a = b;
    b = temp;

    return; // SINCE NOTHING HAS BEEN RETURNED, THERE WILL BE NO CHANGE IN THE main() FUNCTION
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << "Before Swap: " << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl << endl;

    swap(a, b);

    // ***************************************************************************************************
    // WE SEE THAT NO CHANGE IN VALUE HAS TAKEN PLACE AS WE HAVEN'T RETURNED ANYTHING OR PRINTED ANYTHING
    // *************************************************************************************************** 

    cout << "After Swap: " << endl;
    cout << "Value of a: " << a << endl;
    cout << "Value of b: " << b << endl;

    return 0;
}