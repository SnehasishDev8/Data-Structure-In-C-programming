#include<stdio.h>
int main(){
    int size, pos;
    printf("Enter array size : ");
    scanf("%d",&size);
    int arr[size];

    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the posation to delete : ");
    scanf("%d",&pos);

    for(int i = pos -1; i < size- 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
}