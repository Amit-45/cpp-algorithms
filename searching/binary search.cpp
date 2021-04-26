#include <bits/stdc++.h>
using namespace std;
int binarySearch(int a[], int n, int item)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        int guess = a[mid];
        if (guess == item)
            return mid;
        if (guess > item)
            end = mid - 1;
        else
            start = mid + 1;
    }
    return n - 1;
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int item = 4;
    if (binarySearch(a, 6, item) == -1)
        cout << "Element not found.\n";
    else
        cout << "Element found at index: " << binarySearch(a, 6, item) << "\n";

    return 0;
}

//Binary search
//Decrease and conquer algorithm (not divide and conquer)
//Elements must be sorted
//Here we find the mid element of the array
//Then we compare this with the key value (whether it is greater or smaller)
//Then it checks for the key in that part where the element may be present
