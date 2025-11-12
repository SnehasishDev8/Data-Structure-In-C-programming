#include<stdio.h>
int main(){
    int n;
    printf("Enter nth term : ");
    scanf("%d", &n);

    for(int i = 4; i <= n*3 + 1; i += 3){
        printf("%d\t", i);
    }
}