#include<stdio.h>
#define n 5
int a[n];
int top = -1;
int insertEnd(int val)
{
    if (top>=n-1)
        printf("\nArray is Full...");
    else
        a[++top]=val;
}
int display()
{
    for (int i=0;i<=top;i++)
        printf(" %d",a[i]);
        printf("\n");
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);
    display();
}