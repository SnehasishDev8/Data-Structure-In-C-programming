#include<stdio.h>
int fibo(int n){
    if(n <= 1) return n;
    return fibo(n- 1) + fibo(n- 2);
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);

    int a = 1,b = 1;
    for(int i = 0; i < num; i++){
        if(i == 0) printf("0 ");
        else if(i == 1 || i == 2) printf("1 ");
        else{
            int sum = a + b;
            printf("%d ", sum);
            a = b;
            b = sum;
        }
    }
    return 0;

    // for(int i = 0; i < num; i++){
    //     printf("%d ", fibo(i));
    // }
    // return 0;
}
