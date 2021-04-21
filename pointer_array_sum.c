#include<stdio.h>
int main()
{
   int arr[5];
   int i,sum=0;
   int *a;

   printf("\nEnter array elements (5 integer values):");
   for(i=0;i<5;i++)
      scanf("%d",&arr[i]);

    a=arr;

   for(i=0;i<5;i++) 
   {
    
      sum = sum + *a;
      a++;
   }

   printf("\nThe sum is: %d",sum);
}