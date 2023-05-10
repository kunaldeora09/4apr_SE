// 18. Write a program of to find out the Area of Triangle, Rectangle and Circle using If Condition. (Must Be
// Menu Driven)

#include<stdio.h>
main()
{
	int choice;
   printf("Enter\n 1 to find area of Triangle\n 2 for finding area of ractangle\n 3 for finding area of Circle\n");
   scanf("%d",&choice);
   if(choice==1)
   {
		float b, h, area;
		printf("Enter a two numbers\n");
		scanf("%f %f", &b, &h);
		area = b*h/2;
		printf("area of triangle = %f", area);
	}
	else if(choice==2)
	{
		int w,l, area;
		printf("Enter a two integer numbers\n");
		scanf("%d %d", &w,&l);
		area = w*l;
		printf("area of rectangle = %d", area);
	}
	else if(choice==3)
	{
		int r, area;
		printf("Enter a integer number\n");
		scanf("%d", &r);
		area = 3.14*r*r;
		printf("area of circle = %d", area);
	}
	else
	{
		printf("Invelid input! Please enter number between 1-3.");
	}
}
