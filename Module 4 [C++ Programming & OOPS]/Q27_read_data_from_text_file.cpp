// 27. Write a program to read data from text file.

#include<iostream>
#include<fstream>
using namespace std;
main()
{
	string data;
	ifstream file1;
	file1.open("test.txt");
	file1>>data;
	cout<<data;	
}

