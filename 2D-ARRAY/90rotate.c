#include<stdio.h>
int main(){
    int r = 3, c = 3;
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i < r; i++){
        //transpose...
        for(int j = i; j < c; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    //reverse each row
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c/2; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[i][c - j - 1];
            arr[i][c - j - 1] = temp;
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

}