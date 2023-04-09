#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define true 1
#define treenodes 100
#define false 0
struct node{
    int info;
    int used;
};

struct treenode(treenodes);
void createtree();
void insert(int);
void display();
void setleft(int,int);
void setright(int,int);

void main()
{
    int x;
    char ch='1';
    printf("\n Enter root node value:");
    scanf("%d",&x);
    createtree(x);
    while(ch!='3')
    {
        printf("\n 1-Insert");
        printf("\n 2-Display");
        printf("\n 3-Quit");
        printf("\n Enter Your Choice:");
        fflush(stdin);
        ch=getchar();
        switch(ch)
        {
            case 1:
            printf("Enter the element to the inserted:");
            scanf("%d",&x);
            insert(x);
            break;
            case 2:
            display();
            break;
            case 3:
            exit(0);
            break;
            default :
            printf("\n !!!!!!!!!!!!!!!!!Wrong Chioce..!!!!!!!!!!!!!!");
        }
    }
}
void createtree(int x)
{
    int i;
    node[0].info=x;
    node[0].used=true;
    for(i=1;i<treenodes;i++)
    node[i].used=false;
}

void insert(int x)
{
    int p,q;
    p=q=0;
    while(q<treenodes && node[q].used && x!=node[p].info)
    {
        p=q;
        if(x<node[p].info)
        q=2*p+2;
        else 
        if(x==node[p].info)
        printf("\n %D is a duplicate no.");
        else
        if(x>node[p].info)
        setleft(p,x);
        else
        setright(p,x); 
    }

    void setleft(int pos,int x)
    {
        int q;
        q=2*pos-+1;
        if(q>treenodes)
        printf("\n Array Overflow");
        else
        if(node[q].used==true)
        printf("\n Invalid inserted");
        else
            node[q].info=x;
            node[q].used=true;
    }
}

void display()
{
    int i;
    for(i=0;i<treenodes;i++)
    if(node[i].used==true)
    printf("\n %d",node[i].info);
    printf("\n");
}

void setleft(int pos,int x)
{
    int q;
    q=2*pos+2;
    if(q>treenodes)
    printf("\n Array Overflow");
    else
    if(node[q].used==true)
    printf("\n Invalid Insertion");
    else 
    {
        node[q].info=x;
        node[q].used=true;
    }
}

void setright(int pos,int x)
{
    int q;
    q=2*pos+2;
    if(q>treenodes)
    printf("\n Array Overflow");
    else
    if(node[q].used==true)
    printf("\n Invalid Insertion");
    else 
    {
        node[q].info=x;
        node[q].used=true;
    }
}

