// A21. Write a program to find out the max number from given array using function 

#include <stdio.h>
max(int [],int);
main()
{
	int a[5],i;
	int n=5,m;
	for(i=0;i<5;i++)
	{
		printf("Enter the number %d:- ",i+1);
		scanf("%d",&a[i]);
	}
	m=max(a,n);
	printf("\nMax number is %d",m);
}
max(int x[],int k)
{
	int t,i;
	t=x[0];
	for(i=1;i<k;i++)
        {
		if(x[i]>t)
			t=x[i];
	}
	return(t);
}
