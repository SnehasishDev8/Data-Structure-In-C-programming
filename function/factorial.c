#include<stdio.h>
int factorial(int);
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    int result = factorial(number);
    printf("factorial of %d is %d", number,result);
    return 0;
}
int factorial(int num){
    if(num == 0) return 1;
    return factorial(num - 1) * num;
}