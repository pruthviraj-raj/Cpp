#include<iostream>
using namespace std ;

    class BankAcount{
        private:
        double balance;

        public:
        BankAcount(){
            balance =0;
        }
        void Diposite(double amount){
            if(amount>0){
                balance+=amount;
            }
        }
        void withdrw(double amount) {
            if(amount>0 && amount<=balance){
                balance-=amount;
            }
            else
            {
                cout<<"insufficient balance of Amount"<<endl;
            }
        }
            double getBalance(){
                return balance;
            }
    };
    
int main  ()
{
    BankAcount b;
    b.Diposite(50000);
    cout<<"After Deposit balance:"<<b.getBalance()<<endl;

    b.withdrw(20000);
    cout<<"After withdra balance:"<<b.getBalance()<<endl;

    return 0;
}