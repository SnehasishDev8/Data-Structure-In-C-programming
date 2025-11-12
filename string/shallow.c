#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);

    char *ptr = str;
    int i = 0;
    // while(*(ptr + i) != '\0'){
    //     printf("%c",*(ptr + i));
    //     i++;
    // }
    // puts(ptr);
    
}