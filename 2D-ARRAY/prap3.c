#include<stdio.h>
int main(){
    int arr[4][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i = 0; i < 3; i++){
        for(int j = 0; j  < 3; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0 ; i< 3; i++){
        for(int j = i; j < 3; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3/2; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i][3 - j - 1];
            arr[i][3 - j - 1] = temp;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0;  j < 3; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

}