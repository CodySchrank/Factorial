//
//  factorial.c
//  lab9_Factorial
//
//  Created by Cody Schrank on 5/16/17.
//  Copyright © 2017 CodySchrank. All rights reserved.
//

#include "factorial.h"

Node* factorial(int n) {
    Node *head = NULL;
    
    addFirst(&head, 1);
    
    int i;
    for(i = 1; i <= n; i++) {
        multiply(&head, i);
    }
    
    return head;
}


void multiply(Node **head, int n) {
    Node *temp = *head;
    Node *last = NULL;
    
    while (temp) {
        temp -> data = (temp -> data) * n;
        
        if((temp -> data) / 1000 > 0) {
            if(last) {
                last -> data = (last -> data) + ((temp -> data) / 1000);
            } else {
                addFirst(head, (temp -> data) / 1000);
            }
        }
        
        temp -> data = (temp -> data) % 1000;
        
        last = temp;
        temp = temp -> next;
    }
    
    shift(head);
}

void shift(Node **head) {
    Node *temp = *head;
    Node *last = NULL;
    
    while(temp) {
        if(temp -> data / 1000 > 0) {
            if(last) {
                last -> data = (last -> data) + ((temp -> data) / 1000);
            } else {
                addFirst(head, (temp -> data) / 1000);
            }
            temp -> data = (temp -> data) % 1000;
        }
        
        last = temp;
        temp = temp -> next;
    }
    
    temp = *head;
    while(temp) {
        if(temp -> data / 1000 > 0) {
            shift(head);
        }
        
        temp = temp -> next;
    }
}

void printFactorial(Node *head) {
    Node *temp = head;
    
    int first = 1, count = 0;
    
    while(temp) {
        if(first) {
            printf("%d", temp -> data);
        } else if(temp -> data == 0) {
            printf("%s", "000");
        } else if(temp -> data / 10 == 0) {
            printf("%d%d%d",0,0,temp -> data);
        } else if(temp -> data / 100 == 0) {
            printf("%d%d",0, temp -> data);
        } else {
            printf("%d", temp -> data);
        }
        temp = temp -> next;
        
        if(temp) {
            printf(",");
        }
        
        first = 0;
        count += 3;
        
        if(count >= 43) {
            count = 0;
            printf("\n");
        }
    }
    
    printf("\n");
}
