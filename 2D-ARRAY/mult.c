#include<stdio.h>
int main(){
    int arr[3][2] = {1, 2, 3,4 ,5, 6}, arr2[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int ans[3][4];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            ans[i][j] = 0;
            for(int k = 0; k < 2; k++){
                ans[i][j] += arr[i][k] * arr2[j][k];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j  < 4; j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }


}