//3.Write a C program to insert an element in an array in a particular position

#include<stdio.h>
void printArr(int arr[],int n){
    for(int i = 0; i< n; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int size, arr[50], position, value;

    printf("Enter the size of array(50>) : ");
    scanf("%d", &size);

    for(int i = 0 ; i < size; i++){
        printf("Enter the %d index value : ", i+1);
        scanf("%d", &arr[i]);
    }
    printArr(arr, size);
    printf("Enter the position and value : ");
    scanf("%d%d", &position, &value);
    for(int i = size + 1; i > position; i--){
        arr[i] = arr[i - 1];
    }
    arr[position] = value;
    printArr(arr, size+1);


}