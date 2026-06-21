#include<iostream>
#include<string>
#include<algorithm>
using namespace std ;
int main ()
{   
    string str = "Hello";
    reverse(str.begin(),str.end());  //reverse 

    string str1 ="Pratham";
    reverse(str1.begin(),str1.end());  //reverse

    cout<<str<<endl;
    cout<<str1<<endl;

    
   
    return 0;
}