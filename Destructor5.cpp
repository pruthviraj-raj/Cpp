#include<iostream>
using namespace std ;

    class test {
        public:
        test(){
            cout<<"constructor callled\n";
        }
        ~test() {
            cout<<"Destructor called"<<endl;
        }
    };
int main ()
{
    test t;
    return 0;
}