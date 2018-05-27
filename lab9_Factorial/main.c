/**
 
Cody Schrank
011529541
 
This program calculates a very large factorial using linked lists
Works up to 9999!
 
**/

#include <stdio.h>
#include <time.h>
#include "factorial.h"

int main(int argc, const char * argv[]) {
    clock_t start, end;
    double cpu_time_used;
    
    start = clock();
    
    printf("This program calculates a factorial up to (9999)\n");
    
    printf("Please enter a number: ");
    
    int n = 0;
    
    scanf("%d", &n);
    
    Node *f = factorial(n);
    
    printFactorial(f);
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("\nTime Taken To Compute: %f\n\n", cpu_time_used);
    
    return 0;
}
