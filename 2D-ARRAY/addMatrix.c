#include<stdio.h>
int main(){
    int r, c, r1, c1, i, j;
    printf("Enter the number of rows and columns in 1st array : ");
    scanf("%d%d",&r, &c);
    int arr[r][c];

    printf("Enter the number of rows and columns in 2nd array : ");
    scanf("%d%d",&r1, &c1);

    if(r != r1 && c != c1){
        printf("Row and column sizes are not same in both array :\nInvalied input for matfix sum operation...");
    }else{
        int arr1[r][c];
        int sumArr[r][c];
        printf("Enter the elements of first array : \n");
        for(i = 0; i <r; i++){
            for(j = 0; j < c; j++){
                printf("(%d,%d) = ",i,j);
                scanf("%d",&arr[i][j]);
            }
        }
        printf("Enter the elements of second array : \n");
        for(i = 0; i <r; i++){
            for(j = 0; j < c; j++){
                printf("(%d,%d) = ",i,j);
                scanf("%d",&arr1[i][j]);
            }
        }
        printf("\nTaken arrays are : \n matrix 1 : \n");
        for(i = 0 ; i < r; i++){
            for(j = 0; j < c; j++){
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
        printf("matrix 2: \n");
        for(i = 0 ; i < r; i++){
            for(j = 0; j < c; j++){
                printf("%d\t",arr1[i][j]);
            }
            printf("\n");
        }
        printf("Sum of two matrixs : \n");
        for(i = 0; i < r; i++){
            for(j = 0; j < c ; j++){
                sumArr[i][j] = arr[i][j] + arr1[i][j];;
                printf("%d\t",sumArr[i][j]);
            }
            printf("\n");
        }
        return 0;
    }





}