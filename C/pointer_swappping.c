#include<stdio.h>
void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
void main()
{
    int num1,num2;
    printf("\n Enter value num1: ");
    scanf("%d",&num1);
    printf("\n Enter value num2: ");
    scanf("%d",&num2);

    printf("before swapping num1:%d,num2 is %d \n",num1,num2);
    swap(&num1,&num2);
    printf("After swapping num1:%d,num2 is %d \n",num1,num2);

}