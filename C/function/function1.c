// no argument with return
#include<stdio.h>
int dosum()
{
    int a,b,sum;
    printf("enter A :");
    scanf("%d",&a);
    printf("enter b :");
    scanf("%d",&b);
    sum=a+b;
    return sum;
}
int main()
{
    int a = dosum();
    printf("sum is %d \n",a);
}