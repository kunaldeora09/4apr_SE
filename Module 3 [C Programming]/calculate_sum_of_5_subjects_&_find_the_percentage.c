// 8. Write a program to calculate sum of 5 subjects & find the percentage. Subject
// marks entered by user.

#include<stdio.h>
main()
{
	int a,b,c,d,e,sum,total=500;
	float p;
	printf("Enter your physics subject marks:- ");
	scanf("%d", &a);
	printf("Enter your chemistry subject marks:- ");
	scanf("%d", &b);
	printf("Enter your biology subject marks:- ");
	scanf("%d", &c);
	printf("Enter your mathmatics subject marks:- ");
	scanf("%d", &d);
	printf("Enter your computer subject marks:- ");
	scanf("%d", &e);
	sum= a+b+c+d+e;
	printf("Total Marks= %d\n",sum);
	p= sum*100/total;
	printf("Percentage is:- %f",p);
}
