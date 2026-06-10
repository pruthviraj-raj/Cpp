#include<iostream>
#include<string>
using namespace std ;

int main ()
{
    string username,password;
    cin>>username;
    cin>>password;

    if(username == "admin")
    {
        if(password =="1234")
        {
            cout<<"login sucessful";
        }
        else
        {
            cout<<"worng password";
        }
    }
    return 0;
}