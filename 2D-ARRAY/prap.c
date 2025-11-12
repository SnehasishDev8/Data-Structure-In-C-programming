#include<stdio.h>
int main(){
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int tra[4][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            tra[i][j] = arr[j][i];
        }
        printf("\n");
    }
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            printf("%d\t",tra[i][j]);
        }
        printf("\n");
    }
}