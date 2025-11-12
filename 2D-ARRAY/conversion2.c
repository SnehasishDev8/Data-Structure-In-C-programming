#include<stdio.h>
int main(){
    int number, arr[10];
    printf("Enter a number : ");
    scanf("%d",&number);

    int count = 0;
    while(number != 0){
        int d = number % 2;
        arr[count] = d;
        count++;
        number /= 2;
    }
    for(int i = count - 1; i >= 0; i--){
        printf("%d ",arr[i]);
    }
}