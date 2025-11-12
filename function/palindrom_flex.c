#include<stdio.h>
#include<string.h>
#include<ctype.h>
int palindrom(char *s, int size){
    for(int i = 0; i < size/2; i++){
        if(s[i] != s[size - i - 1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char str[20];
    printf("Enter the string : ");
    scanf("%s",str);
    printf("%d\n",strlen(str));
    for(int i = 0; i < strlen(str); i++){
        str[i] = tolower(str[i]);
    }
    puts(str);
    if(palindrom(str, 3)){
        printf("Palindrom.");
    }else{
        printf("Not");
    }
}