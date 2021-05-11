#include <bits/stdc++.h>
using namespace std;
int numberOfRotations(int arr[], int n)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;
        int next = mid + 1;
        int prev = mid - 1;

        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
        {
            next = (mid + 1) % n;
            prev = (mid + n - 1) % n;
            return mid;
        }
        else
        {
            if (arr[start] < arr[mid])
                start = mid + 1;
            else if (arr[mid] < arr[end])
                end = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {10, 11, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    int n = sizeof(arr) / sizeof(arr[0]);

    cout << numberOfRotations(arr, n);
}
