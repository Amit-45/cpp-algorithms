#include <bits/stdc++.h>
using namespace std;
int firstOccurence(int arr[], int n, int ele)
{
    int start = 0;
    int end = n - 1;
    int res = -1; //

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == ele)
        {
            res = mid;     //
            end = mid - 1; //
        }
        else if (arr[mid] >=ele)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return res; //
}
int main()
{
    int arr[] = {1, 1, 10, 10, 5};

    int n = 5;
    int ele = 10;
    cout << firstOccurence(arr, n, ele);
}
