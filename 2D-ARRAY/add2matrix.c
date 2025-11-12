#include<stdio.h>
#include<stdlib.h>
void sumOf(int *r1, int *r2, int r, int c){
    for(int i = 0; i < r; i++){
        for(int j = 0;  j < c; j++){
            printf("%d ",*(r1 + i * c + j) + *(r2 + i * c + j));
        }
        printf("\n");
    }
    return;
}
int* takeInput(int r, int c){
    int *arr = (int*)malloc(r * c* sizeof(int));
    if(arr != NULL){
         for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",(arr + i * c + j));
        }
    }
    printf("Input taking successfully : ");
    return arr;
    }else{
        return NULL;
    }
}
int main(){
    int *arr1, *arr2, r, c;
    printf("Enter row and column of the arrays : ");
    scanf("%d%d",&r,&c);
    printf("Takking input for array 1 : \n");
    arr1 = takeInput(r, c);
    printf("Takking input for array 2 : \n");
    arr2 = takeInput(r, c);
    printf("SUM OF 2 TAKEN ARRAY : \n");
    sumOf(arr1, arr2, r, c);
    free(arr1); free(arr2);
    return 0;

}