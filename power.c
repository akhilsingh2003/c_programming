#include<stdio.h>
void main()
{
    int a,n;
    long long result=1;
    printf("Enter the Number :");
    scanf("%d",&a);
    printf("Enter the power: ");       
    scanf("%d",&n);
    while(n!=0)
    {
        result*=a;    
        --n;
    }    
    printf("answer=%lld",result);
    
}