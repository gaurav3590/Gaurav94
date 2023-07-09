#include <stdio.h>
void main()
{
    int i, n=10,a[10],t;

    printf("Enter Array :\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("After Shifting Array\n");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    t=a[0];
    a[0]=a[n-1];
    a[n-1]=t;

    for (i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }
}