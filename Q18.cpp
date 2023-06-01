// 18. Assume a class cricketer is declared. Declare a derived class batsman from cricketer
// Data member of batsman. Total runs, Average runs and best performance. Member
// functions input data, calculate average runs, Display data. (Single Inheritance)

#include<iostream>
using namespace std;
class cricketer
{
	public:
		void cri()
		{
			cout<<"Total runs:- 150";
			cout<<"\nAverage runs:- 15";
		}
};
class batsman: public cricketer
{
	public:
		void bat()
		{
			cout<<"\nBest performance:- MS Dhoni";
		}
};
main()
{
	batsman s;
	s.cri();
	s.bat();
}
