#include<iostream>
using namespace std ;

class fruit{
    public:
    string name;
    string color;
};
int main()  
{
    fruit apple;
    apple.name= "Apple";
    apple.color="red";
    cout<<apple.name<<"_"<<apple.color<<endl;


    return 0;
}