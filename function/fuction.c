#include<stdio.h>
void countTo100();//prototype
int sum(int, int);

int main(){
    countTo100();
    int add = sum(5, 5);// function call
    printf("\nsum  = %d", add);
    return 0;
}

void countTo100(){
    for(int i = 1; i <= 100; i++){
        printf("%d ", i);
    }
}
int sum(int first, int second){
    return first + second;
}