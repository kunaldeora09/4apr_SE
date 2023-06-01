// 19. Create a class person having members name and age. Derive a class student having member
// percentage. Derive another class teacher having member salary. Write necessary member function
// to initialize, read and write data. Write also Main function (Multiple Inheritance).

#include<iostream>
using namespace std;
class person
{
	public:
		void per()
		{
			cout<<"Name = Kunal";
			cout<<"\nAge = 17";
		}
};

class student
{
	public:
		void stu()
		{
			cout<<"\nPercentage = 87%";
		}
};

class teacher: public person, public student
{
	public:
		void sal()
		{
			cout<<"\nSalary = 30,000rs";
		}
};

main()
{
	teacher obj;
	obj.per();
	obj.stu();
	obj.sal();
}
