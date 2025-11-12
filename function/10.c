#include<stdio.h>
int power(int n, int p){
    if(p == 0) return 1;
    return n * power(n, p - 1);
}
int main(){
    int num, po;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Enter the power : ");
    scanf("%d", &po);
    // int result = 1;
    // for(int i = 0; i < power; i++){
    //     result *= num;
    // }
    printf("%d", power(num, po));

}