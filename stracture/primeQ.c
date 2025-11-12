#include<stdio.h>
#include<stdlib.h>
typedef struct Date{
    int day;
    int month;
    int year;
}Date;
typedef struct Employee{
    char name[100];
    int employeeID;
    Date hireDate;
}Employee;
void inputEmployeeData(Employee *emp){
    printf("Enter employee name : ");
    scanf(" %[^\n]s",emp -> name);
    printf("Enter employee ID : ");
    scanf("%d",&emp -> employeeID);
    printf("Enter employee hire data (day mouth year): ");
    scanf("%d%d%d",&emp->hireDate.day, &emp->hireDate.month, &emp->hireDate.year);
}
void printEmployeeData(Employee *emp){
    printf("Employee Info\n");
    printf("Name : %s\n",emp->name);
    printf("ID : %d\n",emp->employeeID);
    printf("Hire Date : %d/%d/%d\n",emp->hireDate.day, emp->hireDate.month, emp->hireDate.year);
}
int main(){
    int n;
    printf("Enter the number of employee : ");
    scanf("%d",&n);
    Employee *arr = (Employee*)malloc(n * sizeof(Employee));
    if(arr != NULL){
        printf("Enter information of the employees : ");
        for(int i = 0; i < n; i++){
            printf("\nEnter Employee %d's info : \n", i + 1);
            inputEmployeeData((arr + i));
        }
        for(int i = 0; i < n; i++){
            printf("\n %d) Employee info : \n", i + 1);
            printEmployeeData((arr + i));
            printf("<-------------------------------->");
        }
    }else{
        printf("Lack of memory...");
    }
    free(arr);
    return 0;
}