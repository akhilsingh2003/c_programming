#include<stdio.h>
int main()
{
   int a,c;
   printf("Enter Value:");
   scanf("%d",&a);
 c=++a + ++a + ++a + ++a;
    printf("Value of c=%d",c);
   return 0; 
}