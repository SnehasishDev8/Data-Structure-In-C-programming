#include<stdio.h>
int main(){
    int r, c,i,j;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0; i < r; i++){
        for(j = i; j < c; j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(i = 0; i < r; i++){
        for(j =  0 ; j < c; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}