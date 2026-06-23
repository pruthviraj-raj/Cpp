#include<iostream>
using namespace std;

    class shape{
        public:
        virtual void area()=0;

    };
    class circle:public shape{
        float r;
        public:
        circle(float r){
            this->r=r;
        }
        void area() override{
            cout<<"Arae of circle="<<3.14*r*r<<endl;
        }
    };
    class rectangle:public shape{
        int l,b;
        public:
            rectangle(int i,int b){
                this->l=l;
                this->b=b;

            }
            void area() override{
                cout<<"Area of rectangle="<<l*b<<endl;
            }
    };
   
    
int main ()
{
    shape *s1 =new circle(5);
    shape *s2 =new rectangle(4,6);
    s1->area();
    s2->area();

    delete s1;
    delete s2;

    return 0;
}