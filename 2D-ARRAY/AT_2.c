#include<stdio.h>
#include<stdlib.h>
void transpose(int *arr, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = i; j < n; j++){
            int temp = *(arr + i * n + j);
            *(arr + i * n + j) = *(arr + j * n + i);
            *(arr + j * n + i) = temp;
        }
    }
    return;
}
void display(int *arr, int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d\t",*(arr + i * n + j));
        }
        printf("\n");
    }
    return;
}
int main(){
    int m, n;
    printf("Enter the number of rows in array : ");
    scanf("%d",&m);
    printf("Enter the number of columns in array : ");
    scanf("%d",&n);

    printf("Enter elemints in %d x %d matrix : \n",m,n);
    int *ptr = (int*)malloc(m*n*sizeof(int));
    if(ptr != NULL){
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                scanf("%d",(ptr + i * n + j));
            }
        }
            display(ptr, m, n);
            transpose(ptr, m, n);
            printf("\n");
            display(ptr, n, m);
    }else{
        printf("Lack of memory.");
    }
}