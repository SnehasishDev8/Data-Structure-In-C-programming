#include<stdio.h>
int main(){
    int arr[7] = {1, 2, 1, 3, 4, 5, 6};
    int ele = 0, idx = 0, idx2 = 0;
    for(int i = 0; i < 7; i++){
        for(int j = i+1; j < 7; j++){
          if(arr[i] == arr[j]){
            ele = arr[i];
            idx = i;
            idx2 = j;
            break;
          }
        }
    }
    printf("%d seen in %d index for first time and it duplicat in %d index ...", ele, idx, idx2);
    return 0;
}