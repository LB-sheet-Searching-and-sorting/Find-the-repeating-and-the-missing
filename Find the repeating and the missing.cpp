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

jyada complex hai mera approach

My 2:
Missing ke liye XOR use karo
Repeating ke liye hashing use karo

TC = O(N)
SC = O(N)

I am Writing method 2 bcoz its very simple

*/

#include <bits/stdc++.h>
using namespace std;
 
void printTwoElements(int arr[], int size)
{
    int temp[size]={0};    
    
    
    for(int i=0;i<size;i++)
    {
    	//agar element already nhi hai to mark karo
    	if(temp[arr[i]]==0)
    	{
    		temp[arr[i]]==1;
		}
		//agar already marked hai to vo repeating hai
		else if(temp[arr[i]]==1)
		{
			cout<<"\nRepeating => "<<arr[i];
		}
	}
	
	//ab temp[] ko traverse karo and jo element 0 ho missing hai
 	 for(int i=0;i<size;i++)
    {
    	
    	if(temp[i]==0)
    	{
    		cout<<"\nMissing => "<<i;   //bcoz i pe arr[i] stored hai
    		break;
		}
	}
    
}
 
/* Driver code */
int main()
{
    int arr[] = { 7, 3, 4, 5, 5, 6, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printTwoElements(arr, n);
}
