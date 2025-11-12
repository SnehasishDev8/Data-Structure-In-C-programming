#include<stdio.h>
int sum(int n){
    if(n == 1) return 1;
    return sum(n - 1) + n;
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("%d", sum(num));
    return 0;

}