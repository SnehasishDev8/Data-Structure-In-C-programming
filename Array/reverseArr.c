#include<stdio.h>
#define size 5
void printArr(int arr[]){
    for(int i = 0; i <size; i++){
        printf("%d ",arr[i]);
    }
    return;
}
// void reverse(int arr[], int rev[]){
//     int i = 0;
//     int j = size;
//     while(i < j){
//         rev[i] = arr[j - 1];
//         i++;
//         j--;
//     }
//     return;
// }
int main(){
    int arr[size], rev[size], i;
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
        rev[size - i - 1] = arr[i];
    }
    printf("Original : "); printArr(arr);
    printf("\n");
    printf("Reverse : "); printArr(rev);
    // reverse(rev, arr);
    // printf("\n");
    // printArr(arr);

    return 0;
}