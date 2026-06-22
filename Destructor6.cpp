#include<iostream>
using namespace std ;
    class Array{
        int *p;
        public:
        Array(){
            p= new int[5];

            cout<<"Memory allocated:\n";
        }
        ~Array() {
            delete[] p;
            cout<<"Memory Deallocate:\n";
        }
    };

int main ()
{
    Array obj;

    return 0;
}