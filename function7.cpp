// check prime number
#include<iostream>
using namespace std ;

bool isPrime(int n) {
    if(n<=1)

    for(int i=2;i<=n;i++){
        if(n%i==0)
        return false;
    }
}
int main(){
    if(isPrime(13))
    cout<<"Prime";

    else 
    cout<<"Not Prime";

    return 0;
}