#include<stdio.h>
int main(){
    int r, c, maxsum = -1;
    printf("Enter the number of rowes : ");
    scanf("%d", &r);
    printf("Enter the number of columns : ");
    scanf("%d", &c);
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int row = 0;
    for(int i = 0; i < r; i++){
        int sum = 0;
        for(int j = 0; j < c; j++){
            sum += arr[i][j];
        }
        if(sum > maxsum){
            maxsum = sum;
            row = i;
        }
    }
    printf("max sum = %d row = %d",maxsum, row);
    return 0;
}