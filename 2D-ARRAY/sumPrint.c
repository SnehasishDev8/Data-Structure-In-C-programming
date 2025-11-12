#include<stdio.h>
int main(){
    int r, c, i, j, sum = 0;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter the elements of array : ");
    for(i = 0; i < r; i++){
        for(j = 0; j  < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i =  0 ; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d\t",arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }
    printf("sum = %d",sum);
    return 0;

}