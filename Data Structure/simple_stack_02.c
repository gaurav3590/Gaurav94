#include <stdio.h>
#define n 10
int a[n];
int top = -1;
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
int deletfirst()
{
    if (top < 0)
        printf("\nArray is Empty...");
    else
        --top;
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i + 1];
    }
}
int display()
{
    for (int i = 0; i <= top; i++)
        printf(" %d", a[i]);
    printf("\n");
}
int main()
{
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    insertFirst(50);
    insertFirst(60);
    deletfirst();
    display();
}