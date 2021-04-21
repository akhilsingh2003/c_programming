#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,k;
    int lines;
    scanf("%d",&lines);
    scanf("%d",&k);

    for(n=1;n<=lines;n++)
    {
        for(m=1;m<=lines-n;m++)
        {
           printf(" ");                          
        }
        for(m=1;m<=2*n-1;m++) 
         {
             if(m==1 || m==2*n-1|| n==k)
             printf("*");
             else
              printf(" ");
         }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}