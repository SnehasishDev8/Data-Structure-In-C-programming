#include<stdio.h>
#define size 7
void main(){
    int arr[size], i,j, k, target;
    for(i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter target for triplet : ");
    scanf("%d", &target);

    for(i = 0; i < size; i++){
        for(j = i +1; j < size; j++){
            for(k = j+1; k < size; k++){
                if(arr[i] + arr[j] + arr[k] == target)
                printf("(%d, %d, %d) ",arr[i], arr[j], arr[k]);
            }
        }
    }
    return;
}