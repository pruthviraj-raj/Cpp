#include<iostream>
using namespace std ;

    class student {
             private:
                 int mark;

             public:
               void setmarks(int m){
                mark =m;
        }   
            int getmark() {
                return mark;
            }
    };
 
    
int main ()
{
    student s;
    s.setmarks(90);
    cout<<"mark="<<s.getmark();
    return 0;
}