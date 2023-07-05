#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;


void push(int value);
int pop();
void display();

int main() {
    int choice, value;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                value = pop();
                if (value != -1)
                    printf("Popped element: %d\n", value);
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Quitting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

// Push operation
void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack is full.\n");
    } else {
        top++;
        stack[top] = value;
        printf("Element %d pushed to the stack.\n", value);
    }
}

// Pop operation
int pop() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return -1;
    } else {
        int value = stack[top];
        top--;
        return value;
    }
}

// Display the stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: \n");
        for (int i = top; i >= 0; i--) {
            printf("%d \n", stack[i]);
        }
        printf("\n");
    }
}
