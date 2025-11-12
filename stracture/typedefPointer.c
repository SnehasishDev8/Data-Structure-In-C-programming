#include<stdio.h>
typedef int* pointer;
int main(){
    int x = 5, y = 6;
    pointer p = &x, p2 = &y;
    printf("%p\n%p",p, p2);
}