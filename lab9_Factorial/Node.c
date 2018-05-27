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














