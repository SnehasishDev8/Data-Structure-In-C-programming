#include<stdio.h>
int func(int arr[]){
    int oddS = 0;
    int evenS = 0;
    for(int i = 0; i < 5; i++){
        if(i % 2  == 0)
            evenS += arr[i];
        else oddS += arr[i];
    }
    if(evenS > oddS) return evenS - oddS;
    else return oddS - evenS;
}
int main(){
    int arr[10];
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    printf("difference = %d", func(arr));
}