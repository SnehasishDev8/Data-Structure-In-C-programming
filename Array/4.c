//4. Write a C program to delete an element from a particular position of an array.
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d",&size);

    int arr[size];

    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
     for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    int pos;
    printf("Enter the position of the element to delete : ");
    scanf("%d", &pos);
    if(pos == size - 1) arr[pos] = 0;
    else{
        for(int i = pos; i < size; i++){
            arr[i] = arr[i+1];
        }
    }
    for(int i = 0; i < size - 1; i++){
        printf("%d ", arr[i]);
    }

}