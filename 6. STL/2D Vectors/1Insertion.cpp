#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <vector>

using namespace std;

// Defining the rows and columns of
// vector of vectors
#define ROW 4
#define COL 5

int main()
{
    // Vector of Vectors is a two-dimensional vector with a variable number of rows where each row is vector.
    // Each index of vector stores a vector which can be traversed and accessed using iterators.
    // It is similar to an Array of Vectors but with dynamic properties.

    vector<vector<int>> vec; // 2-D vector/ vectors of vectors

    int num = 10; // Elements to insert in column

    // Inserting elements into vector
    for (int i = 0; i < ROW; i++)
    {
        // Vector to store column elements
        vector<int> v1;

        for (int j = 0; j < COL; j++)
        {
            v1.push_back(num);
            num += 5;
        }

        // Pushing back above 1D vector
        // to create the 2D vector
        vec.push_back(v1);
    }

    // Displaying the 2D vector
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec[i].size(); j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}