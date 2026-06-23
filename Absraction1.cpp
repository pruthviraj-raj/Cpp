#include<iostream>
using namespace std ;
//ew can not creat object of an abstract class
    class shape{
        public:
        virtual void draw() =0;
    };

int main ()
{
    shape ; //error

    return 0;
}