#include<stdio.h>
typedef struct items{
    char name[50];
    float price;
    float quentity;
    float amount;
}item;
int main(){
    int n;
    printf("Enter the number of items : ");
    scanf("%d",&n);
    item total[n];
    for(int i = 0; i < n; i++){
        printf("Entre the %d item name : ",i+1);
        scanf("%[^\n]s",&total[i].name);
        printf("Entre the %d item price/kg : ",i+1);
        scanf("%f",&total[i].price);
        printf("Entre the quentity of %d item in kg : ",i+1);
        scanf("%f",&total[i].quentity);
        total[i].amount = total[i].price * total[i].quentity;
    }
    float bill;
    printf("ITEMS\tprice\tprice\n");
    for(int i = 0; i < n; i++){
        printf("%s\t%f\t%f\n",total[i].name,total[i].quentity,total[i].amount);
        bill += total[i].amount;
    }
    printf("------------------------------\n");
    printf("Total\t\t\t%f", bill);
}