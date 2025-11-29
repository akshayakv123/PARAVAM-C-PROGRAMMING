#include <stdio.h> 
#define SIZE 5 
int queue[SIZE]; 
int front = -1; 
int rear = -1; 
void enqueue(int value) { 
if (rear == SIZE - 1) { 
printf("Queue Overflow!\n"); 
        return; 
    } 
    if (front == -1) front = 0; // first element 
    rear++; 
    queue[rear] = value; 
} 
int dequeue() { 
    if (front == -1 || front > rear) { 
        printf("Queue Underflow!\n"); 
        front = rear = -1; 
        return -1; 
    } 
    int value = queue[front]; 
    front++; 
    return value; 
} 
 
int peek() { 
    if (front == -1 || front > rear) { 
        printf("Queue is Empty!\n"); 
        return -1; 
    } 
    return queue[front]; 
} 
void display() { 
    if (front == -1) { 
        printf("Queue is Empty!\n"); 
        return; 
    } 
    printf("Queue: "); 
    for (int i = front; i <= rear; i++) { 

printf("%d ", queue[i]); }
printf("\n"); 
} 
int main() { 
enqueue(10); 
enqueue(20); 
enqueue(30); 
display();  
printf("Dequeued: %d\n", dequeue()); 
printf("Front element: %d\n", peek()); 
display(); 
return 0; 
}