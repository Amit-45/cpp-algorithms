//Linear search
//Take input of size and key(element to be searched)
//The linearSearch function returns the index value of the key if the key is found else returns the value -1

#include <bits/stdc++.h>
using namespace std;
int linearSearch(int a[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);

    int size;
    cin >> size;
    int a[size];
    int key;
    cin >> key;
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    cout << linearSearch(a, size, key) << "\n";
}
