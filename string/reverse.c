#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]s",str);
    int i =0 , size = 0;
    while(str[i] != '\0'){
        size++;
        i++;
    }
    printf("%d\n",size);
    for(int j = size-1; j >= 0; j--){
        printf("%c",str[j]);
    }
}