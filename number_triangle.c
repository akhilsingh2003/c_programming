#include<stdio.h>
void main()
{
  int l,n,m;
  printf("Enter thr no. of lines for pattern =");
  scanf("%d",&m);
  for(l=1;l<=m;l++)
  {
      for(n=1;n<=l;n++)
      {
          printf("%d",n);
      }
      printf("\n");
  }   
}