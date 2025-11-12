#include<stdio.h>
int counter(int n, int arr[]){
    int count = 0;
    for(int i = 0; i < 5; i++){
        if(arr[i] == n)
            count++;
    }
    return count;
}
int main(){
    int arr[5] = {1, 2, 2, 2, 7}, target;
    printf("Enter the target : ");
    scanf("%d", &target);
    int result = counter(target, arr);
    printf("count = %d", result);
    return 0;
}