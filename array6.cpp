#include<iostream>
using namespace std;
int main (){
    int array[]={1,2,3,4};

      int size =sizeof(array)/sizeof(array[0]) ;
        // for loop
    for (int idx  = 0; idx < 0; idx++)
    {
        cout<<array[idx]<<endl;
    }
        // for each loop
        for (int ele:array) {
            cout<<ele<<endl;
        }
    

    return 0;
}