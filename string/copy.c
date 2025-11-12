#include<stdio.h>
//SALLO copy
// int main(){
//     char s1[] = "Physics Wallah";
//     char *s2;
//     s1[0] = 'M';
//     s2 = s1;
//     puts(s2);
// }
//DEEP copy
int main(){
    char str[100];
    printf("Enter the string : ");
    gets(str);
    int size = 0, i = 0;
    while(str[i] != '\0'){
        size++;
        i++;
    }
    char str2[size];
    for(int i = 0; i < size; i++){
        str2[i] = str[i];//deep copy
    }
    // for(int  i = 0, j = size - 1; i < size, j >= 0; i++, j--){
    //     str2[j] = str[i];//deep reverse copy
    // }
    puts(str2);
}