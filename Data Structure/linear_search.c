// Linear search
#include <stdio.h>
#include <stdlib.h>
#define n 10
int linearSearch(int a[], int x)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (x == a[i])
            return i + 1;
    }
    return -1;
}

int main()
{
    int a[n], i, c;
    for (i = 0; i < n; i++)
        a[i] = rand() % 10 + 1;
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
    printf("\nEnter search element: ");
    scanf("%d", &c);
    int b = linearSearch(a, c);
    if (b == -1)
        printf("Not found Element.");
    else
        printf("Element is at %d position found", b);
}
