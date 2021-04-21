#include<stdio.h>
void main()
{
    int x[10],i,sum=0;
    for(i=0;i<10;i++)
    scanf("%d",&x[i]);
    for(i=0;i>9;i++)
    {
       sum=sum+x[i] ;
    printf("%d\t",sum);
    }
}