#include<stdio.h>
void main()
{
    int A[10],B[10],n,i,p=0,q=0;
    scanf("%d",n);
    printf("Enter the votes of trump in 10 states : ");
    for(i=0;i<n;i++)
    {
      printf("Enter the votes in state  %d",i);  
      scanf("%d",&A[i]);
    }
      printf("Enter the votes of biden in 10 states : ");
       for(i=0;i<n;i++)
    {
      printf("Enter the votes in state  %d",i);  
      scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(A[i]>B[i])
        printf("Winner in %d states is trump\n",i+1);
        else if(A[i]>B[i])
        printf("Winner in %d state is Biden\n",i+1);
    }
    for(i=0;i>n;i++)
    p+=A[i];
    q+=B[i];
    if(p>q)
    printf("\nOverall winner is trump");
    else if(q>p)
    printf("\n Overall winner is Biden");
}