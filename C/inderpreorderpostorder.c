#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *lptr,*rptr;
};
void insert(struct node*,int);
void preorder(struct node*);
void postorder(struct node*);
void inorder(struct node*);
void delete(struct node*,int);
struct node * Header;
void main()
{
    int ch,x;
    Header=(struct node*)malloc(sizeof(struct node));
    Header->lptr=Header;
    Header->rptr=Header;
    while(ch!='6')
    {
        printf("\n 1-Insert Node in a tree");
        printf("\n 2-Preorder Traversat");
        printf("\n 3-Postorder Traversat");
        printf("\n 4-Inorder Traversat");
        printf("\n 5-Delete a Node from Binary Search tree");
        printf("\n 6-Exit");
        printf("\n Entre your Chioce:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n Enter Elment:");
            scanf("%d",&x);
            insert(Header,x);
            printf("\n Inorder Traversal(Recursively):");
            insert(Header,x);
            printf("\n -------------------------------------------------------------------------------");
            break;
            case 2:
            printf("\n preorder Traversal(Recursively):");
            printf("\n -------------------------------------------------------------------------------");
            postorder(Header->lptr);
            printf("\n -------------------------------------------------------------------------------");
            break;
            case 3:
            printf("\n postorder Traversal(Recursively):");
            printf("\n -------------------------------------------------------------------------------");
            postorder(Header->lptr);
            printf("\n -------------------------------------------------------------------------------");
            break;
            case 4:
            printf("\n Inorder Traversal(Recursively):");
            printf("\n -------------------------------------------------------------------------------");
            inorder(Header->lptr);
            printf("\n -------------------------------------------------------------------------------");
            break;
            case 5:
            printf("\n Enter Element which You want to delete:");
            scanf("%d",&x);
            printf("\n -------------------------------------------------------------------------------");
            delete(Header,x);
            printf("\n -------------------------------------------------------------------------------");
            break;
            case 6:
            exit(0);
            break;
            default:
            printf("!!!Please Try Adain...!!!");
        }
    }
    getch ();
    return 1;
}

void insert(struct node *h,int x)
{
    struct node *new,*parent,*cur;
    new=(struct node*)malloc(sizeof(struct node));
    if(new==NULL)
    {
        printf("NO Tree Node Availabel");
        return ;        
    }
    new->data=x;
    new->lptr=NULL;
    new->rptr=NULL;
    if(h->lptr==h)
    {
        h->lptr==new;
        return ;
    }
    cur=h->lptr;
    parent=h;
    while(cur!=NULL)
    {
        if(x<cur->lptr)
        {
            parent=cur;
            cur=cur->lptr;
        }
        else if(x>cur->data)
         {
            parent=cur;
            cur=cur->rptr;
        }
        else
        {
            printf("\n !!!...Element Already Exits...!!!");
        }
        return ;
    }
    if(x<parent->data)
    {
    parent->lptr=new;
    return ;
    }
    if(x>parent->data)
    {
    parent->rptr=new;
    return ;
    }
    return ;
}

void preorder(struct node *t)
{
    if(t!=NULL)
    {
    printf("\n %d",t->data);
    }
    else
    {
        printf("\n !!!...Empty Tree...!!!");
        return ;
    }
    if(t->lptr!=NULL)
    preorder(t->lptr);
    if(t->rptr!=NULL)
    preorder(t->rptr);
    return ;
}

void postorder(struct node *t)
{
    if(t==NULL)
    {
        printf("\n !!!...Empty Tree...!!!");
        return ;
    }
    postorder(t->lptr);
    postorder(t->rptr);
    printf("%d",t->data);
    return ;
}

void inorder(struct node *t)
{
    if(t==NULL)
    {
        printf("\n !!!...Empty Tree...!!!");
        return ;
    }
    if(t->lptr!=NULL)
    inorder(t->lptr);
    printf("%d",t->data);
    if(t->rptr!=NULL)
    inorder(t->rptr);
    return ;
}

void delete(struct node*h,int x)
{
    int found;
    char d;
    struct node*cur,*parent,*pred,*suc,*q;
    if(h->lptr==h)
    {
        printf("\n !!!...Empty Tree...!!!");
        return ;
    }
    parent=h;
    cur=h->lptr;
    d='L';
    found=0;
    while (found && cur!=NULL)           
    {
        if(x==cur->data)
        found =1;
        else if(x<cur->data)
        {
            parent=cur;
            cur=cur->lptr;
            d='L';
        }
        else
        {
            parent=cur;
            cur=cur->rptr;
            d='R';
        }
        if(!found)
        {
            printf("\n Node is not Found");
            return ;
        }
        if (cur->lptr==NULL)
        q=cur->rptr;
        else
        suc==cur->rptr;
        if(suc->lptr=cur->lptr)
        {
        q=suc;    
        }
        else
        {
            pred=cur->lptr;
            suc=pred->lptr;
            while (suc->lptr!=NULL)
            {
                pred=suc;
                suc=pred->lptr;
            }
            pred->lptr=suc->rptr;
            suc->lptr=cur->lptr;
            suc->rptr=cur->rptr;
            q=suc;
        }
        if(d=='L')
        parent->lptr='q';
        else
        {
        parent->rptr=q;
        printf("\n %d is Deleted.",x);
        }
    }
}
