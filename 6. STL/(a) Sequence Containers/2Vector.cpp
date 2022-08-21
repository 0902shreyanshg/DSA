#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector> // YOU INCLUDE THIS FOR VECTOR OPERATIONS IN STL
 
using namespace std;
 
int main()
{
    vector <int> v; // WHEN YOU CREATE A NEW VECTOR, IT'S SIZE IS 0

    // Size: Total number of elements present at a point of time
    // Capacity: Amount of memory allocated at a point of time
    cout << "Capacity after creating a vector: " << v.capacity() << endl; // It will v.capacity() not capacity(v)
    cout << "Size after creating a vector: " << v.size() << endl << endl;

    // push_back(): adds element to the vector
    v.push_back(1);
    cout << "Capacity after first push_back(): " << v.capacity() << endl; 
    cout << "Size after first push_back(): " << v.size() << endl << endl;

    v.push_back(2);
    cout << "Capacity after second push_back(): " << v.capacity() << endl; 
    cout << "Size after second push_back(): " << v.size() << endl << endl;

    v.push_back(3);
    cout << "Capacity after third push_back(): " << v.capacity() << endl; // CAPACITY DOUBLES AS WE ADD ELEMENTS TO THE VECTOR
    cout << "Size after third push_back(): " << v.size() << endl << endl;

    cout << "v.at(2) will show the result: " << v.at(2) << endl;
    cout << "v[2] will show the result: " << v[2] << endl;
    cout << "Both of them show the same result." << endl << endl;

    cout << "First Element using v.front(): " << v.front() << endl;
    cout << "Last Element using v.back(): " << v.back() << endl << endl;
    
    cout << "Printing vector (before pop): " << endl;
    for(int i : v){
        cout << i << " ";    // It will be "i" which will be printed not v[i]
    }

    v.pop_back(); // YOU CAN'T DIRECTLY WRITE COUT IN THIS. IT WILL PERFORM THE OPERATION FIRST, LIKE PUSH BACK

    cout << endl << "Vector after using pop_back() function: " << endl;
    for(int i : v){
        cout << i << " ";
    }
    cout << endl << endl;

    v.clear(); // Deletes all the elements of the vector
    // SIZE BECOMES 0 BUT CAPACITY REMAINS THE SAME
    cout << "Capacity after using clear(): " << v.capacity() << endl; // CAPACITY REMAINS THE SAME; ONLY SIZE REDUCES
    cout << "Size after using clear(): " << v.size() << endl << endl;

    // SECOND WAY TO INITIALISE A VECTOR
    // TO PRINT A VECTOR OF SIZE 5 (THAT IS IF WE KNOW THE SIZE) WITH ALL ELEMENTS OF IT INITIALISED AS 1; WE NEED TO PERFORM:
    vector <int> a(5, 1);
    // Printing "a"
    cout << "Printing a: ";
    for(int i : a){
        cout << i << " ";
    }
    cout << endl << endl;

    // COPYING A VECTOR TO ANOTHER VECTOR
    vector <int> riseb(a);
    cout << "Printing riseb (copy of vector a): ";
    for(int i : riseb){
        cout << i << " ";
    } 

}