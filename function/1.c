#include<stdio.h>

int sum(int, int);
int subtraction(int, int);
int multiply(int, int);
float division(int, int);

int main(){
    int num1, num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);
    int activity = 1;
    while(activity == 1){
        printf("Enter 1 for sum \nEnter 2 for subtract \nEnter 3 for multipiy \nEnter 4 for division\nEnter 5 to exit\n:");
        int manu;
        scanf("%d", &manu);
        switch(manu){
            case 1: 
                printf("%d + %d = %d\n",num1, num2, sum(num1, num2));
                break;
            case 2: 
                printf("%d - %d = %d\n", num1, num2, subtraction(num1, num2));
                break;
            case 3: 
                printf("%d x %d = %d\n", num1, num2, multiply(num1, num2));
                break;
            case 4: 
                printf("%d / %d = %f\n", num1, num2, division(num1, num2));
                break;
            case 5: 
                printf("Exit from the loop.\n");
                activity = 0;
                break;
            default:
                printf("Invalied input\n");
        }
    }
    return 0;
}
int sum(int a, int b){
    return a + b;
}
int subtraction(int a, int b){
    return a - b;
}
int multiply(int a, int b){
    return a * b;
}
float division(int a, int b){
    return (float)a / (float)b;
}