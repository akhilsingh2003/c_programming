//write a c program  to find the factorial of given number
//using while loop:
#include<stdio.h>
void main()
{
    int n,fact=1;
    printf("Enter the number ");
    scanf("%d",&n);
    while(n>0)
    {
        fact=fact*n;
        n--;
    }
    printf("Factorial of number %d",fact);
}

