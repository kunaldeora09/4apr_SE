// 20.5 Pyramid Programs

#include<stdio.h>
main()
{
  int m,n,k;
  for(m=1;m<=5;m++)
  {
    for(n=5;n>=1;n--)
    {
      if(n<=m)
        printf("%d",n);
      else
        printf(" ");
    } 
    printf("\n");
  }
}
