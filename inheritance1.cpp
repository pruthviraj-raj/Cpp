#include<iostream>
using namespace std;
/*Single inheritance
*/

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

int main ()
{
    Child c;


    return 0;
}