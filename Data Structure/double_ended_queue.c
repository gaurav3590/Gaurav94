#include <stdio.h>
#define n 5
int r=-1,f=-1,a[n],i;

int front_insert(int val)
{
   if(f==0)
        printf("\n Do Not Insert Element");
    else if(f==-1)
    {
        f=r=0;
        a[f]=val;
    }
    else
    {
        a[--f]=val;
    }
}

int front_delete()
{
    if(f<0)
        printf("Array is Empty");
    else if(f==r)
        f=r=-1;
    else
        ++f;
}

int rear_insert(int val)
{
    if((r+1)%n==f)
        printf("\n Array is Full:");
    else if(f==-1)
    {
        f=r=0;
        a[r]=val;
    }
    else                       
    {
        r=(r+1)%n;
        a[r]=val;
    }
}

int rear_delete()
{
    if(r<0)
        printf("\n Under Flow");
    else if(f==r)
        f=r=-1;
    else
        --r;
}

int display()
{
    printf("\n");
    i=f;
    if(f<0)
        printf("\n Array is Empty");
    else 
    {
        do{
            printf(" \n %d",a[i]);
            i=(i+1)%n;
        }while(i!=(r+1)%n);
    }        
}

int main()
{
    int ch,val;
    do
    {
        printf("\n 1.Front Insert \n 2. Front Delete  \n 3.Rear Insert \n 4.Rear Delete \n 5.Display \n 0.Exit");
        printf("\n Enter Your Choice:");
            scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\n Enter Value To Front Insert:");
                    scanf("%d",&val);
                front_insert(val);
                break;
            case 2:
                front_delete();
                break;
            case 3:
                printf("\n Enter Value To Rear Insert:");
                    scanf("%d",&val);
                rear_insert(val);
                break;
            case 4:
                rear_delete();
                break;
            case 5:
                display();
                break;
            case 0:
                break;
            default:
                printf("\n Wrong Choice");
        }

    }while(ch!=0);
}