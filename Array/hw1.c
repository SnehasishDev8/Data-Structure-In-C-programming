#include<stdio.h>
int main(){
    int n;
    printf("Ente the size of an array : ");
    scanf("%d", &n);
    int array[n], fact = 1;
    for(int i = 0; i< n; i++){
        printf("Enter the %d index's value : ", i+1);
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < n; i++){
        fact *= array[i];
    }
    printf("product = %d",fact);
    return 0;
}