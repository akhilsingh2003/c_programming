#include<stdio.h>
int main()
{
  int a,b,swap;
  printf("Enter the values of a :");
  scanf("%d",&a);
  printf("Enter the values of b :");
  scanf("%d",&b);
  printf("a=%d b=%d",a,b);
  swap=a;
  a=b;
  b=swap;
  printf("\nValues after swapping:");
  printf("a=%d  b=%d",a,b);

  return 0;
}