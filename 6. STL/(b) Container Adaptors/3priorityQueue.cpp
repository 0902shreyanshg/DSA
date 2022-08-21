#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
#include <queue> // YOU INCLUDE <queue> FOR PRIORITY QUEUE OPERATIONS IN STL

using namespace std;

int main()
{
    // a special type of queue in which each element is associated with a priority value. And, elements are served on the basis of their priority.
    // FIRST ELEMENT WILL ALWAYS BE THE GREATEST

    // MAX HEAP
    priority_queue<int> maxi;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout << "Size of maxi: " << maxi.size() << endl;

    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop(); // only then the below element will be able to come on top
    }
    cout << endl
         << endl;

    // THIS IS FLAWED AS maxi.pop is changing the size of the queue at each iteration, so ans will be different from above
    // for(int i = 0; i < n.size(); i++){
    //     cout << maxi.top() << " ";
    //     maxi.pop();
    // }


    // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> mini; // TBR

    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    cout << "Size of mini: " << mini.size() << endl;

    int m = mini.size();
    for (int i = 0; i < m; i++)
    {
        cout << mini.top() << " ";
        mini.pop(); // only then the below element will be able to come on top
    }
    cout << endl
         << endl;

    cout << "Khaali hai kya bhai ?? -> " << mini.empty() << endl;

    return 0;
}
