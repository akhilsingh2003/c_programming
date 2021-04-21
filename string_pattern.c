#include<stdio.h>
#include<string.h>
void main()
{
    char st[100];
    printf("Enter the String : ");
    scanf("[^\n]s",st);
    int l=strlen(st);
    for(int i=1;i<=l;i++)
    printf("%*.s",l,i,st);
}