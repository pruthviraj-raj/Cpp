#include<iostream>
using namespace std ;
/*single INHERITANCE*/

class A 
{
    public:
    void Display()
    {
        cout<<"Class A";

    }
};
class B:public A
{    public:
    void Display(){
                cout<<"class B";
    }
};

int main () {

    B obj;
    obj.Display();

    return 0;
}