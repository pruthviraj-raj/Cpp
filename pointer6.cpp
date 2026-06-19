#include<iostream>
using namespace std;
int main ()
{
        int x,y; //declared x,y
        cin>>x>>y;   // takin output 

        int *ptrx =&x;     // &xfeatch address of x:
        int *ptry=&y;    //&y feathes address of Y:

        int result;
        int *ptr_result = &result;
        /*
        *ptrx-->10
        *ptry-->20
        *ptr+*ptr-->30
        */
        *ptr_result = *ptrx + *ptry ;
        cout<<result<<*ptr_result<<endl;


    return 0;
}