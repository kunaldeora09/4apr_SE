// 14. Write a program to Mathematic operation like Addition, Subtraction, Multiplication,
// Division Of two number using different parameters and Function Overloading.

#include<iostream>
using namespace std;
int sum(int a, int b, int c, int d, int e)
{
	return a+b+c+d+e;
}
int sum(int a, int b, int c, int d)
{
	return a-b-c-d;
}
int sum(int a, int b, int c)
{
	return a*b*c;
}
int sum(int a, int b)
{
	return a/b;
}
main()
{
	cout<<"Addition:- "<<sum(10,20,50,30,45);
	cout<<"\nSubtraction:- "<<sum(100,20,30,10);
	cout<<"\nMultiplication:- "<<sum(2,3,2);
	cout<<"\nDivision:- "<<sum(15,5);
}
