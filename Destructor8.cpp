#include<iostream>
using namespace std ;
// Destructor inherit

    class Base{
        public:
        ~Base() {
            cout<<"Base Destructor:"<<endl;
        }
    };
    class Derived:public Base {
        public:
        ~ Derived() {
            cout <<"Derived Destructor:"<<endl;
        }
    };
int main () {
    Derived d;
    return 0;
}