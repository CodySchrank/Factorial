/**
 
 Cody Schrank
 011529541
 
 Linked List
 
 **/

#ifndef Node_h
#define Node_h

#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
    
    int data;
    struct _Node *next;
    
} Node ;

void addFirst(Node **, int);

#endif /* Node_h */
