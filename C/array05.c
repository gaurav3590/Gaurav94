// #include<stdio.h>
// void main()
// {
//     int i,n=(1,2,3,4,5),b;
//     int a[n];
//     for ( i=0;i<5;i++)
//     {
//         printf(" %d",a[i]); 
//         b = a[0];
//         a[0]=n-1;
//         n-1 = b;   
//         printf("\n %d",b);
//     }
//     printf("\n");
// }

#include <stdio.h>
void main()
{
    int i, n=5, a[5], t;

    printf("Enter Array :\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("After Shifting Array\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    t=a[0];
    a[0]=a[n-1];
    a[n-1]=t;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
}
// 1 2 3 4 5
// 5 1 2 3 4