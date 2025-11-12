#include<stdio.h>
#include<Stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head, *temp, *newnode;
int main(){
    head = 0;
    int choice = 1, i =1;
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter data at node %d : ",i++);
            scanf("%d",&newnode->data);

            if(head == 0){
                head = temp = newnode;
                temp->next = head;
            }else{
                temp->next = newnode;
                temp = newnode;
                newnode->next = head;
            }
        
        }
        printf("Enter 1 or 0 : ");
        scanf("%d",&choice);
    }
    temp = head;
    do{
        printf("%d\t",temp->data);
        temp = temp->next;
    }while(temp != head);

}