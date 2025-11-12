#include<stdio.h>
int main(){
    int num, n;
    printf("Enter a number whichs table want to print : ");
    scanf("%d", &num);
    printf("Enter how much terms you want to print of %d table",num);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        printf("%d X %d = %d\n",num, i, i*num);
    }
}