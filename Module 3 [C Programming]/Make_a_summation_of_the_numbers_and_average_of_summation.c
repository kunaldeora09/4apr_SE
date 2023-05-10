// A1. Write a program to enter a ten elements using Array and make a summation of the numbers
// and average of summation

#include<stdio.h> 
main()
{
	int arr[10],i;
	float sum=0,avg;
	for(i=0;i<10;i++)
	{
    	printf("Enter no. %d:- ",i+1);
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
        sum=sum+arr[i];   
	}
	printf("Sum:- %.0f\n",sum);
	avg=sum/10;
	printf("Average:- %.2f",avg);
}
