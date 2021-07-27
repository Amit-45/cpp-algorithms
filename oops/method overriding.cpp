#include <bits/stdc++.h>
using namespace std;
 
class Volume //Base Class.
{ 
    public:  
    int square(int s)//Function declaration.
    {    
    cout<<"Volume="<<s*s*s<<endl;   
    }     
 };  
 
class Area: public Volume  //Derived class 
 {   
    public: 
     int square(int s)//Overridden function.   
    {  
       cout<<"Area="<<s*s<<endl;  
    }   
 }; 
 
int main(void) 
{ 
    Volume v;
    Area a;
    v.square(5);//Base class function will be called.
    a.square(5);//Derived class function will be called.
     
 
   return 0; 
 
}
