#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <map> // YOU INCLUDE <map> FOR MAP OPERATIONS IN STL

using namespace std;

int main()
{
    // A D.S. in which our data is stored in the form of key-value pair
    // All keys are unique
    // One key will point to only ONE value
    
    map<int, string> m;

    // HOW TO INSERT KEY-VALUE IN MAP
    m[1] = "Shreyansh";
    m[13] = "Gautam";
    m[2] = "Vinay";

    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl; // HERE, YOU WILL HAVE TO SPECIFY .first or .second, i.e. which key-value pair
    }

    m.insert({5, "Bheem"});

    cout << endl
         << endl
         << "After inserting Bheem: " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // YOU HAVE TO GIVE THE KEY IN ORDER TO ERASE THE KEY-VALUE
    cout << endl << endl <<"After using erase: " << endl;
    m.erase(13);
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // >???????????
    auto it = m.find(5);

    for(auto i = it; i != m.end(); i++){
        cout << (*i).first << endl; 
    }
    
    return 0;
}