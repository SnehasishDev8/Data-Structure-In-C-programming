#include<stdio.h>
#include<math.h>
int power(int n, int p){
    if(p == 0) return 1;
    return n * power(n, p - 1);
}
int digit(int n){
        int count = 0;
        while(n != 0){
            count++;
            n /= 10;
        }
    return count;
}
int prime_or_not(int num){
    if(num <= 1) return 0;
    if(num == 2) return 1;
    if(num % 2 == 0) return 0;
    int limit = (int) sqrt((double) num);
    for(int i = 3; i <= limit; i+= 2){
        if(num % i == 0) return 0;
    }
    return 1;
}
void armstrong_Or_not(int n){
   int sum = 0, number = n;
   int digits = digit(n);
   while(n != 0){
       int lastD = n % 10;
       sum += power(lastD, digits);
       n /= 10;
   }
   if(sum == number){
    printf("Armstrong number \n");
   }else{
    printf("Not armstrong\n");
   }
}
int perfect_or_not(int num){
    int sum = 0;
    for(int i = 1; i <= num/2; i++){
        if(num % i == 0){
            sum += i;
        }
    }if(num == sum){
        printf("Perfect number\n");
    }else{
        printf("not perfect\n");
    }
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int a = 1;
    while(a != 0){
        int manu;
        printf("Enter 1 to chack for prime\n2 for Armstrong\n3 for perfect\n4 to edit value\n5 to exit\n: ");
        scanf("%d", &manu);
        
        switch(manu){
            case 1:
                if(prime_or_not(num)){
                    printf("Prime\n");
                }else{
                    printf("Not Prime");
                }
                break;
            case 2:
                armstrong_Or_not(num);
                break;
            case 3:
                perfect_or_not(num);
                break;
            case 4:
                printf("Enter the new value : ");
                scanf("%d", &num);
                printf("Edit value successfully\nNow num = %d\n", num);
                break;
            case 5:
                printf("Exit!");
                a = 0;
                break;
            default:
                printf("\nWrong input !");
                break;
        }
    }
    return 0;
}