// 15. Write a program user enter the 5 subjects mark. You have to make a total and find the percentage.
// Percentage > 75 you have to print “Distinction”
// Percentage > 60 and percentage <= 75 you have to print “Firstclass”
// Percentage >50 and percentage <= 60 you have to print “Second class” 
// Percentage > 35 and percentage <= 50 you have to print “Pass class” Otherwise print “Fail”.

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
	printf("Percentage is:- %f\n",p);
	if(p>75)
	{
		printf("Distinction");	
	}
	else if(p>60)
	{
		printf("First Class");
	}
	else if(p>50)
	{
		printf("Second Class");
	}
	else if(p>35)
	{
		printf("Pass Class");
	}
	else
	{
		printf("Fail");
	}
}
