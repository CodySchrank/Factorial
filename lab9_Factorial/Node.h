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

void addLast(Node **, int);

void add(Node *, Node *, int);

Node * find(Node *, int);

void deleteFirst(Node **);

void deleteLast(Node **);

void deleteNode(Node *, Node *);

void traverse(Node *);

void largeNumber(int, Node *);

#endif /* Node_h */
