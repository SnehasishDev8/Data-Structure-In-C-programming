#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][2] = {1, 3, 5, 7, 9, 11};
    int ans[3][2];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            ans[i][j] = 0;
            for(int k = 0; k < 3; k++){
                ans[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 2 ; j++){
            printf("%d\t",ans[i][j]);
        }
        printf("\n");
    }
}