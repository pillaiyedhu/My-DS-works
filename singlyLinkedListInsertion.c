//Linked List Insertion
//there are four cases for the insertion 
//        1. Insert at the beginning
//        2. Insert at the end
//        3. Insert in between
//        4. Insert after a node


#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node * next;

};

//function to traverse the node 

void linkedListTraversal(struct Node *ptr) {
    while (ptr != NULL) {
        printf("Elements:%d\n", ptr->data);
        ptr = ptr->next; 
    }
}

//linked list insertion 
//1.At the start of the node
struct Node* InsertAtStart(struct Node *head , int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    head=ptr;
    return head;
}    

//2.At the given index of the linked list
struct Node* InsertAtMiddle(struct Node* head , int data , int index ){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p= head;
    int i = 0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}




int main(int argc, char** argv) {
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;

    head = (struct Node*) malloc(sizeof (struct Node));
    second = (struct Node*) malloc(sizeof (struct Node));
    third = (struct Node*) malloc(sizeof (struct Node));
    forth = (struct Node*) malloc(sizeof (struct Node));

    //linking the nodes
    head->data = 11;
    head->next = second;

    second->data = 13;
    second->next = third;

    third->data = 15;
    third->next = forth;

    forth->data = 17;
    forth->next = NULL;

    linkedListTraversal(head);
    
    //1.traversing the list by adding element 25 at the start of the node  
    head = InsertAtStart(head,25);
    linkedListTraversal(head);
    
    //2.traversing the list by adding element 71 at the 3rd position of list
    head = InsertAtMiddle(head,71,2);
    linkedListTraversal(head);
    
    return (EXIT_SUCCESS);
}

