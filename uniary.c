#include<stdio.h>
 int main (void)
{ // unary increment operator ++ 

 int a=5,y,z;
 y=++a;  //pre increment operator  //increment first and then assing
 z=a++;  //post ,,  ,,,    ,,        //assign the previous value first, then increment
printf("a=%d y=%d z=%d",y,z,a);
return 0;
}