#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *temp, *head, *newnode, *preNode;
void display(struct node **hed){
    temp = *hed;
    while(temp != 0){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    free(temp);
}
void deleteAtbeginning(){
    temp = head;
    head = head->next;
    free(temp);
}
void deleteAtEnd(){
    temp = head;
    while(temp->next != 0){
        preNode = temp;
        temp = temp->next;
    }
    preNode->next = 0;
    free(temp);
}
int main(){
    head = 0;
    int choice = 1, i = 1;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter data at node %d : ",i++);
            scanf("%d",&newnode->data);
            newnode->next = 0;
            if(head == 0){
                head = temp = newnode;
            }else{
                temp->next = newnode;
                temp = newnode;
            }
        }
        printf("Enter 1 to take more data or zero to exit : ");
        scanf("%d",&choice);
    }
    display(&head);
    printf("\n");
    deleteAtbeginning();
    display(&head);
    printf("\n");
    deleteAtEnd();
    display(&head);
    
    return 0;
    
    
}