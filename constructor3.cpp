#include<iostream>
using namespace std ;
    class student{
        public:
        string name ;
        int age ;

        student(string n ,int a){
           name =n;
           age=a;
           cout<<"cons called :"<<endl<<endl;
        }
            void Display() {
                cout<<"name:"<<name<<endl;
                cout<<"age:"<<age<<endl;
            }
    };
int main ()
{
    student s1("raju",25);
    s1.Display();

    student s2("gopal",24);
    s2.Display();
    return 0;
}