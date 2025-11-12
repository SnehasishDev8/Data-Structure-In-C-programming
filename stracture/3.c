#include<stdio.h>
int main(){
    struct Person{
        char name[50];
        int salary;
        int age;
    }first, second;
    printf("Enter the name of first person : ");
    scanf("%[^\n]s",&first.name);
    printf("Enter the salary of first person : ");
    scanf("%d",&first.salary);
    printf("Enter the age of first person : ");
    scanf("%d",&first.age);
    printf("Info of first person :\n");
    printf("Name : %s\nSalary : %d\nAge : %d",first.name,first.salary, first.age);
    printf("Enter the name of second person : \n");
    scanf(" %[^\n]s",&second.name);
    printf("Enter the salary of second person : ");
    scanf("%d",&second.salary);
    printf("Enter the age of second person : ");
    scanf("%d",&second.age);
    printf("Info of second person :\n");
    printf("Name : %s\nSalary : %d\nAge : %d",second.name,second.salary, second.age);
}