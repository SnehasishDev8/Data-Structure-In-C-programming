#include<stdio.h>
int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    int a = 0;
    for(int i = 2; i < number; i++){
        if(number % i == 0){
            a = 1;
            break;
        }
    }
    if(number == 1){
        printf("Given number is neither composite nor prime. \n");
    }else if(a == 0){
        printf("Given number is prime. \n");
    }else{
        printf("Given number is Composite.\n");
    }

    return 0;
}