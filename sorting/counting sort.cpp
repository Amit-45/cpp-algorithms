#include <bits/stdc++.h>
using namespace std;

void countSort(int arr[], int n)
{
  int k = arr[0];
  for (int i = 0; i < n; i++)
  {
    k = max(k, arr[i]);   //Maximim element
  }
  int count[10] = {0}; 
  for (int i = 0; i < n; i++)
  {
    count[arr[i]]++;//Storing the count of every element
  }
  for (int i = 1; i < k; i++)
  {
    count[i] += count[i - 1];//Modifying the count array(Adding the previous element)
  }
  int output[n];
  for (int i = n - 1; i >= 0; i--)
  {
    output[--count[arr[i]]] = arr[i];//Storing the sorted elements in the output array
  }
  for (int i = 0; i < n; i++)
  {
    arr[i] = output[i];//Putting back the output array in the original array
  }
}
int main()
{

  int arr[] = {1, 2, 6, 5, 4, 3, 8, 9, 8};
  countSort(arr, 9);
  for (int i = 0; i < 9; i++)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
