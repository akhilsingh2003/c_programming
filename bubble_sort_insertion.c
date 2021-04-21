#include<stdio.h>
void main()
{
     int A[1000],i,n,ele,pos;
    printf("Enter the size of the array - ");
    scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
    printf("Enter the array element - ");
    scanf("%d",&A[i]);
}
    printf("Enter the element you want to insert - ");
    scanf("%d",&ele);
    printf("\nenter the position - ");
    scanf("%d",&pos);
for(i=n;i>=pos;i--)
{ 
    A[i]=A[i-1];
}
    A[pos-1]=ele;
    n=n+1;

    printf("Array agter insertion\n");
    for(i=0;i<=n-1;i++)
{
    printf("%d\n",A[i]);
}
}