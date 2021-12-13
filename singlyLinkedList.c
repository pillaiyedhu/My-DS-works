
//1.creation and traversing of the singly linked list
//this the program to create and display the linked list


#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

//1.function to displaying elements of the Node

void linkedListTraversal(struct Node *ptr){
    while(ptr!= NULL){
        printf("ELEMENTS:%d\n",ptr->data);
        ptr=ptr->next;
    
    }

}


int main() {
    //making of the nodes 
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *forth;
    
    //allocating memory for nodes
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    forth = (struct Node*)malloc(sizeof(struct Node));
    
    //linking the data part and the next part.....
    head->data=7;
    head->next=second;
    
    second->data=8;
    second->next=third;
    
    third->data=11;
    third->next=forth;
    
    forth->data=17;
    forth->next=NULL; 
    
//    1.calling the display function..
    linkedListTraversal(head);
    
    return 0;
    
}

