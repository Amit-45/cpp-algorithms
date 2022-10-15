//Insert an element from unsorted array to its correct position in sorted array
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
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j > 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


//Another way 

#include <iostream>
using namespace std;

int main() 
{
   int n,temp,i,j; 
   cin>>n;
  int data[n];
    for(i=0;i<n;i++) 
    {
        cin>>data[i];
    } 
    for(i=1;i<n;i++) 
    { 
        temp = data[i];
        j=i-1; 
        while(temp<data[j] && j>=0) 
        { 
            data[j+1] = data[j]; 
            --j; 
        } 
        data[j+1]=temp; 
    } 
    
    for(i=0; i<n; i++) 
        cout<<data[i]<<" "; 
    return 0; 
}
