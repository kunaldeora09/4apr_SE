// 19. Looping Programs
// i. Write a program make a summation of given number.

#include<stdio.h>
main()
{
   int n,t,s=0,r;
   printf("Enter more than one number:- ");
   scanf("%d",&n);
   t=n;
   while(t!= 0)
   {
      r=t%10;
      s=s+r;
      t=t/10;
   }
   printf("Summation of %d = %d\n",n,s);
}
