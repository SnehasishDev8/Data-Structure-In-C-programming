#include<stdio.h>
int main(){
    char str[] = "Snehasish";
    // str[0] = 65;//A 
    int i = 0;
    while(str[i] != '\0'){
        printf("%c",str[i]);
        i++;
    }
}