#include<stdio.h>
int inputArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    return arr[size];
}
int sum_of_arr(int arr[],int size, int sum){
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    return sum;
}
int main(){
    int arr1[5], arr2[5], arr3[2];
    inputArr(arr1, 5);
    inputArr(arr2, 5);

    int sum1 = sum_of_arr(arr1, 5, 0);
    int sum2 = sum_of_arr(arr2, 5, 0);
    printf("sum of arr1 : %d\n", sum1);
    printf("sum of arr1 : %d\n", sum2);

    arr3[0] = sum1;
    arr3[1] = sum2;

    for(int i = 0; i<2; i++ ){
        printf("%d ",arr3[i]);
    }
    return 0;
    
}