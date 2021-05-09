//Array is sorted in reverse order.Sort it using Binary Search
#include <bits/stdc++.h>
using namespace std;

int binarySearchReverseSortedArray(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] > key)
        {
            start = mid + 1;   
        }
        else if (arr[mid] == key)
        {
            return mid;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    int key = 3;
    cout << binarySearchReverseSortedArray(arr, n, key);
}
