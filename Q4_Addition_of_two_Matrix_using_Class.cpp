// 4. Write a program of Addition of two Matrix using Class.

#include<iostream>
using namespace std;
class matrix
{
	public:
		int a[2][3]={{1,2,3},{4,5,6}};
		int b[2][3]={{11,22,33},{44,55,56}};
		int c[2][3];
		int row,col;
};
main()
{
	matrix m;
	cout<<"Matrix 1"<<endl;
	for(m.row=0;m.row<2;m.row++)
	{
		for(m.col=0;m.col<3;m.col++)
		{
			cout<<" "<<m.a[m.row][m.col];
		}
		cout<<"\n";
	}
	cout<<"\nMatrix 2"<<endl;
	for(m.row=0;m.row<2;m.row++)
	{
		for(m.col=0;m.col<3;m.col++)
		{
			cout<<" "<<m.b[m.row][m.col];
		}
		cout<<"\n";
	}
	cout<<"\nAddition Matrix"<<endl;
	for(m.row=0;m.row<2;m.row++)
	{
		for(m.col=0;m.col<3;m.col++)
		{
			cout<<" ";
			m.c[m.row][m.col]= m.a[m.row][m.col]+m.b[m.row][m.col];
			cout<<m.c[m.row][m.col];	
		}
		cout<<"\n";
	}
}
