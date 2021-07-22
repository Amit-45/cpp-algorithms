 //append function is used for concatenation of strings
//it is preferred over + operator as it executes faster
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "abc";
    string str2 = "def";

    str1.append(str2);
    cout << str1;
}
//Output:abcdef
//Syntax-->(string that is to be modified)
//.append(string that is to be appended at the last of the current string)
//Here str1 gets modified to abcdef.So we print str1
