#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *pre;
    struct node *next;
};
int i = 1;
struct node *temp, *head, *tail, *newnode;
void display(){
    temp = head;
    while(temp != NULL){
        printf("%d\t",temp->data);
        temp = temp->next;
    }
    return;
}
deleteAt(int pos){
    
}
void inseartAtEnd(){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            temp = tail;
            printf("Enter data at last node : ");
            scanf("%d",&newnode->data);
            tail->next = newnode;
            newnode->pre = tail;
            tail = newnode;
            i++;
        }
    return;
}
void inseartAtStart(){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            newnode->pre = NULL;
            printf("Enter data at first node : ");
            scanf("%d",&newnode->data);

            newnode->next = head;
            head = newnode;
            i++;
        }
    return;
}
void inseart(int pos){
    if(pos == 1) inseartAtStart();
    // else if(pos == i + 1) inseartAtEnd();
    else if(pos > 1 && pos < i + 1){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter data at node %d : ",pos);
            scanf("%d",&newnode->data);
            
            temp = head;
            int j = 1;
            while(j < pos - 1){
                temp = temp->next;
                j++;
            }
            newnode->pre = temp;
            newnode->next = temp->next;
            temp->next = newnode;
            newnode->next->pre = newnode;
            i++;
            // free(temp);

        }
    }
    return;
}
int main(){
    head = NULL;
    int choise = 1;
    while(choise){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode != NULL){
            printf("Enter data from node %d : ",i++);
            scanf("%d",&newnode->data);
            newnode -> next = NULL;
            newnode -> pre = NULL;

            if(head == NULL){
                head = tail = newnode;
            }else{
                tail->next = newnode;
                newnode->pre = tail;
                tail = newnode;
            }
        }

        printf("Enter 1 to take more input 0 to exit : ");
        scanf("%d",&choise);
    }
    while(1){
        int ch;
        printf("Enter 1 to dispaly\nEnter 2 to inseart any position\nEnter 3 to inseart at last\n4 to delete any position\nEnter 5 to exit : ");
        scanf("%d",&ch);
        int pos;
        switch(ch){
            case 1 : display();
            break;
            case 2 : {
                    printf("Enter the position where to inseart : ");
                    scanf("%d",&pos);
                    inseart(pos);
                }
            break;
            case 3 : inseartAtEnd();
            break;
            case 4 : {
                printf("Enter positionn to delete  : ");
                scanf("%d",&pos);
                deleteAt(pos);
            }
            break;
            case 5 :{
                printf("Exiting...");
                exit(0);
            }
            break;
            default : printf("Invaied input....");
        }
        if(ch == 5) exit(0);
    }
    return 0;
}