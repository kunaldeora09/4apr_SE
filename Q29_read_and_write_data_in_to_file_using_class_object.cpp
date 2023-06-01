// 29. Write a Program to read and write data into file using class Object

#include<iostream>
#include<fstream>
using namespace std;
class kunal
{   
	public:
		string data;
		void sa()
		{
			ofstream file1;
			file1.open("test.txt");
			
			cout<<"Enter data:- ";
			cin>>data;
		}
		void qw()
		{
			cout<<data;
		}
};
main()
{
	kunal s;
	s.sa();
	s.qw();
}
