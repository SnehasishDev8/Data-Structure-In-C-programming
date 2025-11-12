// input output using gets and puts
#include<stdio.h>
int main(){
    char str[100];
    printf("Enter your name : ");
    gets(str);
    // printf("welcome ");
    // puts(str);
    //instand of using previous two lines  we can you %S an output for flexibility
    printf("Welcome %s",str);
}