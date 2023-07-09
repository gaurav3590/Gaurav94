#include <stdio.h>
#define n 10
int a[n];
int top = -1;
int insertEnd(int val)
{
    if (top >= n - 1)
        printf("\nArray is Full...");
    else
        a[++top] = val;
}
int insertFirst(int val)
{
    if (top >= n - 1)
        printf("\nArray is Full...");
    else

    {
        for (int i = n; i >= 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        ++top;
        
    }
}
int display()
{
    if (top < 0)
    {
        printf("Array is Empty..");
    }
    else
    {
        for (int i = 0; i <= top; i++)
            printf(" %d", a[i]);
    }
    printf("\n");
}
int main()
{
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    display();
    insertFirst(50);
    display();
}