#include<stdio.h>
#include<stdlib.h>
void  multiplaction(int* arr1, int* arr2, int r1, int c1, int r2, int c2){
    if(c1 == r2){
        int ans[r1][c2];
        int rc = c1;
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                ans[i][j] = 0;
                for(int k = 0; k < rc; k++){
                    ans[i][j] += *(arr1 + i * c1 + k) * *(arr2 + k * c2 +j);
                }
            }
        }
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c2; j++){
                printf("%d\t",ans[i][j]);
            }
            printf("\n");
        }
        free(ans);
    }else printf("Wrong input of row and column size(reminder --> row of 2nd array  and column of 1st array size must be same..)");
    return;
}
void sumOf(int *arr1, int *arr2, int r1, int c1, int r2, int c2){
    if(r1 == r2 && c1 == c2){
        printf("Sum : \n");
        for(int i = 0; i < r1; i++){
            for(int j = 0; j < c1; j++){
                printf("%d\t", *(arr1 + i * c1 + j) + *(arr2 + i * c1 + j));
            }
            printf("\n");
        }
    }else{
        printf("Wrong input of row and column size(reminder --> row and column size must be same with each other...)");
    }
    return;
}
int* takeInput(int r, int c){
    int  i, j;
    int *ptr = (int*)malloc(r * c * sizeof(int));
    if(ptr != NULL){
        for(i = 0; i < r; i++){
            for(j = 0; j < c; j++){
                scanf("%d",(ptr + i * c + j));
            }
        }
        return ptr;
    }else printf("Lack of memory...");
    return NULL;
    
}
int main(){
    int r1, c1, r2, c2, choice;
    printf("Enter the row & column size of 1st array : ");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row & column size of 2nd array : ");
    scanf("%d%d",&r2,&c2);

        printf("Enter the elements for 1st array : \n");
        int *arr1 = takeInput(r1, c1);
        printf("Enter the elements for 2nd array : \n");
        int *arr2 = takeInput(r2, c2);

        printf("Enter 1 for sum 2 for multiplaction : ");
        scanf("%d",&choice);

        if(choice == 1){
           sumOf(arr1, arr2, r1, c1, r2, c2);
        }else if(choice == 2){
           multiplaction(arr1, arr2, r1, c1, r2, c2);
        }else{
            printf("Wrong input!");
        }
        free(arr1);
        free(arr2);

    return 0;
}