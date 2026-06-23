#include<iostream>
using namespace std;

    class parent1 {
        public:
        parent1 (){
            cout<<"parent1 class:"<<endl;
        }
    };
    class parent2{
        public:
        parent2 (){
            cout<<"parent2 class:"<<endl;
        }
    };
    class Child:public parent1,parent2{
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
   Child c;

    return 0;
}