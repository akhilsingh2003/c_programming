#include<stdio.h>
void main()
{
int a,b,c,d,e;
puts("Enter the Values of a,b and c :");
scanf("%d%d%d",&a,&b,&c);
d=a>b ? a: b;
e=d>c?d:c;
printf("Greater Number=%d",e);
}