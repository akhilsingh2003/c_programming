#include<stdio.h>
void main()
{
    int n,i,max,M[n];
    printf("Enter the length of array: ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        printf("Enter the element :");
    
        scanf("%d",&M[i]);
    }     
    max=M[0];
    for(i=0;i<=n-1;i++)
    {
        if(M[i]<max)
        max=M[i];
    }
    printf("Largest element is array : %d",max);
    
}