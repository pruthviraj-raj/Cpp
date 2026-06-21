#include<iostream>
#include<string>

using namespace std ;
int main ()
{
     string s1 = "collage";
    char ch ='Z';

    string s2 ="wallah";
    char ch1 ='A';

    
     //cout<<s1<<endl;

    s1.push_back(ch);
    s2.push_back(ch1);

    cout<<s1<<endl;
    cout<<s2<<endl;

    return 0;
}