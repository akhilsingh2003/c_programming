#include<stdio.h>
 
int main() {
   int i, n,m;
   int count = 1;
 scanf("%d",&m);
   for (i = 1; i<=m; i++)
    {
    
      for (j = 1; j <= i; j++)
       {
         printf("%d ", count % 2);
         count++;
       }
      printf("\n");
      if (i % 2 == 0)
         count = 1;
      else
         count = 0;
   }
   return(0);
}