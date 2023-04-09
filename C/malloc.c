#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr, sum = 0, i, n;
    printf("Enter Your size of Array:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (i = 0; i < n; i++)
    {
        printf("Enter the value:");
        scanf("%d", ptr+1);
        sum = sum + *(ptr + 1);
    }
    printf("Sum Of Array:%d", sum);
    free(ptr);
}