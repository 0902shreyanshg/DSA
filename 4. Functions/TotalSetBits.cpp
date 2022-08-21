// IMP QUESTION : FIND THE NUMBER OF 1's IN THE NUMBERS PROVIDED

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
int A(int a)
{
    int count = 0;

    while (a != 0)
    { // means if a & 1 is true then; and a & 1 is 'true at 1'
        if (a & 1)
        {
            count++;
        }
        a = a >> 1;
    }
    return count;
}

int B(int b)
{
    int count = 0;

    while (b != 0)
    { // means if b & 1 is true then; and b & 1 is 'true at 1'
        if (b & 1)
        {
            count++;
        }
        b = b >> 1;
    }
    return count;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << A(a) + B(b);

    return 0;
}