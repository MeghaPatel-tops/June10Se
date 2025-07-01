#include<iostream>
using namespace std;
class BankAcc{
	  char name[20];
	  int balance,amt;
	  
	  public:
	  	void getData(){
	  		cout<<"\n enter name and balance";
	  		cin>>name>>balance;
		  }
		void deposite(){
			cout<<"\n enter depo amt";
			cin>>amt;
			balance+=amt;
		}  
			void widtrow(){
			cout<<"\n enter depo amt";
			cin>>amt;
			balance-=amt;
		}  
		void checkBlance(){
			cout<<"\n balance="<<balance;
		}
};
main(){
	BankAcc b1;
	b1.getData();
	b1.deposite();
	b1.checkBlance();
	b1.widtrow();
	b1.checkBlance();
}
