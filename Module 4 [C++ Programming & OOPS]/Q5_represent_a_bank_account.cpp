// 5. Define a class to represent a bank account. Include the following members Data Members
// Name of the depositor
// Account Number
// Type of Account
// Balance amount in the account
// Member Functions
// To assign values
// To deposited an amount
// To withdraw an amount after checking balance
// To display name and balance

#include<iostream>
using namespace std;
class bank
{
	public:
		string depositor; // data member
		int no;
		string acc;
		int bal,dep,withdraw;
		void inputdata() // member function
		{
			cout<<"Enter Name of the depositor:- ";
			cin>>depositor;
			cout<<"Enter Account number:- ";
			cin>>no;
			cout<<"Enter Type of account:- ";
			cin>>acc;
			cout<<"Enter Balance in account:- ";
			cin>>bal;
			cout<<"Deposited amount:- ";
			cin>>dep;
		}
		void displaydata()
		{
			cout<<"\nName of the depositor:- "<<depositor;
			cout<<"\nAccount number:- "<<no;
			cout<<"\nTypes of Account:- "<<acc;
			cout<<"\nBalance in account:- "<<bal;
			cout<<"\nDeposited in account:- "<<dep;
			cout<<"\nTotal amount in acconut:- "<<bal+dep;
		}
		void with()
		{
			cout<<"\n\nWithdraw an amount:- ";
			cin>>withdraw;
		}
		void output()
		{
			cout<<"\nName of the depositor:- "<<depositor;
			cout<<"\nWithdraw amount:- "<<withdraw;
			cout<<"\nTotal amount in account:- "<<bal+dep-withdraw;
			
		}
};
main()
{
	bank k;
	k.inputdata();
	k.displaydata();
	k.with();
	k.output();
}
