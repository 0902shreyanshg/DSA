#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

// LOVE BABBAR'S CODE; THIS ALSO PRINTS 100 FOR 5.. WTF

int main()
{
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;
    while (n != 0)
    {

        int bit = n & 1;

        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }

    cout << " Answer is " << ans << endl;
    return 0;
}



// WHY ERROR ??????????????????

// int btd(int n)
// {
//     int i = 0;
//     int ans = 0;
//     while (n != 0)
//     {
//         int bit = n & 1;
//         cout << "bit: " << bit << endl;
//         ans = (bit * pow(10, i)) + ans; // USING pow() function
//         cout << "ans: " << ans << endl;
//         n = n >> 1;                     // YOU FORGOT TO SHIFT! REMEMBER THAT IN BINARY YOU NEED TO SHIFT
//         i++;
//     }
//     cout << "Answer is " << ans << endl;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     btd(n);

//     return 0;
// }