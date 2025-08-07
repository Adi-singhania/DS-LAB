//write a menu drive program in c to create a linear queue using array and perform enqueue , deque, traverse, is Empty ,
//,is Full operations
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
int queue[MAX_SIZE];
int front = -1;
int rear = -1;
void enqueue();
void dequeue();
void display();
int main()
{
    int choice;
    while (1)
    {
        printf("\n--- LINEAR QUEUE MENU ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
void enqueue()
{
    if (rear == MAX_SIZE - 1)
    {
        printf("Queue is full (Overflow).\n");
    }
    else
    {
        int value;
        printf("Enter value to enqueue: ");
        scanf("%d", &value);
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d enqueued to queue.\n", value);
    }
}
void dequeue()
{
    if (front==-1||front>rear)
    {
        printf("Queue is empty (Underflow).\n");
    }
    else
    {
        printf("Dequeued element: %d\n", queue[front]);
        front++;
    }
}
void display()
{
    if (front==-1||front>rear)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i=front;i<=rear;i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}
