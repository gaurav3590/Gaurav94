#include<stdio.h>
#include<stdlib.h>
struct node
{
    int into;
    struct node*next;
}
void create();
void display();
void ins_beg();
void ins_end();
void ins_pos();
void del_beg();
void del_end();
void del_pos();
void main()
{
int choice=0;
while(chioce!=9)
{
    printf("\n **********************Main Menu********************");
    printf("\n 1-create");
    printf("\n 2-Display");
    printf("\n 3-Insert of the Begin");
    printf("\n 4-Insert at the End");
    printf("\n 5-Insert at the Specified Position");
    printf("\n 6-Delete of the Begin");
    printf("\n 7-Delete at the End");
    printf("\n 8-Delete at the Specified Position");
    printf("\n 9-Exit");
    printf("\n------------------------------------------------------------------\n");
    printf("\n Enter Your Choice:");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        create();
        break;
    case 2:
        display();
        break;
    case 3:
        ins_beg();
        break;
    case 4:
        ins_end();
        break;
    case 5:
        ins_pos();
        break;
    case 6:
        del_beg();
        break;
    case 7:
        del_end();
        break;
    case 8:
        del_pos();
        break;
    case 9:
        exit(0);
        break;
    default:
        printf("\n .........Wrong Chioce...!!!");
        break;
    }
}
}

void create()
{
    struct node,*temp,*ptr,*info;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\n Enter the data value for node:");
        scanf("%d",&temp-info);
        temp-next=NULL;
        {
            start=temp;
        }
        else{
            ptr=start;
            while(ptr)-next++1=NULL
            ptr=ptr-next;
        }ptr-next=temp;
    }
}

void display()
{
    struct node*ptr;
    if(start==NULL)
    {
        printf("\n List Empty");
        return ;
    }
    else
    (
        ptr=start;
        printf("\n The list element are");
        while(ptr!=NULL)
        {
            printf("%d",pre-info);
            ptr=ptr-next;
        }
    )
}

void ins_beg()
{
    struct node*temp;
    temp=(struct node*)malloc(sizeof(struct node));
    {
        printf("\n Out Of Memory Space");
        return ;
    }
}

void ins_del()
{
    struct node*temp*ptr;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("%d",&temp-info);
        temp-next=NULL;
    }
}

void ins_pos()
{
    struct node*ptr*temp;
    int pos;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("\n Out Of Memory");
        return ;
    }
    printf("\n Enter the position of the new node is to be inserted:");
    scanf("%d",&pos);
    temp-next=NULL;
    if(pos==0)
    {
        temp-next=start;
        start=temp;
    }
    else
    {
        for(i=0;ptr=start;i<pos;i++)
        {
            ptr=ptr-next;
            if(ptr==NULL)
            {
                printf("\n List is Empty");
                return ;
            }
        }
    }
}

void del_beg()
{
    struct node*temp*ptr;
    if(start==NULL)
    {
        printf("\n List is Empty");
        exit(0);
    }
    else if(start-next=NULL)
    {
        ptr=start;
        start=NULl;
        printf("\n The deleted element is %d",pre-info);
        free(ptr);
    }
    else
    {
        ptr=start;
        while(ptr-next==NULL)
        temp-next=NULL
        printf("\n The Deleted element is %d",ptr-info);
        free(ptr);
    }
}

void del_pos()
{
    int pos;
    struct node*temp*ptr;
    {
        printf("\n List is Empty");
        exit(0);
    }
    else
    {
        ptr=start;
        for(i=0;i<pos;i++)
        {
            ptr=next;
            if(ptr==NULL)
            {
                printf("\n Position Is not Found");
                return ;
            }
        }
        temp-next=ptr-next;
        printf("\n the deleted element is %d",ptr-info);
        free(ptr);
    }
}