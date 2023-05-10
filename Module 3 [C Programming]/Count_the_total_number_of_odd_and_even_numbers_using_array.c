//12. Write a program to enter a ten elements using Array and find out the to count the total
// number of odd and even numbers.

#include<stdio.h>
main()
{
	int m[10],i,even=0,odd=0;
	for(i=0;i<10;i++)
	{
		printf("Enter element %d:- ",i+1);
		scanf("%d", &m[i]);
	}
	for(i=0;i<10;i++)
    {
        if(m[i]%2==0)
        {
        	even++;
    	}
        else
        {
        	odd++; 
		}
    }
    printf("even numbers in array: %d",even);
    printf("\nodd numbers in array: %d",odd);
}
