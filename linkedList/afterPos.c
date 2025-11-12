#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int size = 1;
void dispay(struct node **head){
    struct node *temp = *head;
    while (temp != 0){
        size++;
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    return;
    
}
int main(){
    struct node *head, *temp, *newnode;
    head = 0;
    int choice = 1, pos;
    while(choice == 1){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter the value at node : ");
            scanf("%d",&newnode->data);

            newnode->next = 0;

            if(head == 0){
                head = temp = newnode;
            }else{
                temp->next = newnode;
                temp = newnode;
            }
        }
        printf("Enter 1 to continue or zero to exit : ");
        scanf("%d",&choice);
    }
    dispay(&head);
    printf("\nEnter the position where you innseart a new node : ");
    scanf("%d",&pos);
    if(pos == 1){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter the value of newnode : ");
            scanf("%d",&newnode->data);
            newnode->next = head;
            head = newnode;
        }
        dispay(&head);
    }else if(pos > 1 && pos <= size){
        int i = 1;

        temp = head;
        while(temp->next != 0){
            if(i++ == pos -1){
                break;
            }
            temp = temp->next;
        }
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter the value of newnode : ");
            scanf("%d",&newnode->data);
            newnode->next = temp->next;
            temp->next = newnode;
        }else{
            printf("Lack of memory.");
        }
        printf("\n");
        dispay(&head);
    }else{
        printf("Invalied position...");
    }
    newnode = NULL;
    temp = NULL;
    head = NULL;
    return 0;

}