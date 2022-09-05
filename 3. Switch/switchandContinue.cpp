#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

// We can not use a continue with the switch statement. The break statement terminates the whole loop early. 
// The continue statement brings the next iteration early. It stops the execution of the loop
int main()
{
    char ch = '1';
    int num = 1;

    cout << endl;
    switch (2 * num)
    {

    case 2:
        cout << "First" << endl;
        cout << " First again " << endl;
        // continue;               // Try to uncomment and use this

    // Since there is no break, it will directly move to the next case rather than making an exit 
    case '1':
        switch (num)
        {
        case 1:
            cout << " Value of num is " << num << endl;
            break;
        }
        break;

    default:
        cout << " It is default case" << endl;
    }

    cout << endl;

    return 0;
}