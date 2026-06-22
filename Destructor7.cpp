#include<iostream>
using namespace std ;
// Destructor call order

  class  A{
    public:
    ~A() {
        cout<<"Destructor A"<<endl;
    }
  };
   class  B  {
  public:
  ~B() {
    cout<<"Destructoe B"<<endl;

   }
};
  
int main ()
{

 A a;
 B b;
    return 0;
}