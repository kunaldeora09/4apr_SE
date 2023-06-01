// 31. Write a program of to sort the array using templates.

#include<iostream>
using namespace std;
template <class w>

void sort(w n[5])
{
	int i,j,m;
}

main()
{
	int n[5];
	int i,j,m;
	for(i=0;i<5;i++)
	{
		cout<<"Enter the number "<<i+1<<":- ";
		cin>>n[i];
	}
	for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(n[j]<n[i])
            {
                m=n[i];
                n[i]=n[j];
                n[j]=m;
            }
        }
    }
    cout<<"\n";
    cout<<"Elements of array in sorted order:- \n";
    for(i=0;i<5;i++)
    {
    	cout<<"\n"<<n[i];
    }
}
