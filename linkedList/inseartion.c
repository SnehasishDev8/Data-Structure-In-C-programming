#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void inseartATend(struct node **head){
    struct node* newnode, *temp = *head;
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode != NULL){
        printf("\nEnter the value : ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        while(temp->next != 0){
            temp = temp->next;
        }
        temp->next = newnode;
    }
}
void inseartATstart(struct node **head){
    struct node *newnode; 
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode != NULL){
        printf("\nEnter a value : ");
        scanf("%d",&newnode->data);
        newnode->next = *head;
        *head = newnode;
    }else{
        printf("Memory lack");
    }
    return;
}
void display(struct node *head){
    struct node *temp = head;
    while(temp != 0){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    return;
}
int main(){
    struct node *head, *temp, *newnode;
    head = 0;
    int choice = 1, i = 1;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter the data in the node %d : ",i++);
            scanf("%d",&newnode->data);
            newnode->next = 0;

            if(head == 0){
                head = temp = newnode;
            }else{
                temp->next = newnode;
                temp = newnode;
            }
        }else{
            printf("Lack of memory.");
        }
        printf("Enter 1 to inseart more element or zero to exit : ");
        scanf("%d",&choice);
    }
    inseartATstart(&head);
    display(head);
    inseartATend(&head);
    display(head);
    free(newnode);
    free(head);
    free(temp);
    return 0;
}