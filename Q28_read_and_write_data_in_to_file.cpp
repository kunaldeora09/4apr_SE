// 28. Write a program to read and write data in to file.

#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream file1;
	file1.open("test.txt");
	string data;
	cout<<"Enter data:- ";
	cin>>data;
	file1<<data;
	cout<<data;	
}
