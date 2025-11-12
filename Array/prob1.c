#include<stdio.h>
int main(){
    int size;
    printf("Enter the sie of an array : ");
    scanf("%d", &size);
    int array[size];
    for(int i = 0; i < size; i++){
        printf("Enter the marks of roll %d : ", i+1);
        scanf("%d",&array[i]);
    }
    printf("List of students who are got less then 35 marks : \n");
    for(int i = 0; i < size; i++){
        if(array[i]<35){
            printf("roll %d got %d \n", i+1,array[i]);
        }
    }
    return 0;
}