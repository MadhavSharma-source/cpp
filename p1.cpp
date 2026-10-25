#include<iostream>
using namespace std;
class BankAccount{
    char name[50];
    int accno;
    int balance;

    public:
        void read(){
            cout<<"Enter Name: "<<endl;
            cin>>name;
            cout<<"Enter Account Number:"<<endl;
            cin>>accno;
            cout<<"Enter Balance: "<<endl;
            cin>>balance;
        }

        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Account Number: "<<accno<<endl;
            cout<<"Balance: "<<balance<<endl;
        }

        void deposit(){
            int amount;
            cout<<"Enter the amount to deposit: "<<endl;
            cin>>amount;
            balance+=amount;
        }
        void withdraw(){
            int amount;
            cout<<"Enter the amount to withdraw: "<<endl;
            cin>>amount;
            if(amount>balance){
                cout<<"Insufficient Balance"<<endl;

            }else if(balance<500){
                cout<<"Low Balance"<<endl;
            }else{
                balance-=amount;
            }

        }
        void check_balance(){
            cout<<"Account balance is: "<<balance<<endl;
        }
};
int main(){
    BankAccount b1;
    b1.read();
    while(true){
    cout<<"\nEnter your choice:"<<endl;
    cout<<"1.Check Accoutn Details\n2.Deposit money\n3.Withdraw money\n4.Check balance\n5.Exit\n"<<endl;
    int choice;
    cin>>choice;
        switch(choice){
            case 1:b1.display();
            break;
            case 2:b1.deposit();
            break;
            case 3:b1.withdraw();
            break;
            case 4:b1.check_balance();
            break;
            case 5:exit(0);
            default:cout<<"Invalid choice\n";
        }
    }
    return 0;
}