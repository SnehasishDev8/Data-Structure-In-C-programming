#include<stdio.h>
int main(){
    char str[100];
    puts("Enter the string : ");
    scanf("%[^\n]s",str);

    int i = 0, size = 0;
    while(str[i] != '\0'){
        size++;
        i++;
    }
    // for(int j = 0; j < size/2; j++){
    //     char temp = str[j];
    //     str[j] = str[size - j - 1];
    //     str[size - j - 1] = temp;
    // }
    for(int i = 0, j = size - 1; i <= j; i++, j--){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    puts(str);
}