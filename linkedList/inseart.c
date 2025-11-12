#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head, *temp, *newnode;
void dispaly(){
    temp = head;
    while(temp != 0){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
}
void inseartATend(){
     newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode != NULL){
        printf("Enter the data for last node : ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        temp = head;
        while(temp->next != 0) temp = temp->next;
        temp->next = newnode;
        temp = head;
    }else{
        printf("Lack of memory...");
    }
}
void insertAtStart(){
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode != NULL){
        printf("Enter the data for the node : ");
        scanf("%d",&newnode->data);
        newnode->next = head;
        head = newnode;
    }else{
        printf("Lack of memory...");
    }
}
int main(){
    head = 0;
    int choice = 1, i = 1;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != 0){
            printf("Enter data is %d node : ",i++);
            scanf("%d",&newnode->data);
            newnode->next = 0;

            if(head == 0){
                head = temp = newnode;
            }else{
                temp->next = newnode;
                temp = newnode;
            }
        printf("Enter 1 to take more input or zero to exit : ");
        scanf("%d",&choice);
        }else{
            printf("Lack of memory.");
        }
    }
    temp = head;
    while(temp != 0){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    while(1){
        int ch;
        printf("\nEnter 1 to insert at start\nEnter 2 to insert at end\nEnter 3 to display\nEnter 4 to exit\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: insertAtStart();
            break;
            case 2: inseartATend();
            break;
            case 3: dispaly();
            break;
            case 4: exit(0);
            break;
            default : printf("Invalied input.");
        }
    }
    free(head);
    free(temp);
    free(newnode);

    return 0;
}