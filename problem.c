#include <stdio.h>
void main()
{
	int a;
	char c;
	scanf("%d",&a);
	if(a%2==0)
	c='E';
	else
	c='O';	
	switch(c)
	{
	   case 'O':
	   printf("Weird\n");
	   break;
	  case 'E':
	  if(a>=2 &&a<=5)
	  printf("Not Weird\n");
	  else if(a>=6 && a<=20)
	  printf("Weird\n");
	  else if (a<20)
	  printf("Not Weird\n");
      default:
      printf("No condition matched"); 
	}
	

}