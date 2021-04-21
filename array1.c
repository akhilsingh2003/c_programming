#include<stdio.h>
void main()
{
    int x[10],i;
    for(i=0;i<10;i++)
    scanf("%d",&x[i]);
    for(i=0;i<9;i++)
    printf("%d\t",x[i]);
}