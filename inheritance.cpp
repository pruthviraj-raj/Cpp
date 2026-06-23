#include<iostream>
using namespace std ;

class parent

{
private:
    int x;
public:
    int y;

protected:
    int z;
    
};
    class Child1:public parent {

    };
    class Child2:private parent{

    };
    class Child3:protected parent{

    };
    


int main ()
{



    return 0;
}
