#include<stdio.h>
#include<limits.h>
int main(){
    int r, c, i, j;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r, &c);
    int arr[r][c];
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max = INT_MIN, ind;
    for(i = 0; i < r; i++){
        int sum = 0;
        for(j = 0; j < c; j++){
            sum += arr[i][j];
        }
        if(sum > max){
            max = sum;
            ind = i;
        }
    }
    // int max = INT_MIN, ind;
    // for(i = 0; i < r; i++){
    //     if(sumOFrow[i] > max){
    //         max = sumOFrow[i];
    //         ind = i;
    //     }
    //    printf("sum of %d row is %d\n",i, sumOFrow[i]);
    // }
    printf("%d row having the maximum sum %d",ind, max);
    return 0;


}