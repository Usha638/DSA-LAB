#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
struct queue{
int front,rear;
int data[SIZE]
};
typedef struct queue QUEUE;
void enqueue(QUEUE*q,int item)
{
    if(q->rear==SIZE-1)
    {
        printf("\n Queue overflow-queue is full!\n");
    }
    else
    {
        q->rear++;
        q->data[q->rear]=item;
        if(q->front==-1)
            q->front=0;
        printf("\nInserted %d into the queue.\n");
    }
}
void dequeue(QUEUE*q)
{
    if(q->front-1)
    {
        printf("\n Queue underflow-queue is empty!\n");
    }
    else
    {
        printf("\n Deleted element is %d\n",q->data[q->front]);
        if(q->front==q->rear){
           q->front==-1;
           q->rear==-1;
        }
        else{
            q->front++;
        }
    }
}
void display(QUEUE q)
{
    int i;
    if(q.front==-1)
    {
        printf("\nQueue is empty.\n");
    }
    else
    {
        printf("\n Queue contents are:\n");
        for(i=q.front;i<=q.rear;i++)
            printf("%d\t",q.data[i]);
        printf("\n");
    }
}
int main()
{
    int item,ch;
    QUEUE q;
    q.front=-1;
    q.rear=-1;
    while(1)
    {
        printf("\n---Queue Operations---");
        printf("\n 1.Enqueue.\n 2.Dequeue.\n 3.Display.\n 4.Exit.");
        printf("\n---------");
        printf("\nEnter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter elements to insert:");
            scanf("%d",&item);
            enqueue(&q,item);
            break;
            case 2:dequeue(&q);
            break;
            case 3:display(q);
            break;
            case 4:printf("\n Exiting program...\n");
            exit(0);
            default:printf("\n Invalid choice!please try again.\n");
        }
    }
    return 0;
}
