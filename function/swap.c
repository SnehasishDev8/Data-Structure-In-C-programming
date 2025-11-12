#include<Stdio.h>
void swap(int, int);
int main(){
    int a, b;
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);
    printf("a = %d and b = %d\n", a, b);

    swap(a, b);
    printf("a = %d and b = %d\n", a, b);
    return 0;
}
void swap(int x, int y){
    printf("x = %d, y = %d\n",x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("x = %d, y = %d\n",x, y);
}