#include<stdio.h>
int sum(int);
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    // int sum = 0;
    // while(number != 0){
    //     int lastD = number % 10;
    //     sum += lastD;
    //     number /= 10;
    // }
    printf("%d", sum(number));

}
int sum(int num){
    if(num == 0) return 0;
    return (num % 10) + sum(num / 10);
}
