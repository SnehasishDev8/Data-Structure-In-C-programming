#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *pre;
    struct node *next;
};
struct node *temp, *head, *newnode;
int main(){
    head = NULL;
    int choice = 1, i = 1;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter the data at node %d : ",i++);
            scanf("%d",&newnode->data);
            newnode->pre = NULL;
            newnode->next = NULL;

            if(head == NULL){
                head =  temp = newnode;
            }else{
                temp->next = newnode;
                newnode->pre = temp;
                temp = newnode;
            }
        }
        printf("Enter 1 to input more data or zero to exit : ");
        scanf("%d",&choice);
    }
    while(temp != 0){
        printf("%d\t",temp->data);
        temp = temp->pre;
    }

    return 0;
}