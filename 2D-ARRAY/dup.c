#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++){
        printf("Enter the %dth element : \n",i+1);
        scanf("%d", &arr[i]);
    }
    int num, count = 0;
    printf("Enter the searching number : \n");
    scanf("%d", &num);
    for(int i = 0; i < size; i++){
        if(arr[i] == num){
            count++;
        }
    }
    if(count > 1){
        printf("%d duplicated for %d times...\n", count - 1);
    }
}