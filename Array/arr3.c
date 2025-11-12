#include<stdio.h>
#define size 5
void main(){
    int arr[size], arr2[size], arr3[size], i;

    for(i = 0; i < size; i++){
        printf("Enter the %d index value (1st array) : ", i);
        scanf("%d",&arr[i]);
        printf("Enter the %d index value (2nd array) : ", i);
        scanf("%d",&arr2[i]);
        arr3[i] = arr[i] + arr2[i];
    }
    printf("Sum of two array elements : \n 3rd array : ");
    for(i = 0; i < size; i++){
        printf("%d ",arr3[i]);
    }
    return;
}