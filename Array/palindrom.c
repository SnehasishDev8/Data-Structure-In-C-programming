#include<stdio.h>
#define size 5
int is_palindrom(int a[]){
    int flag = 1;
    for(int i = 0; i < size/2; i++){
        if(a[i] != a[size - i - 1]){
            flag = 0;
            break;
        }
    }
    return flag;
}
int main(){
    int arr[size], i;
    printf("Enter the elements in array : \n");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    if(is_palindrom(arr)) printf("True.");
    else printf("False");
    return 0;
}