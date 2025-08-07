//write a menu drive program in c to create a stack using array and perform the following function using user defined functioned:
//1)push
//2)pop
//3)check if the stack is empty or not
//4)check if the stack is full or not
//5)display stack elements.
#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 5
int main()
{
    int stack[MAX_SIZE];
    int top = -1;
    int choice, value;
    while (1)
        {
        printf("\nSTACK MENU: \n");
        printf("1. Push\n2. Pop\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
{
            case 1:
                if (top == MAX_SIZE - 1)
                {
                    printf("Stack is full (Overflow).\n");
                }
                else
                {
                    printf("Enter value to push: ");
                    scanf("%d", &value);
                    top++;
                    stack[top] = value;
                    printf("%d pushed to stack.\n", value);
                }
                break;
            case 2:
                if (top == -1)
                {
                    printf("Stack is empty (Underflow).\n");
                }
                else
                {
                    printf("Popped element: %d\n", stack[top]);
                    top--;
                }
                break;
            case 3:
                if (top == -1)
                {
                    printf("Stack is empty.\n");
                }
                else
                {
                    printf("Stack elements:\n");
                    for (int i = top; i >= 0; i--)
                    {
                        printf("%d\n", stack[i]);
                    }
                }
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
