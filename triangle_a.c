#include<stdio.h>
void main()
{
    int n, m ,lines,k=65;     
    lines =4;
    for(n=1;n<=lines;n++)
    {
        for(m=1;m<=n;m++)
        {
            printf("%c ",k++);
        }
        printf("\n");
    }
}