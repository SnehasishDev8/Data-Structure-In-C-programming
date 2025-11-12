#include<stdio.h>
int revurse(int n, int rev){
    if(n == 0) return rev;
    rev = rev * 10 + (n % 10);
    return revurse(n / 10, rev);
    
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    // int revurse = 0;
    // while(num != 0){
    //     int lastD = num % 10;
    //     revurse = revurse * 10 + lastD;
        
    //     num /= 10;
    // }
    printf("%d",revurse(num, 0));
}
