//2.Write a C program which stores the marks of subject Mathematics and English of n number of students in an array and then prints their individual total marks.

#include<stdio.h>
void printArr(int arr[],int n){
    for(int i = 0; i< n; i++){
        printf("%d student total marks = %d\n",i+1, arr[i]);
    }
}
int main(){
    int size;
    printf("Enter the number of students : ");
    scanf("%d", &size);

    int arr[size];

    for(int i = 0; i < size; i++){
        int english, mathematies;
        printf("student %d :Enter the marks of english : ", i+1);
        scanf("%d", &english);
        printf("Enter the marks of mathematies : ");
        scanf("%d", &mathematies);
        arr[i] = english + mathematies;
        
    }
    printArr(arr, size);
    return 0 ;

}