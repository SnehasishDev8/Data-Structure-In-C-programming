#include<stdio.h>
#include <limits.h>
int main(){
    int arr[5], i;
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    
    int max = INT_MIN;
    int max2 = INT_MIN;
    for(i = 0; i < 5; i++){
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
        }else if(arr[i] != max && arr[i] > max2){
            max2 = arr[i];
        }
    }
    if(max2 == INT_MIN)
        printf("No second largest element.\n");
    else
        printf("max = %d, max2 = %d\n", max, max2);
    printf("%d", max2);
}