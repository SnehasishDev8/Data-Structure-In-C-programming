#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *temp, *head, *newnode;

int main(){
    head = 0;
    int choice = 1, i = 1;
    
    while(choice){
        newnode = (struct node*)malloc(sizeof(struct node));
        if(newnode == NULL){
            printf("Memory allocation failed!\n");
            return 1; 
        }
        
        printf("Enter data for node %d : ",i++);
        scanf("%d",&newnode->data);
        newnode->next = 0;

        if(head == 0){
            head = temp = newnode;
        }else{
            temp->next = newnode;
            temp = newnode;
        }
        
        printf("Enter 1 to enter more value or zero to exit : ");
        scanf("%d",&choice);
    }
    
    while(1){
        int ch;
        printf("1. Display List\n");
        printf("2. Delete First Node\n");
        printf("3. Delete Last Node\n");
        printf("4. Delete Node at Position\n");
        printf("5. Add at First\n");
        printf("6. Add at Last\n");
        printf("7. Add at Any Position\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        printf("\n");

        switch(ch){
            case 1 : 
                    if(head == 0) {
                        printf("List is empty.\n");
                    } else {
                        temp = head;
                        printf("LIST: ");
                        while(temp != 0){
                            printf("%d -> ",temp->data);
                            temp = temp->next;
                        }
                        printf("NULL\n");
                    }
                    break;

            case 2: 
                    if(head == 0) {
                        printf("List is already empty.\n");
                        break;
                    }
                    temp = head;
                    head = head->next;
                    printf("Deleted node with data: %d\n", temp->data);
                    free(temp);
                    break;

            case 3: 
                    if(head == 0) {
                        printf("List is already empty.\n");
                        break;
                    }

                    struct node *prenode;
                    temp = head;
                    
                    if (head->next == 0) {
                        printf("Deleted node with data: %d\n", head->data);
                        free(head);
                        head = 0;
                    } else {
                        while(temp->next != 0){
                            prenode = temp;
                            temp = temp->next;
                        }
                        prenode->next = 0;
                        printf("Deleted node with data: %d\n", temp->data);
                        free(temp);
                    }
                    break;

            case 4:
            {       
                    int l = 1;
                    int poss;
                    struct node *node_to_delete; 

                    if (head == 0) {
                        printf("List is already empty.\n");
                        break;
                    }
                
                    printf("Enter the position of the node to delete: ");
                    scanf("%d",&poss);
                    
                    if (poss <= 0) {
                         printf("Invalid position. Must be 1 or greater.\n");
                         break;
                    }

                    if (poss == 1) { 
                        temp = head;
                        head = head->next;
                        printf("Deleted node with data: %d\n", temp->data);
                        free(temp);
                    } else {
                        temp = head;
                        
                        while(l < poss - 1 && temp != NULL){ 
                            temp = temp->next;
                            l++;
                        }
                        
                        if (temp == NULL || temp->next == NULL) {
                            printf("Invalid position. Position %d is out of bounds.\n", poss);
                        } else {
                            node_to_delete = temp->next; 
                            temp->next = node_to_delete->next; 
                            printf("Deleted node with data: %d\n", node_to_delete->data);
                            free(node_to_delete); 
                        }
                    }
            }
                    break;

            case 5: 
                    newnode = (struct node*)malloc(sizeof(struct node));
                    if(newnode == NULL){
                        printf("Memory allocation failed!\n");
                        break;
                    }
                    
                    printf("Enter the data to insert at 1st node : ");
                    scanf("%d",&newnode->data);
                    newnode->next = head; 
                    head = newnode;
                    printf("Inserted %d at the beginning.\n", newnode->data);
                    
                    break;

            case 6 : 
                    newnode = (struct node*)malloc(sizeof(struct node));
                    if(newnode == NULL){
                        printf("Memory allocation failed!\n");
                        break;
                    }
                    
                    printf("Enter data at last node : ");
                    scanf("%d",&newnode->data);
                    newnode->next = 0;
                    
                    if (head == 0) {
                       head = newnode;
                    } else {
                       temp = head;
                       while(temp->next != 0){
                           temp = temp->next;
                       }
                       temp->next = newnode;
                    }
                    printf("Inserted %d at the end.\n", newnode->data);
                    
                    break;
            
            case 7 :
            {       
                    int pos, k = 1;
                    struct node *prenod; 
                    
                    printf("Enter the position to insert the node: ");
                    scanf("%d",&pos);

                    if (pos <= 0) {
                         printf("Invalid position. Must be 1 or greater.\n");
                         break;
                    }

                    newnode = (struct node*)malloc(sizeof(struct node));
                    if(newnode == NULL){
                        printf("Memory allocation failed!\n");
                        break;
                    }
                    
                    if (pos == 1) { 
                        printf("Enter the value at node 1 : ");
                        scanf("%d",&newnode->data);
                        newnode->next = head;
                        head = newnode;
                        printf("Inserted %d at position 1.\n", newnode->data);
                    } else {
                        printf("Enter the value at node %d : ", pos);
                        scanf("%d",&newnode->data);
                        
                        temp = head;
                        
                        while(k < pos - 1 && temp != NULL){
                            temp = temp->next;
                            k++;
                        }
                        
                        if (temp == NULL) { 
                            printf("Invalid position. Position %d is out of bounds.\n", pos);
                            free(newnode); 
                        } else {
                            newnode->next = temp->next;
                            temp->next = newnode;
                            printf("Inserted %d at position %d.\n", newnode->data, pos);
                        }
                    }
            }
                    break;
            
            case 8 : 
                    printf("Exiting program\n");
                    exit(0);

            default : 
                    printf("Invalid input. Please enter a number between 1 and 8.\n");
                    break; 
        }
    }
    
    return 0; 
}