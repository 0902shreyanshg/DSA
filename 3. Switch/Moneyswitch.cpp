#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
 
using namespace std;
 
int main()
{
    int amount;
    cin >> amount;
    int Rs100, Rs50, Rs20, Rs1;

    switch (1)        // don't put amount in the expression, push here 1 as we will start from 100 
                      // and then will move to next statements, so we need to remove break as well
    {
    case 1:
        Rs100 = amount / 100;
        amount = amount % 100;
        cout << "The number of notes of Rs100 required are: " << Rs100 << endl;
                      // We won't use the break statements as we need to whether it is valid for other notes as well or not
    case 2:
        Rs50 = amount / 50;
        amount = amount % 50;
        cout << "The number of notes of Rs50 required are: " << Rs50 << endl;  

    case 3:
        Rs20 = amount / 20;
        amount = amount % 20;
        cout << "The number of notes of Rs20 required are: " << Rs20 << endl;  

    case 4:
        Rs1 = amount / 1;
        amount = amount % 1;
        cout << "The number notes of Rs1 required are: " << Rs1 << endl;      
    }
    return 0;
}