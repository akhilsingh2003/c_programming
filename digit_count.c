//write a c program to count the the digits of given intger value


/*Algorith;
Step 1: start
step 2: declare interger num and count
step 3: read the value of num and num
step 4: set count =0
step 5: caluate the number of digit  num=num/10
step 6: while  num is not equal to 0 the
step 7: print the output
step 8: Stop
*/
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