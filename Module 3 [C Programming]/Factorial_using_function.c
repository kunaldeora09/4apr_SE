// A19. Write a program to find out the factorial of given number using function

#include<stdio.h>
#include<math.h>
main()
{
    printf("Enter a Number to Find Factorial:- ");
    printf("Factorial of a Given Number is:- %d\n",fact());
}
int fact()
{
    int i,fact=1,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fact=fact*i;
    }
    return fact;
}
