#include<stdio.h>
int main(){
    int row, column;
    printf("Enter the row size and column size of 2d array : ");
    scanf("%d%d",&row,&column);
    int arr[row][column];
    printf("Enter elements in array : \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Taken matrix : \n");
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}