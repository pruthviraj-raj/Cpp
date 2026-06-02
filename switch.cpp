#include<iostream>
using namespace std;

int main(){
    int day;
    cin>>day;

    switch(day) {

        case 1:
        cout<<"monday"<<endl;
        break;

        case 2:
        cout<<"Tues"<<endl;
        break;

        case 3:
        cout<<"Wed"<<endl;
        break;

        case 4:
        cout<<"Thurs"<<endl;
        

        default :
        cout<<"Default case"<<endl;
    }
    return 0;
}