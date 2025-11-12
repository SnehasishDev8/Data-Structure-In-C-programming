#include<stdio.h>
#include<stdlib.h>
struct node{
    struct node *pre;
    int data;
    struct node *next;
};
struct node *head, *temp, *newnode;
int main(){
    head = NULL;
    int choice = 1, i = 1;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter data at node %d : ",i++);
            scanf("%d",&newnode->data);
            
            newnode->pre = NULL;
            newnode->next = NULL;

            if(head == NULL){
                head = temp = newnode;
            }else{
                temp->next = newnode;
                newnode -> pre = temp;
                temp = newnode;
            }
        }
        printf("Enter one to tak einput or zero to exit : ");
        scanf("%d",&choice);
    }
    while(temp != NULL){
        printf("%d",temp->data);
        temp = temp->pre;
    }
    free(temp);
}