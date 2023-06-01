// 11. Write a program of find the simple interest using constructor with dynamic
// initialization. Make constructor like
// Interest (int principal, int year, int rate)
// Interest (int principal, int year, float rate =2.5)

#include<iostream>
using namespace std;
class interest
{
	public:
		int principal, year, rate, s;
		interest()
		{
			cout<<"Enter the value of principal:- ";
			cin>>principal;
			
			cout<<"Enter the value of year:- ";
			cin>>year;
			
			cout<<"Enter the value of rate:- ";
			cin>>rate;
			
			s= (principal*year*rate)/100;
			
			cout<<"\nsimple interest is:- "<<s;
		}
};

main()
{
	interest c=interest();
}
