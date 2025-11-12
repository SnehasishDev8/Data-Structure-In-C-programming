#include<stdio.h>
#include<string.h>
typedef struct employ{
    char name[50];
    int id;
}emp;
typedef struct HR{
    emp x;
    char project[50];
}hr;

int main(){
    hr number[2];
    for(int i = 0; i < 2; i++){
        printf("Enter name : \n");
        scanf(" %[^\n]s",number[i].x.name);
        printf("Enter id : \n");
        scanf("%d",&number[i].x.id);
        printf("Enter project name : \n");
        scanf(" %[^\n]s",number[i].project);
    }
    for(int i = 0; i < 2; i++){
        printf("name : %s\n",number[i].x.name);
        printf("id : %d\n",number[i].x.id);
        printf("project name : \n");
        puts(number[i].project);
    }

}