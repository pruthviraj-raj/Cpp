#include<iostream>
using namespace std ;
int main()


//[3,1,2,4,0,6]
//targetsum=6
//i=0, j=0,k=2
{
    int array[] = {3,1,2,4,0,6};
    int targetsum=6;
    int size=6;
    int triplets=0;

    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            for(int k=0;k<size;k++){
                if(array[i]+array[j]+array[k]==targetsum){
                    triplets++;
                }
            }
        }
    }
    cout<<triplets<<endl;
    
    return 0;
}