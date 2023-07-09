#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter A :");
    scanf("%d",&a);
    printf("Enter B :");
    scanf("%d",&b);
    printf("Enetr C :");
    scanf("%d",&c);

    if (a>b && a>c)
    {
        printf("%d is largest",a);
    }
    else if (b>c)
    {
        printf("%d is largest",b);
    }
    else
    {
        printf("%d is largest",c);
    }
}

