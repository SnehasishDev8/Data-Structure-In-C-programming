#include<stdio.h>
int power(int n, int p){
    if(p == 0) return 1;
    else return n*power(n, p - 1);
}
int main(){
    int num, flag = 1;
    printf("Enter a binary number : ");
    scanf("%d",&num);
    int copy = num;
    while(copy != 0){
        int d = copy % 10;
        if(d != 0 && d != 1){
            printf("Not a binary number...");
            flag = 0;
            break;
        }
        copy /= 10;

    }
    if(flag == 1){
        int result = 0, count = 0;
        while(num > 0){
            int d = num % 10;
            if(d == 1){
                result += power(2, count);
            }
            count++;
            num /= 10;
        }
        printf("%d",result);
    }
 return 0;

}