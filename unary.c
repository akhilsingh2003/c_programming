#include<stdio.h>
 int main (void)
{ // unary increment operator ++ 

 int a=2,y=3,z;
 y=++a;  //pre increment operator  //increment first and then assing
 z=a++;  //post ,,  ,,,    ,,        //assign the previous value first, then increment
printf("a=%d y=%d z=%d",a,y,z);
return 0;
}