//20.4 Pyramid Programs

#include<stdio.h>
main()
{
	int m,n,t;
	for(m=5;m>=1;m--)
	{
		for(n=1;n<m;n++)
		{
			printf(" ");
		}
		for(t=5;t>=m;t--)
		{
			printf("*");
		}
		printf("\n");
	}
}
