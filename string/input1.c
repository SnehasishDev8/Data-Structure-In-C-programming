// input and output using %s
#include<stdio.h>
#include<string.h>
int main(){
    int name[40];
    printf("Enter your name : ");
    scanf("%[^\n]s",name);
    printf("Hello %s!",name);
    for(int i = 0; i < strlen(name); i++){
        char temp = name[i];
        name[i] = name[strlen(name) - i - 1];
        name[strlen(name) - i - 1] = temp;
    }
    printf("Hello %s!",name);
}