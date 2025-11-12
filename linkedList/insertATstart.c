#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
    int data;
    struct node *next;
};
struct node *temp, *head, *newnode;
void inseartAtEnd(struct node **head){
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode != NULL){
        printf("\nEnter data forend node : ");
        scanf("%d",&newnode->data);
        newnode->next = 0;
        temp = *head;
        while(temp->next != 0){
            temp = temp->next;
        }
        temp->next = newnode;
    }

}
void inserAtStart(struct node **head){
    newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode != NULL){
        printf("\nEnter data for first node : ");
        scanf("%d",&newnode->data);

        newnode->next = *head;
        *head = newnode;
    }
    return;
}
void dispaly(struct node **head){
    temp = *head;
    while(temp != 0){
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return;

}
int main(){
    head = 0;int i = 1, choice = 1;
        while(choice == 1){
            newnode = (struct node*)malloc(sizeof(struct node));
            if(newnode != NULL){
                printf("Enter data at %d node : ",i++);
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
while(1) {
        char prompt[100];
        int ch = 0;
        printf("\nEnter 'Insert Start' or 'Insert End' or Enter 'Display' or Exit'\n");
        printf("Enter prompt : ");
        
        scanf(" %[^\n]", prompt);
        if(strcmp(prompt, "Insert Start") == 0) {
            ch = 1;
        } else if(strcmp(prompt, "Insert End") == 0) {
            ch = 2;
        }else if(strcmp(prompt, "Display") == 0){
            ch = 3;
        } else if(strcmp(prompt, "Exit") == 0) {
            ch = 4;
        }

        switch(ch) {
            case 1: 
                inserAtStart(&head);
                break;
            case 2: 
                inseartAtEnd(&head);
                break;
            case 3:
                dispaly(&head);
                break;
            case 4: 
                printf("Exiting.\n");
                exit(0);
                break;
            default: 
                printf("Wrong Input!\n");
        }
    }

}