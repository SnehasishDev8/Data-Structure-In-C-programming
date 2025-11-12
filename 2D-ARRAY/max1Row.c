#include<stdio.h>
#include<limits.h>
int main(){
    int arr[3][4], i, j, max = INT_MIN, idx;
    for(i = 0 ; i < 3; i++){
        for(j = 0; j < 4; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        int count = 0;
        for(j = 0; j < 4; j++){
            if(arr[i][j] == 1)
            count++;
        }
        if(count > max){
            max = count;
            idx = i;
        }
    }
    printf("%d row has maximum 1 (for %d times).",idx, max);
    return 0;
}