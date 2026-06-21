#include<iostream>
using namespace std ;
int main  () 
{
    int x=20;
    double dec=9.8;
    int *ptr=&x;

    cout<<ptr<<" "<<(ptr +1)<<"\n"<<endl;
    cout<<ptr<<" "<<(ptr -1)<<"\n"<<endl;
    cout<<"size of x is"<<sizeof(x)<<endl;
    cout<<"size of dec is"<<sizeof(dec)<<endl;

    return 0;
}