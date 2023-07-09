#include <stdio.h>
#define n 10
int a[n];
int top = -1;
int insertmid(int val)
{
    if (top >= n - 1)
        printf("\nArray is Full...");
    else
        a[++top] = val;
    {
        for (int i = n; i >= (n / 2); i--)
        {
            a[i] = a[i - 1];
        }
        a[n / 2] = val;
        ++top;
    }
}
int deletemid()
{
    if (top <= 0)
        printf("\nArray is Empty...");
    else

        for (int i = 0; i >= n / 2; i--)
        {
            a[n / 2] = a[n - 1];
        }
}
int display()
{
    if (top < 0)
        printf("Array is empty....");
    else
    {
        for (int i = 0; i <= top; i++)
            printf("%d ", a[i]);
    }
    printf("\n");
}
int main()
{
    insertmid(10);
    insertmid(20);
    insertmid(30);
    insertmid(40);
    insertmid(1000);
    display();
    // insertmid(50);

    // deletemid();
    // deletemid();
    // deletemid();
    // deletemid();
    // display();
} /*
 liniar search
 binory search
 */