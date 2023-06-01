// 9. Write a program of to display in this format using class
// Roll No	Sub1 	Sub2 	Sub3 	Total 	Percentage
// 	1 		30 		25	 	45 		100
// 	2 		25 		20 		25		70
// 	3 		20 		15 		35 		70
// 	4 		35 		30 		40 		105

#include<iostream>
using namespace std;
class sub
{
	public:
	int no[7];
	int sub1[7];
	int sub2[7];
	int sub3[7];
	int i;
	void input()
	{
		cout<<"\t\tRoll no\t\tSub1\t\tSub2\t\tSub3\t\tTotal\t\tPercentage\n";
	}
	
	void output()
	{
		cout<<"\t\tRoll no\t\tSub1\t\tSub2\t\tSub3\t\tTotal\t\tPercentage\n";
	}
	
	void now()
	{
		for(i=0;i<6;i++)
		{
			cin>>no[i];
		}
	}
	
	void no_n()
	{
		for(i=0;i<6;i++)
		{
			cout<<"\t\t";
			cout<<no[i];
		}
	}
	
	void add()
	{
		for(i=0;i<6;i++)
		{
			cin>>sub1[i];
		}
	}
	
	void asd()
	{
		for(i=0;i<6;i++)
		{
			cout<<"\t\t";
			cout<<sub1[i];
		}
	}
	
	void kkk()
	{
		for(i=0;i<6;i++)
		{
			cin>>sub2[i];
		}
	}
	
	void kkk2()
	{
		for(i=0;i<6;i++)
		{
			cout<<"\t\t";
			cout<<sub2[i];
		}
	}
	
	void dfg()
	{
		for(i=0;i<6;i++)
		{
			cin>>sub3[i];
		}
	}
	
	void asd5()
	{
		for(i=0;i<6;i++)
		{
			cout<<"\t\t";
			cout<<sub3[i];
		}
	}
};

main()
{
	sub x;
	x.input();
	
	x.now();
	cout<<"\n";
	
	x.add();
	cout<<"\n";
	
	x.kkk();
	cout<<"\n";
	
	x.dfg();
	cout<<"\n";
	
	x.output();
	
	x.no_n();
	cout<<"\n";
	
	x.asd();
	cout<<"\n";
	
	x.kkk2();
	cout<<"\n";
	
	x.asd5();
	cout<<"\n";
}
