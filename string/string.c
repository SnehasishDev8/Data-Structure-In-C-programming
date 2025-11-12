#include<stdio.h>
int main(){
    char arr[] = "Hello World";
    int i = 0;
    while (arr[i] != '\0'){
        printf("%c",arr[i]);
        i++;
    }
    
    printf("%d",sizeof(arr));
    return 0;
}