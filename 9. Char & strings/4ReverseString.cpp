#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

//! SAME AS "8ReverseArray" in Arrays folder
// TODO: "Reverse a integer" in Notion, bit manipulation

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) // donot write i != 0, you need to write it as written (makes sense)
    { 
        count++;
    }
    return count;
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        swap(name[s++], name[e--]);
    }
}

int main()
{
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

    int len = getLength(name);
    reverse(name, len);

    cout << "Reverse name: " << name << endl;

    return 0;
}