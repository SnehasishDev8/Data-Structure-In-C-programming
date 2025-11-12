#include<stdio.h>
#include<limits.h>
int main(){
    int r, c;
    printf("Enter the number of rows and columns : ");
    scanf("%d%d",&r,&c);

    int arr[r][c];

    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    int max = INT_MIN;
    int min = INT_MAX;
    int maxi, maxj, mini, minj;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                maxi = i;
                maxj = j;
            }
            if(arr[i][j] < max){
                min = arr[i][j];
                mini = i;
                minj = j;
            }
        }
    }
    printf("max = %d and index = arr[%d][%d]\n",max, maxi, maxj);
    printf("min = %d and index = arr[%d][%d]",min, mini, minj);

    return 0;

}