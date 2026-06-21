#include<iostream>
using namespace std ;
//call by reference

    void firstlastIndex(string s,char c,int *first,int *last)
    {   for(int i =0;i<s.size();i++){
        if(s[i]==c){
            *first =i;
            break;
        }
    }
    for(int i=s.size()-1;i>0;i--){
        if(s[i==c]) {
            *last =i;
            break;
        }
    }

    }
int main ()
{   string s ="aabbccdeff";
    char ch ='a';

    int first =-1;
    int last =-1;

     int*pf =&first;
     int*pl =&last;

    firstlastIndex(s,ch,pf,pl);

    cout<<*pf<<" "<<*pl<<endl;
    cout<<first<<" "<<last;


    return 0;
}