#include<iostream>
using namespace std ;

    class employee{
        public:
        virtual void calulatesalary()=0;
    };
    class Developr:public employee{
        public:
        void calulatesalary() override{
            cout<<"Developer salary =50000"<<endl;
        }
    };
    class manager:public employee{
        public:
        void calulatesalary() override{
            cout<<"maneger salary=70000"<<endl;
        }
    };
int main()
{
    employee *e1= new Developr();
    employee *e2= new manager();
    e1->calulatesalary();
    e2->calulatesalary();

    delete e1;
    delete e2;

    return 0;
}