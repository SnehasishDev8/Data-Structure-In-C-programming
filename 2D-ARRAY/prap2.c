#include<stdio.h>
int main(){
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int tra[4][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 3; i++){
        for(int j = i; j < 3; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}