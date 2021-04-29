
//Kadein's algorithm
//Used to find largest sum contiguous subarray
//Takes negative into consideration too

#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int  n;
  cin>>n;
  long long int arr[n];

for(int i=0;i<n;i++)
cin>>arr[i];

long long int cs=arr[0],ms=arr[0];//cs=current_sum ms=maximum_sum
for(int i=1;i<n;i++)
{
    cs=max(cs+arr[i],arr[i]); //Kadein's Logic
    ms=max(ms,cs);
}
cout<<ms<<endl;

}
/*Sample input:
8
-2 -3 4 -1 -2 1 5 -3 
*/
//Sample output:
//7 
