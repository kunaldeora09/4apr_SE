// 19. Looping Programs
// e. Write a program you have to print the Fibonacci series up to user given number

#include<stdio.h>    
main()    
{    
	int k=0,m=1,n,i,number;    
	printf("Enter the number of elements:- ");    
 	scanf("%d",&number);    
 	printf("\n%d %d",k,m);    
 	for(i=2;i<number;++i) 
 	{    
  		n=k+m;    
  		printf(" %d",n);    
  		k=m;    
  		m=n;    
 	} 
}    
