// Circular
#include <stdio.h>
#define n 5
int a[n];
int f = -1, r = -1, i;
int display()
{
    printf("\n");
    i = f;
    if (f < 0)
        printf("Array is Empty...");
    else
    {
        do
        {
            printf("%d ", a[i]);
            i = (i + 1) % n;
        } while (i != (r + 1) % n);
    }
}
void insert(int val)
{
    if ((r + 1) % n == f)
        printf("Array is Full....");
    else if (f == -1)
    {
        f = r = 0;
        a[r] = val;
    }
    else
    {
        r = (r + 1) % n;
        a[r] = val;
    }
}
void main()
{
     insert(10);
     insert(20);
     insert(30);
     insert(40);
     insert(50);
     insert(60);
    display();
}