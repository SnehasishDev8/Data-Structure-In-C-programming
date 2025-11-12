#include<stdio.h>
int main(){
    int arr[5];
    int *p = arr;
    for(int i = 0; i < 5; i++){
    // scanf("%d",arr+i);
    // scanf("%d", &i[arr]);
    scanf("%d", p + i);
    }
    for(int i = 0; i < 5; i++){
    // printf("%d ",*(arr+i));
    // printf("%d ",i[arr]);
    printf("%d ",*(p+i));
    }




    
}