#include <stdio.h> 
#include <stdlib.h> 
#define MAX_SIZE 100 
struct Stack { 
int arr[MAX_SIZE]; 
int top; 
}; 
void push(struct Stack* stack, int element) { 
if (stack->top == MAX_SIZE - 1) { 
printf("Stack Overflow\n"); 
return; 
} 
stack->arr[++stack->top] = element; 
} 
int pop(struct Stack* stack) { 
if (stack->top == -1) { 
printf("Stack Underflow\n"); 
exit(1); 
} 
return stack->arr[stack->top--]; 
} 
void reverseArrayUsingStack(int arr[], int size) { 
struct Stack stack; 
stack.top = -1; 
// Push elements onto the stack 
for (int i = 0; i < size; i++) { 
push(&stack, arr[i]); 
} 
// Pop elements from the stack to reverse the array 
for (int i = 0; i < size; i++) { 
arr[i] = pop(&stack); 
} 
} 
int main() { 
int arr[] = {1, 2, 3, 4, 5}; 
int size = sizeof(arr) / sizeof(arr[0]); 
reverseArrayUsingStack(arr, size); 
printf("Reversed Array: "); 
for (int i = 0; i < size; i++) { 
printf("%d ", arr[i]); 
} 
return 0; 
} 