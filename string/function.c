#include<stdio.h>
#include<string.h>
int main(){
    char s1[100] = "Hello world";
    printf("%d\n",strlen(s1));
    char s2[strlen(s1)+1];
    strcpy(s2, s1);
    printf("%s\n",s2);
    strcat(s1 , s2);
    puts(s1);
    printf("%s",s2);
}