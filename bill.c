#include<stdio.h>
int percentage(int,int);

void main()
{
    int charge,tax=20,tip=15,t1,t2;
    printf("meal_cost: ");
    scanf("%d",&charge);
    t1=percentage(charge,tax);
    t2=percentage(charge+t1,tip);
    printf("total cost : %d",(t1+t2+charge)); 
    
}
int percentage(int x,int y)
{
    int p=1;
    p=(x*y)/100;
    return p;
}