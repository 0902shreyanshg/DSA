#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int main()
{
    // BETTER SOLUTION
    int a[10];

    fill_n(a, 10, 5); // fill_n(first, n, val); Assigns val to the first n elements of the sequence pointed by first.

    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }

    // USING A FOR LOOP TO GIVE THE SAME VALUES TO ALL THE INDICES IN AN ARRAY
    // TAKES TIME

    // int a[10];
    // for(int i = 0; i < 10; i++){
    //     a[i] = 5;
    // }
    // for(int i = 0; i < 10; i++){
    //     cout << a[i] << endl;
    // }

    // i.e. IT WON'T WORK THE SAME FOR OTHER NUMBERS AS IT DID FOR 0; TRY UNCOMMENTING

    // int arr[10] = {1};
    // for(int i = 0; i < 10; i++){
    //     cout << arr[i] << endl;
    // }

    return 0;
}