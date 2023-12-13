#include<iostream>
using namespace std;
class ATM{
	private:
		long double balance;
	public:
	    long double getBalance(){
	    	return balance;
		}
		void deposit(double amount){
		if (amount>0){
			balance+=amount;
			cout<<"Deposit Succesfull. Your Current Balance is: "<<balance<<endl;
		}
		                  
		else{
			cout<<"Deposit Unsuccesfull"<<endl;
		}
	}
		
		void withdraw(double amount){
			if(amount<=balance){
				balance-=amount;
				cout<<"Withdrawl Successfull. Your Current Balance is: "<<balance<<endl;
			}
			else{
				cout<<"Insufficient Balance"<<endl;
			}
		}
		
		ATM(long double a){
			this->balance=a;
		}
		
};
int main(){
	ATM TestAccount(10000);
	cout << "Welcome to the Bank Al-Habib\n";
	cout<<""<<endl;
	string username;
	int pass;
	cout<<"Enter Username and Password"<<endl;
	cin>>username;
	cin>>pass;
	if(username=="Rayyan"&&pass==1221){
	
    cout << "Welcome to the Bank Al-Habib\n";
    cout << "1. Deposit\n";
    cout << "2. Withdraw\n";
    cout << "3. Check Balance\n";
    cout << "4. Exit\n";
 	while(true){
	 
	 int option;
	 int amount;
	 
	 cout<<"Select Option"<<endl;
	 cin>>option;
	 switch(option){
	 	
	case 1:
		cout<<"Enter Amount to Deposit"<<endl;
		cin>>amount;
		TestAccount.deposit(amount);
		break;
		
	case 2:
		cout<<"Enter Amount to Withdraw"<<endl;
		cin>>amount;
		TestAccount.withdraw(amount);
		break;
	
	case 3:
		cout<<"Your Current Balance is: "<<TestAccount.getBalance()<<endl;
		break;
	
	case 4:
		cout<<"Thanks for choosing Bank Al-Habib"<<endl;
		return 0;
		break;
	default:
		cout<<"Invalid Option"<<endl;
		
	 } 
}
}
else{
	cout<<"Incorrect Credentials"<<endl;
}

}
