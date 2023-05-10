// A2. Write a program to find out the max number from given 10 elements of array.

#include<stdio.h> 
main()
{
	int arr[10],i,max;
	for(i=0;i<10;i++)
	{
    	printf("Enter no. %d:- ",i+1);
    	scanf("%d",&arr[i]);
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("Largest element present in given array:- %d\n",max);
}
