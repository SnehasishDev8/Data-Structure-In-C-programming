#include<stdio.h>
int sum_of_digits(int n){
    if(n == 0) return 0;
    return (n % 10) + sum_of_digits(n / 10);
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int sum = sum_of_digits(num);
    printf("%d", sum);
    return 0;
}
