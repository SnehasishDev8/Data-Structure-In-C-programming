#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *pre;
    struct node *next;
};
struct node *head, *temp, *newnode;
int main(){
    head = NULL;
    int choice  = 1; int i = 1;
    while(choice  == 1){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter a data in node %d : ", i++);
            scanf("%d",&newnode->data);

            newnode->next = NULL;
            newnode->pre = NULL;

            if(head == NULL){
                head = temp = newnode;
            }else{
                temp->next = newnode;
                newnode->pre = temp;
                temp = newnode;
            }
        }
        printf("Enter choice (1/0): ");
        scanf("%d",&choice);
        
    }
    printf("NULL");
    while(temp != NULL){
        printf("<- %d ->",temp->data);
        temp = temp -> pre;
    }
    free(temp);
    free(head);
     printf("NULL");
    return 0;
}
