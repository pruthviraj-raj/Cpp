#include<iostream>
#include<algorithm>
#include<vector>
using namespace std ;
int main ()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    int k=1;
    k=k%v.size();

    reverse(v.begin(),v.end());  // step1:[5,4,3,2,1]
    reverse(v.begin(),v.begin()+k);  //steap2:[4,5,3,2,1]
    reverse(v.begin()+k,v.end());   //step3:[4,5,1,2,3]
    for(int a:v){
        cout<<a<<" ";

    } cout<<endl;


    return 0;
}
