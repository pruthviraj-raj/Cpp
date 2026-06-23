#include<iostream>
using namespace std ;

class BankAccount{
    private:
    double balance;
    
    public:
    BankAccount(){
        balance =0;
    }

        void Deposit(double amount){
            if(amount>0)
            balance+=amount;
        }
        double getbalance(){
            return balance;
        }
};

int main ()
{
    BankAccount b;
    b.Deposit(50000);
    cout<<"Balance:"<<b.getbalance()<<endl;


    return 0;
}