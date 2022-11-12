#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;
bool checkPalindrome(string &str, int i, int j)
{
    // base case
    if (i > j)
    {
        return true; // jab hume pata hai saare character equal equal aa rahe hai
    }
    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        // Recursive call
        return checkPalindrome(str, i + 1, j - 1);
    }
}
int main()
{
    string str = "aabbaabbaa";
    cout << endl;
    bool isPalindrome = checkPalindrome(str, 0, str.length() - 1);
    if (isPalindrome)
    {
        cout << "It's a palindrome " << endl;
    }
    else
    {
        cout << "It's not a palindrome " << endl;
    }
    cout << str << endl;
    return 0;
}