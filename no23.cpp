
#include<iostream>
#include<string.h>
#include <cstdlib>
#include <ctime>
#include<bits/stdc++.h>
#define RATE 4
using namespace std;
string Random(){
	string s;
	int i;
	for(i=0;i<4;i++)
		s=s+(char)(rand()%24+65);
	    s+=' ';
	return s;
}
class SavingsAccount{
        static int count;
        string name;
        float balance;
        int accountNumber;
public:
        void withdraw(float x);
        void deposit(float y);
        double interest();
        SavingsAccount(){};
        SavingsAccount(string _name,int _balance){
            ++count;
            name = _name;
            balance = _balance;
            accountNumber = count;
        }
        int getAccountNumber(){return accountNumber;}
        int getBalance(){return balance;}
        string getName(){return name;}
};
int SavingsAccount::count {1000};
void SavingsAccount :: withdraw(float x){ balance = balance-x; }
void SavingsAccount :: deposit(float y){ balance = balance+y; }
double SavingsAccount::interest(){
    double x;
    x=(RATE/100.0) * balance;
    return x;
}
int main(){
    srand(time(NULL));
    int noOfPeople {100};
    double totalInerest=0.0;
    SavingsAccount savingsAccount[100];
    int i=0,choice=0,no;
    float value;
    for(i=0;i<noOfPeople;i++){
        savingsAccount[i] = SavingsAccount(Random(),(rand() % 100000 + 1000 ));
    }
    while(choice!=4){
        cout<<"1. To Deposit money\n2. To withdraw\n3. to display all\n4. to exit\nEnter a no:";cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter your Account Number: ";cin>>no;
                for(i=0;i<noOfPeople;i++){
                    if(savingsAccount[i].getAccountNumber()==no){
                        cout<<"Enter the deposit amount:";cin>>value;
                        savingsAccount[i].deposit(value);
                     }
                }
                break;
                case 2:
                    cout<<"Enter your savingsAccount no: ";cin>>no;
                    for(i=0;i<noOfPeople;i++){
                        if(savingsAccount[i].getAccountNumber()==no){
                            cout<<"Enter the ammount to withdraw:";cin>>value;
                            savingsAccount[i].withdraw(value);
                        }
                    }
                    break;
                case 3:
                    cout<<"NAME\tA/C NO\tBALANCE\tINT\tCURR.BAL."<<endl ;
                    cout<<"........................................................"<<endl ;
                    for(i=0;i<noOfPeople;i++){
                        cout << savingsAccount[i].getName();
                        cout<<'\t';
                        cout << savingsAccount[i].getAccountNumber();
                        cout<<'\t';
                        cout<<savingsAccount[i].getBalance();
                        cout<<'\t';
                        cout<<savingsAccount[i].interest();
                        cout<<'\t';
                        cout<<savingsAccount[i].getBalance()+savingsAccount[i].interest();
                        cout<<endl;
                        
                    }
                    break;
            }
            
            for (int k=0;k<noOfPeople;k++){
                totalInerest= totalInerest + savingsAccount[k].interest();
            }
            cout<<setprecision(6)<<fixed;
            cout << "total inerest : "<<(double)totalInerest<<endl;
    }
        return 0;
}

