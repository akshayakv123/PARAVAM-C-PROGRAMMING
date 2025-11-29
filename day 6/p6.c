#include <stdio.h>
#define SIZE 3
int stack[SIZE];
int top = -1;
int main()
{
    int choice, value;
    while (1)
    {
        printf("\n1 Push\n2 Pop\n3 Display\n4 Exit\nEnter choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter value: ");
            scanf("%d", &value);
            if (top == SIZE - 1)
                printf("Overflow! Can't push\n");
            else
                stack[++top] = value; // push
            break;
        case 2:
            if (top == -1)
                printf("Underflow! Nothing to pop\n");
            else
                printf("Popped %d\n", stack[top--]);
            break;
        case 3:
            if (top == -1)
                printf("Empty Stack\n");
            else
            {
                printf("Stack: ");
                for (int i = 0; i <= top; i++)
                    printf("%d ", stack[i]);
                printf("\n");
            }
            break;
        case 4:
            return 0;
        }
    }
}