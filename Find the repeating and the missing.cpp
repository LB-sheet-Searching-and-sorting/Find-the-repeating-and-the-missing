/*
Niave approach:

Use sorting and then get repeating and missing.

Array elements are in the range from 1 to n diya hai to sidha sidha ek traversal me repeating and missing aa jayga

TC = O(NlogN) + O(N) => O(NlogN)
SC = O(1)


Method 2 (Use count array)
Approach: 

Create a temp array temp[] of size n with all initial values as 0.
Traverse the input array arr[], and do following for each arr[i] 
if(temp[arr[i]] == 0) temp[arr[i]] = 1;
if(temp[arr[i]] == 1) output “arr[i]” //repeating
Traverse temp[] and output the array element having value as 0 (This is the missing element)


Time Complexity: O(n)

Auxiliary Space: O(n)

//another approach:

use indexing for repeating isse extra space bachega, and array ko modify karna hoga.Use array itself as a hahmap
jo element posotive hoga modified array me vo missing hai
I am Writing method 2 bcoz its very simple

*/

#include <bits/stdc++.h>
using namespace std;
 
void printTwoElements(int arr[], int size)
{
    int i;
    cout << " The repeating element is ";
 
    for (i = 0; i < size; i++) {
        if (arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
        else
            cout << abs(arr[i]) << "\n";
    }
 
    cout << "and the missing element is ";
    for (i = 0; i < size; i++) {
        if (arr[i] > 0)
            cout << (i + 1);
    }
}
 
/* Driver code */
int main()
{               //1  2  3  4  5  6  7
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr,n);
}
