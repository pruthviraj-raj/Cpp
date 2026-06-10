#include<iostream>
using namespace std ;
int main () {
    int a,b,c;
    cin>>a>>b>>c;
    int largest,smallest;
    if(a>=b&&a>=c)
    {
        largest =a;
    }
    else if (b>=a&& b>=c)
    {
        largest =b;
    }
    else
    {
        largest =c;
    }
    
    cout<<"largest="<<largest<<endl;
    return 0;
}