#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head, *temp, *newnode;
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
    free(head);
    free(temp);
    free(newnode);

    return 0;
}