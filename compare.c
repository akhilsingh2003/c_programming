#include <stdio.h>
int main() {
    int n1, n2, n3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &n1, &n2, &n3);

    
    if (n1 >= n2 && n1 >= n3)
        printf("%d is the largest number.", n1);

    
    else if (n2 >= n1 && n2 >= n3)
      printf("%d is the largest number.", n2);

    // if both above conditions are false, n3 is the largest
    else
        printf("%d is the largest number.", n3);

    return 0;
}