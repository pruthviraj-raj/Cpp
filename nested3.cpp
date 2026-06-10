#include<iostream>
using namespace std;

int main()
{
    int salary,debitscore;
    cin>>salary>>debitscore;
    
    if(salary>=87000)
    {
        if(debitscore>=500)
        {
            cout<<"lone Approved";
        }
        else
        {
            cout<<"Lone regected(low debitscore)";
        }
    }
    else
    {
        cout<<"lone regected(low salary)";
    }
    return 0;
}