#include<stdio.h>
int maximum_minimum(int , int)
void main()
{
    int a,b;
      printf("enter 1st num. -  ");
      scanf("%d",&a);
      printf("\nenter 2nd value - ",);
      scanf("%d",&b);
    if(maximum_minimum == 1)
      {
          printf("maximun is %d and minimun is %d ",a,b);
      }
      else
      {
          printf("maximum is %d and miminum is %d ",b,a); 
      }

}

int maximun_minimum(int x, int y)
{
    int x_max=0;
    {
    if(x>y)
     x_max=1;
    }
    else 
    {
     x_max=0;
    }

    return x_max;  
}