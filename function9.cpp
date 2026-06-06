#include<iostream>
using namespace std ;

bool Palindrome(int n){
    int temp=n,rev =0;

    while (n>0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return temp ==rev;
    
}
int main (){
    if(Palindrome(121))
    cout<<"palindrom";
    else 
    cout<<"Not palindrome";
    
    return 0;
}