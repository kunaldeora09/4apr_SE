// 13. Write a program to find the Max number from the given three number using
// Nested If.

#include<stdio.h>
main()
{
	int a,b,c;
	printf(" Enter a three numbers:-\n");
	scanf("%d %d %d",&a, &b, &c);
	if(a>b && a>c)
		{
			printf("max is %d",a);
		}
	else if(b>a && b>c)
	{
		printf("%d is max",b);
	}
	else{
		printf("%d is max", c);
	}
}
