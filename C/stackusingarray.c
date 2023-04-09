#include<stdio.h>
#include<stdlib.h>
#define MAX 8
int a[MAX],top=-1;
void push();
void pop();
void peep();
void change();
void display();
void main()
{
    int ch;
    while (1)
    {
        printf("\n 1-Push Or Insert");
        printf("\n 2-Pop Or Delete");
        printf("\n 3-Peep Or Search");
        printf("\n 4-Change Or Update");
        printf("\n 5-Display");
        printf("\n 6-End Program");
        printf("\n Enter Your Choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peep();
            break;
        }
        case 4:
        {
            change();
            break;
        }
        case 5:
        {
            display();
            break;
        }
        case 6:
        {
            exit(0);
        }
        default:
        printf("............Invalid Choice...........");
    }
}
}
void push()
{
    int data;
    if(top==MAX-1)
    {
        printf("...............Overflow Or Stack Is Full............");
    }
    else
    {
        printf("\n Enter the Element:");
        scanf("%d",&data);
        top++;
        a[top]=data;
    }
}
void pop()
{
    if(top==-1)
    {
        printf("...............Underflow Or Stack Is Empty............");
    }
    else
    {
        printf("\n pop or delete element :%d",a[top]);
        top--;
    }
}
void peep()
{
    int p;
    printf("\n Enter the Position:");
    scanf("%d",&p);
    if(top-p<=1)
    {
        printf("...............Overflow Or Stack Is Full............");
    }
    else
    {
        printf("\n The element is:%d",a[top-p]);
    }
}
void change()
{
    int v1,v2;
    printf("\n Enter Position for Change:");
    scanf("%d",&v1);
    printf("\n Enter the number for change:");
    scanf("%d",&v2);
    if(top-v1<=-1)
    {
        printf("...............Overflow Or Stack Is Full............");
    }
    else
    {
        a[top- v1]=v2;
        printf("\n ............Change Successfull...........");
    }
}
void display()
{
    int i;
    if(top>=0)
    {
        printf("Enter the Element:");
        for(i=top;i>=0;i--)
        {
            printf("\n %d",a[i]);
        }
    }
    else
    {
        printf("\n ............The Stack Is Empty...........");
    }
}
