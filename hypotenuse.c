#include<stdio.h>
#include<math.h>
void main()       //h=hypotenuse,b=base, p=perpendicular
    {
      float h,b,p;
      printf("Enter the base :");
      scanf("%f",&b);
      printf("Enter the perpendicular :");
      scanf("%f",&p);
      h=sqrt(b*b + p*p);
      printf("Hypotenuse=%f",h);
    }
