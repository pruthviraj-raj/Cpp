#include<iostream>
using namespace std ;
int main ()
{
    int age,experience;
    cin>>age>>experience;

    if(age>=18)
    {
        if(experience>=1)
        {
            cout<<"Eligibale";
        }
        else
        {
            cout<<"Not Eligible(experience Requied)";
        }
    }
    else
    {
        cout<<"Not Eligible(age Reuaired)";
    }
    return 0;
}