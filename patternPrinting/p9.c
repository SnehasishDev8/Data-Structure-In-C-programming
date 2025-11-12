#include<stdio.h>
int main(){
    // for(int i = 65; i <= 68; i++){
    //     for(int j = 65; j <= i; j++){
    //         printf("%c  ", (char)j);
    //     }
    //     printf("\n");
    // }
    char n;
    printf("Enter a character : ");
    scanf("%c", &n);
    for(char i = 'A'; i <= n; i++){
        for(char j = 'A'; j <= i; j++){
            printf("%c ", j);
        }
        printf("\n");
    }
}