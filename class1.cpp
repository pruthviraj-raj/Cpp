#include<iostream>
using namespace std ;

    class student {
        public:
        string name;
        int rollno;

        void Display() {
            cout<<"rollno"<<rollno<<endl;
            cout<<"name:"<<name<<endl;
        }
    };
int main ()
{
    student s1;  //object creat
    s1.name ="raju";
    s1.rollno=101;
    s1.Display();


    return 0;
}