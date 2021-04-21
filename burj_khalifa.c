#include <stdio.h>
int main()
{
    int n,i,j,l,m,a=0,b,c;
    scanf("%d",&n);
    int k[n];
    c=n;
    while(c!=0)
    {
    	k[a]=c%2;
		c=c/2;
		a++;	
	}
   	for(i=0;i<=n;i++)
   	{
   		l=0;
   		m=i;
   		do
   		{
   			k[l]=m%2;
   			m=m/2;
			l++;
		}while(m!=0);
		for(b=a-l;b>=1;b--)
		{
			printf(" ");
		}
		for(j=l-1;j>=0;j--)
		{
			printf("%d",k[j]);
		}
		printf("\n");
	}
    return 0;
}