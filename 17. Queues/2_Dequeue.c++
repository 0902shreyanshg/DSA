#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    deque <int> d;

    d.push_front(12);
    d.push_back(14);
    cout << d.front() << endl;
    cout << d.back() << endl << endl;

    d.pop_front();
    cout << d.front() << endl;
    cout << d.back() << endl << endl;

    //! WHY?
    d.pop_back();
    cout << d.front() << endl;
    cout << d.back() << endl << endl;

    if(d.empty()) {
        cout << "Queue is empty" << endl;
    }
    else {
        cout << "Queue is not empty" << endl;
    }

    return 0;
}