//
//  Node.c
//  Linked List
//
//  Created by Cody Schrank on 4/27/17.
//  Copyright © 2017 CodySchrank. All rights reserved.
//

#include "Node.h"

void addFirst(Node **head, int data) {
    Node *temp;
    
    temp = (Node *) malloc(1 * sizeof(Node));
    temp -> data = data;
    
    temp -> next = *head;
    *head = temp;
}

void addLast(Node **head, int data) {
    Node *temp = NULL, *t = NULL;
    
    if(*head) {
        t = *head;
        while(t -> next != NULL) {
            t = t -> next;
        }
        
        temp = (Node *) malloc(1 * sizeof(Node));
        temp -> data = data;
        
        t -> next = temp;
        
        t = temp;
    } else {
        addFirst(head, data);
    }
}

void add(Node *head, Node *t, int data) {
    //TODO: TEST
    Node *temp;
    
    temp = (Node *) malloc(1 * sizeof(Node));
    
    temp -> data = data;
    
    temp -> next = t -> next;
    
    t -> next = temp;
}

void largeNumber(int n, Node *head) {
    //TODO: TEST
    while(n > 0) {
        int digit = n % 10;
        n /= 10;
        
        //TODO: fix pointer
        addFirst(&head, digit);
    }
}

Node * find(Node *head, int data) {
    //TODO: TEST
    if(head) {
        Node *t;
        
        t = head;
        while(t != NULL) {
            if (data == t -> data) {
                return t;
            }
            t = t-> next;
        }
        
        
        return t;
    } else {
        return NULL;
    }
}

void deleteFirst(Node **head) {
    Node *temp;
    
    temp = *head;
    
    if(temp) {
        (**head) = *(*(*head)).next;

        free(temp);
    }
    
}

void deleteLast(Node **head) {
    Node *t, *temp;
    if(head) {
        if(!((*head) -> next)) {
            free(*head);
            *head = NULL;
        } else {
            t = *head;
            
            while(t->next->next) {
                t = t->next;
            }
            
            temp = t -> next;
            t -> next = NULL;
            
            free(temp);
        }
    }
}

void deleteNode(Node *head, Node *node) {
    //TODO: TEST
    if(head -> next) {
        Node *temp;
        temp = head;
        
        while(temp -> next != node) {
            temp = temp -> next;
        }
        
        temp = node -> next;
        free(node);
    } else {
        head = NULL;
        free(node);
    }
}

void traverse(Node *head) {
    Node *temp = head;
    
    while(temp) {
        printf("%d\n", temp -> data) ;
        temp = temp -> next;
    }
}















