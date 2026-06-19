#include<iostream>
using namespace std ;
int main()
{
        int x=10;
        float y=9.9f;

        int *ptr =&x;
        cout<<"Address store inside ptr:"<<ptr<<endl;
        cout<<"value present at the address store in ptr:"<<*ptr<<endl;

        float *ptrf =&y;
        cout<<"Address of store inside ptr:"<<ptrf<<endl;
        cout<<"value presenet at the address store in ptr:"<<*ptr<<endl;


    return 0;
}