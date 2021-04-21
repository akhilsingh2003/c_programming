/*#include<stdio.h>
void main()
{
    int a=0xa12;
    printf("%d%x%o",a,a,a);
}
*/

/*#include<stdio.h>
void main()
{
    int i=2,j=2;
    while(i+1?-i:j++)
    printf("%d",i);
    
}*/

#include<stdio.h>
void main(){
    int x,y,z,k=10;
    k+=(x=5,y=x+2,z=x+y);
    printf("%d%d%d%d",x,y,z,k);
}