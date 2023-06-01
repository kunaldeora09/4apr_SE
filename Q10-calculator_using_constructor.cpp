// 10. Write a program of Addition, Subtraction, Division, Multiplication using
// constructor.

#include<iostream>
using namespace std;
class cal
{
	public:
		int a,b;
		cal()
		{
			cout<<"a = ";
			cin>>a;
			cout<<"b = ";
			cin>>b;
			cout<<"\nAddition = "<<a+b;
			cout<<"\nSubtraction = "<<a-b;
			cout<<"\nmultiplication = "<<a*b;
			cout<<"\ndivision = "<<a/b;
		}
};
main()
{
	cal c=cal();
}
