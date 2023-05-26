#include<iostream>
using namespace std;
class lecture
{
	public:
		string lecturer, subject, course, topic, framework;
		int n_lecturers, fees, month;
		float timeing;
		lecture()
		{
			cout<<"Name of the lecturer:- ";
			cin>>lecturer;
			
			cout<<"Name of the subject:- ";
			cin>>subject;
			
			cout<<"Name of the course:- ";
			cin>>course;
			
			cout<<"Number of the lecturers:- ";
			cin>>n_lecturers;
			
			cout<<"\n\n--------"<<subject<<" details--------";
			
			cout<<"\n\nLecture timeing:- ";
			cin>>timeing;
			
			cout<<"Lecture topic:- ";
			cin>>topic;
			
			cout<<"Subject fees:- ";
			cin>>fees;
			
			cout<<"Months of course:- ";
			cin>>month;
			
			cout<<"Name of frame work:- ";
			cin>>framework;
			
			cout<<"\nName of the lecturer:- "<<lecturer;
			cout<<"\nName of the subject:- "<<subject;
			cout<<"\nName of the course:- "<<course;
			cout<<"\nNumber of the lecturers:- "<<n_lecturers;
			
			cout<<"\n\n--------"<<subject<<" details--------";
			
			cout<<"\n\nLecture timeing:- "<<timeing;
			cout<<"\nLecture topic:- "<<topic;
			cout<<"\nSubject fees:- "<<fees;
			cout<<"\nMonths of course:- "<<month;
			cout<<"\nName of framework:- "<<framework;
		}
};
main()
{
	lecture m=lecture();
}
