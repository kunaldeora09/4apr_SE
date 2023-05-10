// 9. Write a Program to show swap of two No's without using third variable.
#include<stdio.h>
main()
{
	int x, y;
	printf("Input value for x & y: \n");
	scanf("%d %d",&x,&y);
	printf("Before swapping the value of x & y: %d %d",x,y);
		x=x+y;
		y=x-y;
		x=x-y;	
	printf("\nAfter swapping the value of x & y: %d %d",x,y);
}
