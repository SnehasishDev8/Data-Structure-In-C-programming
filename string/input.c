#include <stdio.h>
#include<string.h>
int main() {
    int name[100];
    printf("Enter your name : ");
    for(int i = 0; i < 100; i++){
        char ch;
        scanf("%c",&ch);
        if(ch == '\n'){
            break;
        }
        name[i] = ch;
    }
    int i = 0;
    while(name[i] != '\0'){
        printf("%c",name[i++]);
    }
    return 0;
}

