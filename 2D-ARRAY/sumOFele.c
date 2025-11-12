#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr, r, c, sum = 0,l1, r1, l2, r2;
    printf("Enter row and column size : ");
    scanf("%d%d",&r,&c);
    ptr = (int*)malloc(r*c*sizeof(int));
    if(ptr != NULL){
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                scanf("%d",(ptr + i * c + j));
            }
        }
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                printf("%d\t",*(ptr + i * c + j));
            }
            printf("\n");
        }
        printf("Enter l1, r1 and l2, r2 : ");
        scanf("%d%d%d%d",&l1,&r1,&l2,&r2);
        for(int i = l1; i <= l2; i++){
            for(int j = r1; j <= r2; j++){
                sum += *(ptr + i * c + j);
            }
        }
        free(ptr);
        printf("sum = %d",sum);
    }else{
        printf("Lack of memory...");
    }
    return 0;

}