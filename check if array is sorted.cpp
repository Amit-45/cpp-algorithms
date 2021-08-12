/*
Given an array arr[] of size N, check if it 
is sorted in non-decreasing order or not.

Input:
N = 5
arr[] = {10, 20, 30, 40, 50}
Output: Sorted
Explanation: The given array is sorted.

N = 6
arr[] = {90, 80, 100, 70, 40, 30}
Output: Not sorted
Explanation: The given array is not sorted.

*/
#include <bits/stdc++.h>
using namespace std;
//Function to return 1 if array is sorted and 0 if it's not
bool arraySortedOrNot(int arr[], int n)
{
    //Loop starts from 1
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
            return false;
    }

    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        //Input of array elements
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        //Checking the returned value from the function
        bool ans = arraySortedOrNot(arr, n);
        if (ans == 1)
            cout << "Sorted ";
        else
            cout << "Not sorted";
    }
    return 0;
}
