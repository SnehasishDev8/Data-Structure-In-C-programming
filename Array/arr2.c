#include<stdio.h>
#define size 5
void main(){
    int arr[size], i, odd = 0, even = 0;
    printf("Enter %d intiger numbers : \n",size);
    for(i = 0; i < size; i++){
        scanf("%d",&arr[i]);
        if(arr[i] % 2 == 0) even++;
        else odd++;
    }
    // for(i = 0; i < size; i++){
    //     if(arr[i] % 2 == 0) even++;
    //     else odd++;
    // }
    printf("Number of odd intiger = %d\nNumber of even intiger = %d",odd, even);
}