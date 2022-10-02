#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int pivot(int arr[], int n) // Function likhte samay bracket mein daata structure define karenge bracket mein
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) // We do this so that the condition of s = e does not occur in which it will again
    // repeat the previous condition, TAKE AN EXAMPLE TO KNOW WHAT IS HAPPENING
    {
        if (arr[mid] >= arr[0]) // Ist line
        {
            s = mid + 1; // kyunki mid first line mein hai toh hume usse IInd line pe badhana hoga,
                         // pivot toh IInd line pe hai. (SEE THE DIAGRAM)
        }

        else // IInd line
        {
            e = mid; // taaki woh IInd line pe hi rahe, e = mid - 1 karne se woh Ist line pe chala jaayega
                     // Agar pivot = arr[mid] hai
        }
        mid = s + (e - s) / 2;
    }
    return s; // return   e;
}

int main()
{
    int arr[] = {3, 8, 10, 17, 1};
    cout << pivot(arr, 5); // Function call karte samay se siirf function ka naam dalenge bracket mein 

    return 0;
}