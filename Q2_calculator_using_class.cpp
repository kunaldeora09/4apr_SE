// 2. Write a program to Addition, Subtraction, Multiplication, and Division of two numbers
// using Class.

#include<iostream>
using namespace std;
class calculator
{
	public:
		int a;
		int b;
		void inputdata()
		{
			cout<<"Enter the value of a:- ";
			cin>>a;
			cout<<"Enter the value of b:- ";
			cin>>b;
		}
		void displaydata()
		{
			cout<<"\nAddition is:- "<<a+b;
			cout<<"\nSubtraction is:- "<<a-b;
			cout<<"\nMultiplication is:- "<<a*b;
			cout<<"\nDivision is:- "<<a/b;
		}
};
main()
{
	calculator s;
	s.inputdata();
	s.displaydata();
}
