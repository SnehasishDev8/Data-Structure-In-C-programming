#include<stdio.h>
#include<stdlib.h>
int main(){
    int r, c; int* array;
    printf("Enter the size of the array row and column : ");
    scanf("%d%d",&r,&c);
    int arr2[r][c];
    array = (int*)malloc(r * c * sizeof(int));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",(array + i * c + j));
        }
    }
    printf("Enter the elements of 2nd array : \n");
    for(int i = 0 ; i <  r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("Sum of 2 taken arrays : \n");
    for(int i = 0 ; i <  r; i++){
        for(int j = 0; j < c; j++){
            printf("%d\t",*(array + i * c + j) + arr2[i][j]);
        }
        printf("\n");
    }
    return 0;
}