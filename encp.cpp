#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;
    public:

        BankAccount(string accNum,double iniBal){
            accountNumber=accNum;
            balance=iniBal;
        }

        // get balance

         double getbalance () const{
            return balance;
        }


        // methond to deposite money

        void deposit(double amount){
            if(amount > 0){
               balance+=amount;
            }
            else{
                cout<<"Invailid deposite amount"<<endl;
            }
        }

        // withdwaw money

        void withdraw(double amount){
            if(amount >0 && amount <= balance){
                balance-=amount;
                cout<<"amount withdraw successfully"<<endl;
            }
            else{
                cout<<"Invaild withdraw amount"<<endl;
            }
        }

};

int main(){

    BankAccount ba("34206050",100000.00);
    ba.withdraw(5000);
    double rembal=ba.getbalance();
    cout<<rembal<<endl;
    ba.withdraw(0);

    return 0;
}