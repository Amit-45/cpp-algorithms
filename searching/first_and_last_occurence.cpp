#include <bits/stdc++.h>
using namespace std;
int firstAndLastOccurence(int arr[], int n, int ele, int tog) //toggler value
{
    int start = 0;
    int end = n - 1;
    int res = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == ele)
        {
            res = mid;
            if (tog == -1) //For last occurence
                end = mid + tog;
            else
                start = mid + tog;
        }
        else if (arr[mid] > ele)
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
    int arr[] = {1, 10, 10, 10, 5};

    int n = 5;
    int ele = 10;
    int index1 = firstAndLastOccurence(arr, n, ele, -1); //Two indexes 
    int index2 = firstAndLastOccurence(arr, n, ele, 1);
    if (index1 == -1)
    {
        cout << "-1\n";
    }
    else
        cout << index1 << " " << index2 << "\n"; //result 


        
}
