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
    int row, max1 = 0;
    for(int i = 0; i < r; i++){
        int count = 0;
        for(int j = 0; j < c; i++){
            if(arr[i][j] == 1)
                count++;
        }
        if(count > max1){
            max1 = count;
            row = i;
        }
    }
    printf("row = %d, count = %d", row, max1);

}