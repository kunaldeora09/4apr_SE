// 20.10 Pyramid Programs

#include<stdio.h>
main()
{
  int i,j,k;
  k=1;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf(" %d",k++);
    }
    printf("\n");
  }
}
