//write a c program to count the the digits of given intger value

#include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter the number ");
    scanf("%d",&num);
    while(num!=0)
    {
        num =num/10;
        count++;
    }
    printf("number of digits in given number :%d",count);
}