#include<iostream>
using namespace std ;

int main ()
{
    int x,y,z;
    cin>>x>>y>>z;

    if((x>=y&&y<=z) ||(x >=y && x<=z)) 
    {
        cout<<"Second large ="<<x;

    }
    else if((y>=x&&y<=z)||(x>=z&&y<=x))
    {
        cout<<"Second large:"<<y;

    }
    else
    {
        cout<<"Second large:"<<z;
    }
    return 0;
}