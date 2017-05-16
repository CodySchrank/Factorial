/**
 
Cody Schrank
011528541
 
This program calculates a very large factorial using linked lists
 
**/

#include <stdio.h>
#include "factorial.h"

int main(int argc, const char * argv[]) {
    
    Node *f = factorial(110);
    
    printFactorial(f);
    
    return 0;
}
