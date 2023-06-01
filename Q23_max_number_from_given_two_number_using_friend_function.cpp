// 23. Write a program to find the max number from given two numbers using friend function

#include<iostream>
using namespace std;
class h
{
	private:
		int a,b;
	public:
		friend void input();
		friend void output();
};

void input()
{
	h z;
	cout<<"Enter the value of a:- ";
	cin>>z.a;
	cout<<"Enter the value of b:- ";
	cin>>z.b;
}

void output()
{
	h z;
	int a,b;
	cout<<"Max is:- ";
	if(z.a>z.b)
	{
		cout<<z.a;
	}
	else
	{
		cout<<z.b;
	}
}

main()
{
	input();
	output();
}
