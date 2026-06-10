#include<iostream>
using namespace std;

int main()
{
    int balance,amount;
    cin>>balance>>amount;

    if(amount<=balance)
    {
        if(amount %100==0)
        {
            cout<<"transaction sucessful";
        }
        else{
            cout<<"Enter amount in multipal of 100";
        }
    }
    else
    {
        cout<<"insufficent balance";
    }
    return 0;
}