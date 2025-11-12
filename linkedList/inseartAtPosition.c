// InseartAtPosition.c
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *temp, *head, *newnode;int pos;
int main(){
    int choice = 1;
    head = 0;
    while(choice == 1){
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode -> data);
        newnode -> next = 0;

        if(head == 0){
            head = temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter 1 or 0 : ");
        scanf("%d",&choice);
    }
    temp = head;
    while(temp != 0){
        printf("%d\t",temp->data);
        temp = temp -> next;
    }

    printf("Enter the node position to inseart : ");
    scanf("%d",&pos);
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value : ");
    scanf("%d",&newnode->data);
    int i = 1;
    struct node *prenode;
    temp = head;
    while(i < pos){
        i++;
        prenode = temp;
        temp = temp -> next;
    }
    newnode->next = prenode -> next;
    prenode->next = newnode;
    temp = head;
    while(temp != 0){
        printf("%d\t",temp->data);
        temp = temp -> next;
    }
}