// C Program to insert an element at the beginning of an array 
 
#include <stdio.h> 
#include <conio.h> 
 
int main() { 
 
    int arr[100], size, elem; 
 
    printf("Enter the size of the array: "); 
    scanf("%d", &size); 
 
    printf("Enter the Elements of the array: "); 
    for (int i = 0; i < size; i++) { 
        scanf("%d", &arr[i]); 
    } 
 
    printf("Enter the element to be inserted: "); 
    scanf("%d", &elem); 
 
    // Shift array elements the right side by one place 
    for (int i = size; i > 0; i--) { 
        arr[i] = arr[i - 1]; 
    } 
 
    // Insert element at the beginning 
    arr[0] = elem; 
    size = size + 1; // Increment size by 1 
 
    printf("Array after inserting element: "); 
    for (int i = 0; i < size; i++) { 
        printf("%d ", arr[i]); 
    } 
 
    return 0; 
 
}