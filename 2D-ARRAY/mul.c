#include<stdio.h>
#include<stdlib.h>
int main(){
    int r1, c1, r2, c2;
    printf("Enter row and column size of the first matrix : ");
    scanf("%d%d",&r1, &c1);
    printf("Enter row and column size of the second matrix : ");
    scanf("%d%d",&r2, &c2);

    if(c1 != r2) printf("Invalied input for multiplaction..");
    else{
        int *ptr, *ptr2, *ans;
        ptr = (int*)malloc(r1 * c1 * sizeof(int));
        if(ptr != NULL){
            for(int i = 0 ; i < r1; i++){
                for(int j = 0; j < c1; j++){
                    scanf("%d",(ptr + i * c1 + j));
                }
            }
        }else{
            printf("Lack of memory..");
        }
        ptr2 = (int*)malloc(r2 * c2 * sizeof(int));
        if(ptr2 != NULL){
            for(int i = 0 ; i < r2; i++){
                for(int j = 0; j < c2; j++){
                    scanf("%d",(ptr2 + i * c2 + j));
                }
            }
        }else{
            printf("Lack of memory..");
        }
        ans = (int*)malloc(r1 * c2 * sizeof(int));
        int cr = c1;
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                *(ans + i * c2 +j) = 0;
                for(int k = 0; k < cr; k++){
                   *(ans + i * c2 +j) += *(ptr + i * c1 + k) * *(ptr2 + k * c2 +j); 
                }
            }
        }
        for(int i = 0 ; i < r1; i++){
            for(int j = 0 ; j < c2; j++){
                printf("%d\t",*(ans + i * c2 +j));
            }
            printf("\n");
        }

        free(ptr);
        free(ptr2);
        free(ans);
        
    }

}