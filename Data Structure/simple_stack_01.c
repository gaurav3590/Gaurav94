#include <stdio.h>
#define n 15
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
int insertmid(int val)
{
    if (top>=n-1)
        printf("\nArray is Full...");
    else
        a[++top]=val;
    for(int i=n;i>=n/2;i--)
    { 
        a[n]=a[n-1];
    }
    a[n/2]=val;
}
int deletEnd()
{
    if (top < 0)
        printf("\nArray is Empty...");
    else
        a[--top];
}
int deletfirst()
{
    if (top < 0)
        printf("\nArray is Empty...");
    else
        --top;
        for(int i = 0;i<n;i++)
        {
            a[i] = a[i+1];
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
    insertEnd(50);
    insertEnd(60);
    deletEnd();
    deletEnd();
    display();
    insertEndfirst(90);
    insertEndfirst(80);
    insertEndfirst(70);
    insertEndfirst(60);
    display();
    insertmid(1000);
    display();
}