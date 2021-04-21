#include<stdio.h>
void main()
{
 int A[1000],n,i,pos;
 printf("Enter size ");
 scanf("%d",&n);
 for(i=0;i<=n-1;i++)
 {
     printf("Enter the element at %d ",i);
     scanf("%d",&A[i]);
 }
printf("enter the position you want to delete ");
scanf("%d",&pos);
for ( i = pos; i <= n-2; i++)
{
  A[i]=A[i+1];
  n=n-1;  /* code */
}
printf("Array after deletion of element : ");
for ( i = 0; i <n-1; i++)
{
  printf("%d ",A[i]);  
}
}