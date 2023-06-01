// 3O. Write a program of to swap the two values using templates.

#include<iostream>
using namespace std;
template <class T>
void swapping(T &a, T &b)
{
	T t=a;
	a=b;
	b=t;
}
main()
{
	int x=10, y=20;
	cout<<"Before swap x:- "<<x<<"\ny:-"<<y<<endl;
	swapping(x,y);
	cout<<"After swap x:- "<<x<<"\ny:-"<<y<<endl;
}
