#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int r, c; int* array, sum = 0, row, max = INT_MIN;
    printf("Enter the size of the array row and column : ");
    scanf("%d%d",&r,&c);
    array = (int*)malloc(r * c * sizeof(int));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",(array + i * c + j));
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            sum += *(array + i * c + j);
        }
        printf("sum of %d row = %d\n",i+1,sum);
        if(sum > max){
            max = sum;
            row = i + 1;
        }
        sum = 0;
    }
    printf("%d row element's have maximum sum = %d",row, max);

}