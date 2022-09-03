#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;
void dtb(int n)
{
    int i = 0;
    int ans = 0;
    while (n != 0)
    {
        if (n % 10 == 1)
        {
            ans = ans + pow(2, i);
        }
        n = n / 10; 
        i++;
    }
    cout << ans << endl;
}
int main()
{
    int n;
    cin >> n; //YOU'VE TREATED 101 AS BINARY BUT COMPUTER WILL TREAT 101 AS A NUMBER AND THEN CREATE ITS BINARY
    dtb(n);
    return 0;
}