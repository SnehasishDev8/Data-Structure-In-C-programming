#include<stdio.h>
int main(){
    int r, c, i, j;
    printf("Enter the number of row and column : ");
    scanf("%d%d",&r,&c);
    int arr[r][c], transpose[c][r];
    printf("Enter the elements of array : ");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
     for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose : - \n");
     for(i = 0; i < c; i++){
        for(j = 0; j < r; j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    
}