#include<stdio.h>
int main(){
    long long int a = 1, b = 1, sum, n;
    printf("Enter a number : ");
    scanf("%lld", &n);

    for(int i = 1; i <= n; i++){
        if(i <= 2){
            sum = 1;
        }else{
            sum = a + b;
            a = b;
            b = sum;
        }
        
        printf("%lld ", sum);
    }
    return 0;
}