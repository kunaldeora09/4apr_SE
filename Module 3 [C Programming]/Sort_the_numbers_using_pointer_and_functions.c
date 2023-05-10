// A32. Write a program to sort the numbers using pointer and functions.

#include<stdio.h>
void sort(int *g, int n) 
{
    int i, j, z;
    for(i = 0; i < n-1; i++) 
	{
        for(j = 0; j < n-i-1; j++) 
		{
        	
            if(*(g+j) > *(g+j+1)) 
			{
                z = *(g+j);
                *(g+j) = *(g+j+1);
                *(g+j+1) = z;
            }
        }
    }
}
main() 
{
    int i, n, arr[100], *g;
    printf("Enter the number of elements:- ");
    scanf("%d", &n);
    printf("Enter %d elements:-\n", n);
    for(i = 0; i < n; i++) 
	{
        scanf("%d", &arr[i]);
    }
    g = arr; 
    sort(g, n); 
    printf("Sorted array:- ");
    for(i = 0; i < n; i++) 
	{
        printf("%d ", *(g+i));
    }   
}
