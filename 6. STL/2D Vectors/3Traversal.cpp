#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

// The following code demonstrates the traversal of a 2D vector.

// for i in [0, n)
// {
//     for (iterator it = v[i].begin();
//          it != v[i].end(); it++)
//    {
//         / Operations to be done
//         / For example to print
//         print(*it)
//     }
// }

// Driver method
int main()
{
    // Initializing 2D vector "vect" with
    // sample values
    vector<vector<int>> vec{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};

    // Displaying the 2D vector
    for (int i = 0; i < 3; i++)
    {
        for (
            auto it = vec[i].begin();
            it != vec[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }
    return 0;
}