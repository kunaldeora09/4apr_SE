// 6. Define a class to represent a book shop Include the following members Data Members
// Name of Author
// Name of Title
// Name of Price
// Name Publisher
// Member Functions
// To Assign Values
// To Display Values

#include<iostream>
using namespace std;
class book
{
	public:
	string author,title,publisher;
	int price;
	void inputdata()
	{
		cout<<"Name of author:- ";
		cin>>author;
		cout<<"Name of title:- ";
		cin>>title;
		cout<<"Name of price:- ";
		cin>>price;
		cout<<"Name of publisher:- ";
		cin>>publisher;
	}
	void displaydata()
	{
		cout<<"\nName of author:- "<<author;
		cout<<"\nName of title:- "<<title;
		cout<<"\nName of price:- "<<price;
		cout<<"\nName of publisher:- "<<publisher;
	}
};
main()
{
	book k;
	k.inputdata();
	k.displaydata();
}
