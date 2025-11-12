#include<stdio.h>
int main(){
    int arr[6] = {0, 1, 2, 3, 4, 5};
    int x = 5;
    for(int i = 0; i <6; i++){
        for(int j = i+1; j <6; j++){
            if(arr[i] + arr [j] == x){
                printf("(%d,%d)\n",arr[i], arr[j]);
            }
        }
    }
    return 0;
}