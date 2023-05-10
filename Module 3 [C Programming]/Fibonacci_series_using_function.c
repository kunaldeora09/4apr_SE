// A20. Write a oprogram to print the Fibonacci series using function

#include<stdio.h>
void fibonacciSeries(int n)
{
   int a=0, b=1, c,i;
   for(i=0; i<n; i++)
   {
     printf("%d ", a);
     c = a+b;
     a = b;
     b = c;
   }
}
main()
{
   int term;
   printf("Enter the number:- ");
   scanf("%d", &term);
   printf("The fibonacci series is:-\n");
   fibonacciSeries(term);
}
