typedef struct studen{
    char name[50];
    float marks;
    int subjects;
}stu;
#include<stdio.h>
int main(){
    int n = 2;
    stu total[n];
    for(int i = 0; i < n;  i++){
        printf("Enter the name of %d student : ",i+1);
        scanf(" %[^\n]s",&total[i].name);
        printf("Enter the marks of %d student : ",i+1);
        scanf("%f",&total[i].marks);
        printf("Enter the number of sub of %d student : ",i+1);
        scanf("%d",&total[i].subjects);
    }
    for(int i = 0; i < n; i++){
        float avg = 0;
        printf("name : %s\n",total[i].name);
        printf("marks : %f\n",total[i].marks);
        printf("subjects %d\n",total[i].subjects);
        printf("avg = %f\n", total[i].marks/total[i].subjects);
        printf("-----------------\n");
    }
}
