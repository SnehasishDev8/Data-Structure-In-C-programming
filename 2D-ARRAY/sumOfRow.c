#include<stdio.h>
int main(){
    int arr[3][3], i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        int sum_of_row = 0, sum_of_column = 0;
        for(j = 0; j < 3; j++){
            sum_of_row += arr[i][j];
            sum_of_column += arr[j][i];
        }
        printf("sum_of_row%d = %d, sum_of_column%d = %d\n",i,sum_of_row,i, sum_of_column);
    }
}
