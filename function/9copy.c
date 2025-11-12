#include<stdio.h>
#include<math.h>
void is_prime(int n){
    if(n <= 1){printf("Not prime...\n"); return;}
    if(n == 2) {printf("prime number \n"); return;}
    if(n % 2 == 0) {printf("Not prime...\n"); return;}
        int limit = (int) sqrt((double) n);
        for(int i = 3; i <= limit; i+= 2){     
            if(n % i == 0) {printf("Not prime...\n"); return;}
        }
    printf("Prime number\n");
    
}
int power(int n, int p){
    int fact = 1;
    for(int i = 0; i < p; i++){
        fact *= n;
    }
    return fact;
}
void is_armstrong(int n){
    int temp = n;
    int count = 0;
      while(temp != 0){
        count++;
        temp /= 10;
      }
    temp = n;
    int sum = 0;
    while(temp != 0){
        int lastD = temp % 10;
        sum += power(lastD, count);
        temp /= 10;
    }
    if(n == sum) printf("Armstrong\n");
    else printf("Not armstrong\n");
}
#include <stdio.h>

void is_perfect(int n) {
    if (n <= 1) {                 
        printf("%d is NOT perfect\n", n);
        return;
    }

    int sum = 1;                  
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            int other = n / i;
            sum += i;
            if (other != i)      
            sum += other;
        }
    }

    if (sum == n)
        printf("%d is perfect\n", n);
    else
        printf("%d is NOT perfect\n", n);
}

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    int a = 1;
    while(a != 0){
        int manu;
        printf("Enter 1 to check prime\n2 to check armstrong\n3 to check perfect\n4 to edit number\n5 to Exit\n: ");
        scanf("%d", &manu);

        switch(manu){
            case 1: 
                is_prime(number);
                break;
            case 2:
                is_armstrong(number);
                break;
            case 3:
                is_perfect(number);
                break;
            case 4:
                printf("Enter new value : ");
                scanf("%d", &number);
                printf("Edit successfully(now number = %d\n)", number);
                break;
            case 5:
                printf("!EXIT LOOP!");
                a = 0;
                break;
        }
    }
    return 0;
}