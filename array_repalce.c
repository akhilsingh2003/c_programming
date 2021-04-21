#include<stdio.h>
int main() {

    int n;
    printf("enter the no.of element : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    { 
        printf("Enter the values of Element :");
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
         arr[i]=0;
        else 
        arr[i]=1;
    }
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    
    
    return 0;
}