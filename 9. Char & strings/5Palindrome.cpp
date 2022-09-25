#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

// To convert Uppercase to lowercase
char UppertoLower(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
    }
}

// To convert Lowercase to uppercase
char LowertoUpper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'a' + 'A';
    }
}

bool checkPalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (UppertoLower(name[s]) == UppertoLower(name[e]))
        {
            s++;
            e--;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) // donot write i != 0, you need to write it as written (makes sense)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Your name is ";
    cout << name << endl;

    int len = getLength(name);

    cout << "Your name is  Palindrome? " << endl;
    cout << checkPalindrome(name, len) << endl;

    cout << "Character is: " << UppertoLower('b') << endl;
    cout << "Character is: " << UppertoLower('c') << endl;
    cout << "Character is: " << UppertoLower('D') << endl << endl;
    
    cout << "Character is: " << LowertoUpper('B') << endl;
    cout << "Character is: " << LowertoUpper('C') << endl;
    cout << "Character is: " << LowertoUpper('d') << endl;

    return 0;
}