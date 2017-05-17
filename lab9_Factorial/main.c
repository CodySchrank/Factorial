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
    
    Node *f = factorial(15); //correct
    
    printFactorial(f);
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("\nTime Taken To Compute: %f\n\n", cpu_time_used);
    
    /******/
    
    start = clock();
    
    f = factorial(111); //correct
    
    printFactorial(f);
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("\nTime Taken To Compute: %f\n\n", cpu_time_used);
    
    /******/
    
    start = clock();
    
    f = factorial(9999); //correct
    
    printFactorial(f);
    
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    
    printf("\nTime Taken To Compute: %f\n\n", cpu_time_used);
    
    
    return 0;
}
