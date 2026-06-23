#include<iostream>
using namespace std;

    class parent {
        public:
        parent(){
            cout<<"parent class:"<<endl;
        }
    };
    class Child:public parent{
        public:
        Child() {
            cout<<"Child class "<<endl;
        }
    };
    class GrandChild:public Child {
            public:
            GrandChild(){

            cout<<"GrandChild class"<<endl;
            }
    };

int main ()
{
    GrandChild gc;

    return 0;
}