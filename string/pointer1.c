#include<stdio.h>
int main(){
    char str[] = "Hello World";
    char *p = str;
    *p = 'N';
    puts(p);

}