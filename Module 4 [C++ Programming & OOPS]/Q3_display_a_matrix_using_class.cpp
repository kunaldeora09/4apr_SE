// 3. Write a program of to display a matrix using class.

#include<iostream>
using namespace std;
class matrix
{
	public:
		int a[2][3]={{1,2,3},{4,5,6}};
		int row,col;
};
main()
{
	matrix m;
	cout<<"Matrix"<<endl;
	for(m.row=0;m.row<2;m.row++)
	{
		for(m.col=0;m.col<3;m.col++)
		{
			cout<<" "<<m.a[m.row][m.col];
		}
		cout<<"\n";
	}
}
