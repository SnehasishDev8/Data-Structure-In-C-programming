#include<stdio.h>
typedef struct employee{
    int id;
    char name[50];
    char address[100];
    char project[50];
}emp;
int main(){
    int n;
    printf("Enter the number of employee : ");
    scanf("%d",&n);
    emp info[n];
    for(int i = 0; i < n; i++){
        printf("Enter the id of %d employee : ",i+1);
        scanf("%d",&info[i].id);
        printf("Enter name : ");
        scanf(" %[^\n]s",info[i].name);
        printf("Enter address : ");
        scanf(" %[^\n]s",info[0].address);
        printf("Enter the project name : ");
        scanf(" %[^\n]s",info[i].project);
    }
    for (int i = 0; i < n; i++){
        printf("\nName : %s\nID : %d\nAddress : %s\nProject : %s",info[i].name, info[i].id, info[i].address, info[i].project);
        printf("\n-------------------------\n");
    }
    return 0;
    
}