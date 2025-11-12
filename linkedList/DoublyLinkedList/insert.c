#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *pre;
    struct node *next;
};
struct node *head, *temp, *newnode, *tail;int i = 1;
void deletEndNode(){
    temp = head;
    tail = tail->pre;
    tail->next = NULL;
    free(temp);
    i--;

}
void deletStrtingNode(){
    temp = head;
    head = head -> next;
    head->pre = NULL;
    free(temp);
    i--;
}
void deleteNode(int pos){
    if(pos == 1) deletStrtingNode();
    else if(pos == i) deletEndNode();
    else{
        int j = 1;
        temp = head;
        while(j < pos - 1){
            temp = temp->next;
            j++;
        }
        temp->next->next->pre = temp;
        temp->next = temp->next->next;
    }
    free(temp);
}
void inseartAtEnd(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value for last node : ");
    scanf("%d",&newnode->data);
    newnode->next = NULL;
    newnode->pre = tail;
    tail->next = newnode;
    tail = newnode;
    i++;
    free(temp);
}
void inseartAtStart(){
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter value for node 1 : ");
    scanf("%d",&newnode->data);
    newnode->pre = NULL;
    newnode->next = head;
    head->pre = newnode;
    head = newnode;
    i++;
}
void inseartAtPos(int pos){
    if(pos == 1) inseartAtStart();
    else if(pos == i+1) inseartAtEnd();
    else{
        int j = 1;
        temp = head;
        while(j < pos - 1){
            temp = temp->next;
            j++;
        }
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d : ",pos);
        scanf("%d",&newnode->data);

        newnode->next = temp->next;
        newnode->pre = temp;
        temp->next->pre = newnode;
        temp->next = newnode;
        i++;

    }
    return;
}
void display(struct node **head){
    temp = *head;
    while(temp != 0){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    return;
}

int main(){
    head = NULL;
    int choice = 1;
    while(choice == 1){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter data at node %d : ",i++);
            scanf("%d",&newnode->data);

            newnode->next = NULL;
            newnode->pre = NULL;

            if(head == NULL){
                head = tail = newnode;
            }else{
                tail->next = newnode;
                newnode->pre = tail;
                tail = newnode;
            }
        }
        printf("Enter choice (1/0) : ");
        scanf("%d",&choice);
    }
    // inseartAtStart();
    // display(&head);
    // inseartAtEnd();
    // display(&head);
    // int pos;
    // printf("Enter the position : ");
    // scanf("%d",&pos);
    // if(pos >=1 && pos <= i){
    //     inseartAtPos(pos);
    // }else printf("Invalied posation\nEnter 1 to %d : ",i);
    // display(&head);
    // deletStrtingNode();
    // printf("\n");
    // display(&head);
    // printf("\n");
    // deletEndNode();
    // display(&head);
    int p = 3;
    deleteNode(p);
    display(&head);
    free(newnode);
    free(temp);
    free(head);
    free(tail);
    return 0;
}