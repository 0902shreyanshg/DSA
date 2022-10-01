#include<iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <map>
#include <set>
#include <algorithm>

/*
for ( range_declaration : range_expression ){
    loop_statement
}

range_declaration : 
a declaration of a named variable, whose type is the 
type of the element of the sequence represented by 
range_expression, or a reference to that type.
Often uses the auto specifier for automatic type 
deduction.

range_expression : 
any expression that represents a suitable sequence 
or a braced-init-list.

loop_statement : 
any statement, typically a compound statement, which
is the body of the loop.
*/

using namespace std;
 
int main()
{
    // Vector (iterating over whole array)
    vector <int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(auto i : v){
        cout << i << " ";
    }
    cout << endl << endl;

    // the initializer may be a braced-init-list
    for(auto i : {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}){
        cout << i << " ";
    }
    cout << endl << endl;

    // Iterating over array
    int a[] = {0, 1, 2, 3, 4, 5};     
    for (int n : a){
        cout << n << " ";
    }
    cout << endl << endl;

    // Just running a loop for every array element
    for (int n : a){
        cout << "Riseb moti moto chonki.. " << endl;
    }
    cout << endl << endl;

    // STRING:
    //printing string characters
    string riseb = "hacker";
    for(char ch : riseb){
        cout << ch << " ";
    }
    cout << endl << endl;

    // MAP:
    // Printing keys and values of a map
    map <int, int> MAP({{1, 1}, {2, 2}, {3, 3}});
    for(auto i : MAP){
        cout << i.first << ", " 
                  << i.second << endl;
    }
    return 0;
}