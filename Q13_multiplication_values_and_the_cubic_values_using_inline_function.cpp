// 13. Write a program to find the multiplication values and the cubic values using inline function.

#include<iostream>
using namespace std;
inline int mul(int a, int b)
{
	int r=a*b;
	return r;	
}
inline int cube(int x)
{
	int result=x*x*x;
	return result;
}
main()
{
	int x=2;
	int a=3, b=3;
	cout<<"Multiplication is:- "<<mul(a,b);
	cout<<"\nCube is:- "<<cube(x);
}
