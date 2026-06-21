#include<iostream>
using namespace std ;
int main ()
{
    int Arr[] ={1,2};
    int *ptr =&Arr[0];
    cout<<ptr<<" "<<*ptr;
    cout<<(ptr+1)<<" "<<endl;

    return 0;
}