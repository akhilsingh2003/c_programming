#include<stdio.h>
int main()
{
 int age,c;
 printf("Enter your age\n");
 scanf("%d",&age);
 printf("YOu have entered %d as your age",age);
 c=18-age;

 if(age>=18)
 {
     printf("\nYou can vote");

 }
 else
 {
     printf("\nYou cannot vote");
     printf("\nyou can vote after %d years",c);
 }
    return 0;
}
