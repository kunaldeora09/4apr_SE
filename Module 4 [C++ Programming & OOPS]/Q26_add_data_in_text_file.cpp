// 26. Write a program to add data in text File.

#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream file1;
	file1.open("text.txt");
	string data;
	cout<<"enter data :-";
	cin>>data;
	file1<<data;
}
