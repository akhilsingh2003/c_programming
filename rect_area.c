#include<stdio.h>
void main()
{
    int l,b,area,perimeter;
    printf("Enter the length :");
    scanf("%d",&l);
    printf("Enter the breadth :");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b) ;
    printf("Area=%d\n",area);
    printf("Perimter=%d\n",perimeter);
}