#include<stdio.h>
#define pie 3.14 
void main()
{
   int r;
    float area,perimeter ;

  printf("enter the radius :");
  scanf("%d",&r);
  area=pie*r*r ;
  perimeter=2*pie*r ;
  printf("area=%f\n",area);
  printf("perimeter=%f\n",perimeter);
  
}