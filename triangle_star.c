#include<stdio.h>
void main()
{
    int n,m;
    int lines=10;
    for(n=1;n<=lines;n++)
    {
        for(m=1;m<=lines-n;m++)
        {
           printf(" ");
        }
        for(m=1;m<=2*n-1;m++) 
     
        printf("*");
        printf("\n");
    }
} 