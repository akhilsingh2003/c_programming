#include<stdio.h>
void main()
    {
     for(int i=2;i;i++)
     {
         i=printf("%d",i)-2;
         printf("%d",i);
     }
    }
