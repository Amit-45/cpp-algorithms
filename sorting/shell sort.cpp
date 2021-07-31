#include<iostream>
using namespace std;

void shellSort(int sort[],int size)
{
    for(int gap=size/2;gap>0;gap/=2)
   {
        for(int i=gap;i<size;i++)
         {

            int temp=sort[i];
            int j;
            for(j=i;j>=gap&&sort[j-gap]>temp;j-=gap)
            {
                sort[j]=sort[j-gap];
            }
            sort[j]=temp;
        }
    }
}
int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int sort[size];
    cout<<"Enter the Elements to be sorted:";
    for(int i=0;i<size;i++)
    {
        cin>>sort[i];
    }
    shellSort(sort,size);
    cout<<"Array after sorting is: ";
    for(int i=0;i<size;i++)
    {
        cout<<sort[i]<<" ";
    }
    cout<<endl;
    return 0;
}

/*   
Enter the size of the array: 5                                                                                                                
9 5 8 1 4                                                                                                                                            5                                                                                                                                             
Array after sorting is: 1 4 5 8 9                                                                                                                     
*/

/*
Worst case time complexity = O(n2)
Best case complexity = O(nlog(n)).
Space complexity = O(1).
*/
