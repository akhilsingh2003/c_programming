#include<stdio.h>
void main()
{
  int p,n,m,k=1;
  scanf("%d",&m);
  for(p=1;p<=m;p++)
  {
      for(n=1;n<=p;n++)
      {
          printf("%d\t",k++);
      }
     printf("\n"); 
  }   
}