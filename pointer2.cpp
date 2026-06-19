#include<iostream>
using namespace std ;
int main ()
{
        int x=18;
        float y=9.7f;
        // creat a poniter that can store addrecss of y:
        // y is float variable:
        float *ptrf =&y;
        cout<<ptrf<<endl;

        //creat pointer that can store addrcss of x:
        //as x is the integer variable:
        int *ptrx = &x;
        cout<<ptrx<<endl;



    return 0;
}