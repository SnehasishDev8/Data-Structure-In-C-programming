#include<stdio.h>

#define size 5;

void main(){
    int marks[5], i, sum = 0; float avg = 0;
    for(i = 0; i < 5; i++){
        printf("Enter the marks of %d student : ", i+1);
        scanf("%d",&marks[i]);
    }
    printf("\n");
    for(i = 0; i < 5; i++){
        printf("Marks of %d student : %d\n",i+1, marks[i]);
        sum += marks[i];
    }
    avg = (float)sum / 5;
    printf("Average marks of 5 student is : %.1f", avg);

}