#include<stdio.h>
int main(){
    // char arr[9] = {'S','n', 'e', 'h', 'a', 's', 'i', 's', 'h'};
    // // printf("%p\n",&arr[0]);
    // // printf("%p\n",&arr[1]);
    // // printf("%p\n",&arr[2]);
    // // printf("%p\n",&arr[3]);
    // // printf("%p\n",&arr[4]);
    // // for(int i = 0; i <9; i++){
    // //     printf("%c",arr[i]);
    // // }
    // char ch = '\0';//null character
    // printf("%c",ch);
    // printf("%d",ch);//0

    char str[] = {'S', 'n', 'e', 'h', 'a', 's', 'i', 's', 'h','\0'};
    int i = 0;
    while(str[i] != '\0'){
        printf("%c",str[i++]);
    }
    
    

}