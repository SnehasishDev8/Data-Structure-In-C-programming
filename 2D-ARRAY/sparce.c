#include<stdio.h>
int main(){
    int r, c, count = 0, flag = 1;
    printf("Enter the number of rows and columns of the array : ");
    scanf("%d%d",&r,&c);

    int arr[r][c];
    printf("Enter the elements in the array : ");
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    // for(int i = 0; i < r; i++){
    //     for(int j = 0; j < c; j++){
    //         if(arr[i][j] == 0) count++;
    //     }
    // }

    // if(count > (r*c)/2){
    //     printf("Matrix is sparce because in %d elements %d is zero",(r*c), count);
    // }else{
    //     printf("Not sparce martix...");
    // }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(i == j && arr[i][j] != 1){
                flag = 0;
            }else if(i != j && arr[i][j] != 0){
                flag = 0;
            }
        }
    }
    if(flag == 1){
        printf("Identitical matrix..");
    }else{
        printf("Not identitical");
    }
}