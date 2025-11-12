//1.Write a C program to store marks for n number of student in an array and print their marks.

#include<stdio.h>

int main(){
    int size;
    printf("Enter the number of students : ");
    scanf("%d", &size);
    int arr[size];

    for(int i = 0; i < size; i++){
        printf("Enter the marks of %d student : ", i + 1);
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++){
        printf("%d student marks = %d\n", i+1, arr[i]);
    }
    return 0;
}