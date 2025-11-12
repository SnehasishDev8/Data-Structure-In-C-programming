#include<stdio.h>
#include<string.h>
int main(){
    char str[] = "Hello World!";
    char* ptr = &str[0];
    // printf("%p ",&str[0]);
    // printf("%p ",str);
    int i = 0;

    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;
    }

}