#include<stdio.h>
#include<stdlib.h>
int main(){
    int r, c; int* array;
    printf("Enter the size of the array row and column : ");
    scanf("%d%d",&r,&c);
    array = (int*)malloc(r * c * sizeof(int));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            scanf("%d",(array + i * c + j));
        }
    }
    
        for(int i = 0; i < c; i++){
            for(int j = 0 ; j < r; j++){
                printf("%d\t",*(array + j * c + i));
            }
            printf("\n");
        }
    
    
}