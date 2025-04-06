/* Program to demonstrate time taken by function fun() */ 
#include <stdio.h>  
#include <time.h>  
  
// A function that terminates when enter key is pressed  
int findSum(int n) 
{ 
int sum = 0; 
for (int i = 0; i<=n; i++) 
 sum = sum + i; 
return sum; 
} 
  
// The main program calls fun() and measures time taken by fun()  
int main()  
{  
    // Calculate the time taken by fun()  
    clock_t t;  
    t = clock();  
    findSum(10000000);  
    t = clock() - t;  
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds  
    printf("findSum(int n) took %f seconds to execute \n", time_taken);  
    return 0;  
}  
 
