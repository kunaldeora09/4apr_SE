//1. Write a program of Fibonacci and factorial using Class.

#include<iostream>
using namespace std;
class factorial
{
	public:
		int a,b,f=1;
		int w=0,q=1,k;
		void input()
		{
			cout<<"Enter a number to find factorial and fibanocci:- ";
			cin>>a;
			for(b=1;b<=a;b++)
			{
				f=f*b;
			}
		}
			void output()
			{
				cout<<"Factorial is:- "<<f<<endl;
				cout<<"Fibanocci:- ";
				for(b=1;b<=a;b++)
				{
					cout<<" "<<k;
					k=w+q;
					w=q;
					q=k;
				}
			}
};

main()
{
	factorial d;
	d.input();
	d.output();
}
