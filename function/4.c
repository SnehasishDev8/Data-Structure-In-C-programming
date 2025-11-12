#include<stdio.h>
int swap_callByValue(int first, int second){
    int temp = first;
    first = second;
    second = temp;
    printf("first = %d , second = %d\n", first, second);
}
int swap_callByReferance(int *first, int *second){
    int temp = *first;
    *first = *second;
    *second = temp;
    printf("first = %d , second = %d\n", *first, *second);
}
int main(){
    int first, second;
    printf("Enter the first number : ");
    scanf("%d", &first);

    printf("Enter second number : ");
    scanf("%d", &second);

    int manu;
    printf("Enter 1 to swap using call by value\nEnter 2 to swap using call by referance");
    scanf("%d", &manu);

    switch(manu){
        case 1: 
            swap_callByValue(first, second);
            printf("original value of first = %d, second = %d", first, second);
            break;
        case 2: 
            swap_callByReferance(&first, &second);
            printf("original value of first = %d, second = %d", first, second);
            break;
        default:
            printf("Wrong input");  
    }
}