#include<stdio.h>
int main()
{
    int n,r,binary=0,i=1;
    printf("Enter the number :");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        binary=binary+(r*i);
        i=i*10;
    }
    printf(" binary number=%d",binary);
  return 0 ;
}