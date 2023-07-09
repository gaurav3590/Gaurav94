#include <stdio.h>
#include <conio.h>
#define n 5
int a[n];
int i;
int top = -1;
void print()
{
    printf("\n");
    if (top < 0)
    {
        printf("\n array is emply");
    }
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void insert(int val)
{
    if (top >= n - 1)
        printf("\n overflow");
    else
        a[++top] = val;
}
void deleteend()
{
    if (top < 0)
        printf("\n underflow");
    else
    {
        printf("\n delete is %d ", a[top]);
        --top;
    }
}
void firstinsert(int val)
{
    if (top >= n - 1)
        printf("\n overloading");
    else if (top == -1)
        a[++top] = val;
    else
    {
        for (int i = n - 1; i >= 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = val;
        ++top;
    }
}
void firstdelete()
{
    if (top < 0)
        printf("empty");
    else
    {
        printf("delete element is %d", a[0]);
        for (i = 0; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        --top;
    }
}
void midinsert(int val)
{
    if (top >= n - 1)
        printf("overlow......");
    else
    {
        for (int i = n; i >= (n / 2); i--)
        {
            a[i] = a[i - 1];
        }
        a[n / 2] = val;
        ++top;
    }
}
void middelete()
{
    if (top < 0)
        printf("empty");
    else
    {
        printf("delete element is %d", a[n / 2]);
        for (i = n / 2; i < n; i++)
        {
            a[i] = a[i + 1];
        }
        --top;
    }
}

int main()
{
    int ch, x, y, z;
    printf("\n 1.insert");
    printf("\n 2.delete");
    printf("\n 3.first insert");
    printf("\n 4.first delete");
    printf("\n 5.mid insert");
    printf("\n 6.mid delete");
    printf("\n 7.print");
    printf("\n 0.exit");
    do
    {
        printf("\n enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("enter element: ");
            scanf("%d", &x);
            insert(x);
            break;

        case 2:
            deleteend();
            break;

        case 3:
            printf("enter element:");
            scanf("%d", &y);
            firstinsert(y);
            break;

        case 4:
            firstdelete();
            break;

        case 5:
            printf("enter midelement:");
            scanf("%d", &z);
            midinsert(z);
            break;

        case 6:
            middelete();
            break;

        case 7:
            print();
            break;

        case 0:
            break;

        default:
            printf("wrong choice.....");
            break;
        }
    } while (ch != 0);
}
