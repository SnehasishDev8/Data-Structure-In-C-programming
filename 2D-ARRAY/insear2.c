#include<stdio.h>
int main(){
    int arr[100],size, position, value;
    printf("Enter the size of the array : ");;
    scanf("%d",&size);

    for(int i = 0; i < size; i++){
        printf("Enter the value of %dth index: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("Enter the index number of insurtion : ");
    scanf("%d", &position);
    printf("Enter the value : ");
    scanf("%d",&value);

    for(int i = size - 1; i >= position - 1; i--){
        arr[i] = arr[i -1];
    }
    arr[position - 1] = value;
    size++;
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}