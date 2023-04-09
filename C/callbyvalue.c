
#include<stdio.h>
void swap (int,int);
void main()
{
    int x=10,y=20;
    printf("Beorfrre swaping x & y:%d & %d",x,y);
    swap(x,y);
    printf("\n After Swaping x & y:%d & %d",x,y);
}
void swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("%d%d",x,y);
}

