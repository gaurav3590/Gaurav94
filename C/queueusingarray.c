#include<stdio.h>
#include<stdlib.h>
#define MAX 7
void enqueue();
void dequeue();
void display();
int queue_array[MAX];
int front=-1;
int rear=-1;
void main()
{
    int ch;
    while(1)
    {
        printf("\n 1-Insert elemert to Queue");
        printf("\n 2-Delete elemert to Queue");
        printf("\n 3-Displaty all elemert of Queue");
        printf("\n 4-Exit");
        printf("\n Enter Your Chioce:");
        scanf("%d",&ch);
        switch (1)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:    
            exit(1);
        default:
            printf("..............Wrong Choice..............");
        }
    }
}
void enqueue()
{
    int add_item;
    if(rear==MAX-1)
    {
        printf("..............Queue Overflow.............. ");
    }
    else{
        if(front==-1)
        front=0;
        printf("Insert the elment in Queue:");
        scanf("%d",&add_item);
        rear=rear+1;
        queue_array[rear]=add_item;
    }
}
void dequeue()
{
    if(front==-1||front>rear)
    {
        printf("..............Queue Overflow..............");
    }
    else{
        printf("Element deleted from queue is:%d",queue_array[front]);
        front=front+1;
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("Queue Is Empty");
    }
    else{
        printf("Queue is:");
        for(i=front;i<=front;i++)
        printf("%d",queue_array[i]);
        printf("\n");
    }
}