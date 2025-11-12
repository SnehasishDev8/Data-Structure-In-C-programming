#include<stdio.h>
int main(){
    int arr[7] = {1, 3, 2, 4, 1, 2, 3};
    int ele;
    for(int i = 0; i < 7; i++){
        int count = 0;
        for(int j = i+1 ; j < 7; j++){
            if(arr[i] == arr[j]) count++;
        }
        if(count == 0){
            ele = arr[i];
            break;
        }
    }
    printf("%d",ele);
    return 0;
}