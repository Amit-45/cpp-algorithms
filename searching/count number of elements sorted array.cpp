#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int res1 = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            res1 = mid;
            end = mid - 1;
        }
    }
    return res1;
}
int lastOccurence(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int res2 = -1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            res2 = mid;
            start = mid + 1;
        }
    }
    return res2;
}
int main()
{
    int arr[] = {2, 4, 10, 10, 10, 11, 11, 11, 11, 11, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 11;
    int first = firstOccurence(arr, n, key);
    int last = lastOccurence(arr, n, key);

    int count = last - first + 1;
    cout << count << endl;
}
