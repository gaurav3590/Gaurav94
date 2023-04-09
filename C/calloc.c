#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *ptr,sum=0,i,n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("Enter the value:");
        scanf("%d",ptr+1);
        sum=sum+*(ptr+1);
    }
    printf("Sum of Array:%d",sum);
    free(ptr);
}