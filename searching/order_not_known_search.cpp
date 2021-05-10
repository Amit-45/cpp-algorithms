#include <bits/stdc++.h>
using namespace std;
int binaryAscending(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] > key)
        {
            // start = mid + 1;
            end = mid - 1;
        }
        else if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            //end = mid - 1;
            start = mid + 1;
        }
    }
    return -1;
}
int binaryDescending(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] > key)
        {
            start = mid + 1;
            //end = mid - 1;
        }
        else if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            end = mid - 1;
            //start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5}; //Order of the array can be both ascending or descending
    int n = 5;
    int key = 5;
    if (arr[0] < arr[n - 1])//Condition for ascending sorted array
    {
        cout << binaryAscending(arr, n, key);
    }
    else
    {
        cout << binaryDescending(arr, n, key);
    }
}
