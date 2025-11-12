#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef struct student{
    char name[50];
    char address[100];
    int age;
    int marks;
}stu;
int main(){
    int num;
    printf("Enter the number of students : ");
    scanf("%d",&num);
    stu s[num];
    for(int i = 0; i < 3; i++){
        printf("\n%d student : \n",i+1);
        printf("-----------\n");
        printf("Name : ");
        scanf(" %[^\n]s",&s[i].name);
        printf("Address : ");
        scanf(" %[^\n]s",&s[i].address);
        printf("Age : ");
        scanf("%d",&s[i].age);
        printf("Marks : ");
        scanf("%d",&s[i].marks);
    }
    for(int i = 0; i < 3; i++){
        printf("\n%d Student Info : \n",i+1);
        printf("Name :- %s\nAddress :- %s\nAge :- %d\nMarks : %d",s[i].name,s[i].address, s[i].age, s[i].marks);
    }
}