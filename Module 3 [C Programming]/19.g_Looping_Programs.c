// 19. Looping Programs
// g. Write a program to print the number in reverse order.

#include<stdio.h>  
main()    
{    
	int m, r=0, n;    
	printf("Enter more than one number:- ");    
  	scanf("%d", &m);    
  	while(m!=0)    
  	{    
   		n=m%10;    
    	r=r*10+n;    
    	m/=10;    
  	}    
	printf("Reversed Number: %d",r);  
}   
