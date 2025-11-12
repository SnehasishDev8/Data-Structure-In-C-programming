#include<stdio.h>
int main(){
    int arr[3][3] = {
        {1, 2, 3},
        {2, 5, 6},
        {3, 6, 7}
    };
    int flag = 1;
    for(int i = 0; i < 3; i++){
        for(int j = i; j < 3; j++){
            if(arr[i][j] != arr[j][i]){
                flag = 0; break;
            }
        }
        if(flag == 0) break;
    }
    if(flag == 1) printf("Symatric");
    else printf("Not");
    return 0;
}