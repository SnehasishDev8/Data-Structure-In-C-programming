#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the string : ");
    scanf("%[^\n]s",str);
    printf("string is ");
    puts(str);
    int pos; char ch;
    printf("Enter the position and character for insertion : ");
    scanf("%d %c",&pos,&ch);
    for(int i = strlen(str)-1; i >= pos -1; i--){
        str[i+1] = str[i];
    }
    str[pos - 1] = ch;
    puts(str);
}