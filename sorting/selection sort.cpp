//Find the minimum element in the unsorted array and swap with the element in the beginning
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

------------------------------OTHER WAY---------------------------------------------------------------------------------------------



void swap(int arr[], int firstIndex, int secondIndex) 
{   
    int temp;
    temp = arr[firstIndex];
    arr[firstIndex] = arr[secondIndex];
    arr[secondIndex] = temp;
}
int indexOfMinimum(int arr[], int startIndex, int n) {
    int minValue = arr[startIndex];
    int minIndex = startIndex;
    int i;
    for(i = minIndex + 1; i < n; i++){
        if(arr[i] < minValue) 
        {
            minIndex = i;
            minValue = arr[i];
        }
    } 
    return minIndex;
}
void selectionSort(int arr[], int n) 
{
    int i;
    for(i = 0; i < n; i++) 
    {
        int index = indexOfMinimum(arr, i, n);
        swap(arr, i, index);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for(i = 0; i < size; i++)
            cout<<arr[i]<<" ";
    }
int main()
{
    int arr[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
         cin>>arr[i];
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;
}
