#include<stdio.h>
int main(){
    char str[] = "Snehasish Gorai";
    int i = 0;
    while(str[i] != '\0'){
        printf("%c",str[i++]);
    }
    str[9] = 65;
    i = 0;
    while(str[i] != '\0')
    printf("%c",str[i++]);
}