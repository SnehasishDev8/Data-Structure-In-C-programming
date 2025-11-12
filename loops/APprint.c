#include<stdio.h>
int main(){
    int a, d, n;
    printf("Enter starting number : ");
    scanf("%d", &a);
    printf("Enter common difference : ");
    scanf("%d", &d);
    printf("Enter nth term : ");
    scanf("%d", &n);

    for(int i = a; i <= 2*n - 1; i = i + d){
        printf("%d\t", i);
    }
}                                                    