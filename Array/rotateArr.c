#include<stdio.h>
#define size 7

int reverse(int arr[], int s, int e);

void printArr(int arr[]);

int main(){
    int arr[size], i, k;
    printf("Enter the elements of array : ");

    for(i = 0; i < size; i++)
    scanf("%d", &arr[i]);
    
    printArr(arr);

    printf("\nEnter the value of k : ");
    scanf("%d",&k);

    k = k%size;

    reverse(arr, 0, size -1);

    reverse(arr,0 , k - 1);

    reverse(arr, size - k -1, size - 1);

    printArr(arr);
    
}

int reverse(int arr[], int s, int e){
    for(int i = s, j = e; i <= j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return arr[size];
}

void printArr(int arr[]){
    for(int i =0; i < size; i++)
    printf("%d ", arr[i]);

    return;
}