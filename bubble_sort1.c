#include<stdio.h>
void main()
{
    int arr[100];
    int N, i, tmp;
    printf("Enter the number of element ");
    scanf("%d", &N);
    int flag;

    for(i=0; i<N; i++)
        scanf("%d", &arr[i]);
    for(int j=0; j<N-1; j++)
    {
    flag = 1;    
    for(i=0; i<N-1-j; i++)
    {
        if(arr[i] > arr[i+1])
        {
            tmp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] =tmp;
            flag=0;

            arr[i+1] = tmp;
            flag = 0;
        }
    }
    if(flag)
        break;
    }
     printf("\nOut sorted array\n");
     for(i=0; i<N; i++)
        printf("%d ", arr[i]);
}        