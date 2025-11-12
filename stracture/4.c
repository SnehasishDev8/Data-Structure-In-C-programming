#include<stdio.h>
typedef struct company{
    char name[50];
    char address[100];
    char phone_no[15];
    int number_of_employee;
}com;
int main(){
    com one;
    printf("Enter the name of employee : ");
    scanf(" %[^\n]s",&one.name);
    printf("Enter the address of employee : ");
    scanf(" %[^\n]s",&one.address);
    printf("Enter employee phone number : ");
    scanf(" %[^\n]s",&one.phone_no);
    printf("Enter the number of the employee : ");
    scanf("%d",&one.number_of_employee);
    printf("\nEmployee INFO : \n");
    printf("Name : %s\nAddress : %s\n PhoneNo : %s\n Number : %d",one.name, one.address, one.phone_no, one.number_of_employee);
}