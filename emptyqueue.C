// Crea ng an empty queue 
// A structure to represent a queue 
struct Queue { 
int front, rear, size; 
unsigned capacity; 
int* array; 
}; 
// func on to create a queue of given capacity 
// It ini alizes size of queue as 0 
struct Queue* createQueue(unsigned capacity) 
{ 
} 
struct Queue* queue 
= (struct Queue*)malloc(sizeof(struct Queue)); 
queue->capacity = capacity; 
queue->front = queue->size = 0; 
queue->rear = capacity - 1; 
queue->array 
= (int*)malloc(queue->capacity * sizeof(int)); 
return queue; 
2. Linked List Representa on of Queue: 
A queue can also be represented using following en es: 
 Linked-lists,  
 Pointers, and  
 Structures. 
 C 
 C++ 
 Java 
 Python3 
 C# 
 Javascript 
// A C program to demonstrate linked list based 
// implementa on of queue 
// A linked list (LL) node to store a queue entry 
struct QNode { 
int key; 
struct QNode* next; 
}; 
// The queue, front stores the front node of LL and rear 
// stores the last node of LL 
struct Queue { 
struct QNode *front, *rear; 
}; 
// A u lity func on to create a new linked list node. 
struct QNode* newNode(int k) 
{ 
} 
struct QNode* temp 
= (struct QNode*)malloc(sizeof(struct QNode)); 
temp->key = k; 
temp->next = NULL; 
return temp; 
// A u lity func on to create an empty queue 
struct Queue* createQueue() 
{ 
struct Queue* q 
= (struct Queue*)malloc(sizeof(struct Queue)); 
q->front = q->rear = NULL; 
return q; 
}