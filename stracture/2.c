#include<stdio.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int pages;
    }a, b, c;
    // printf("Enter the a book name : ");
    // scanf("%[^\n]s",&a.name);
    printf("Enter the a book price : ");
    scanf("%f",&a.price);
    printf("Enter the a book page number : ");
    scanf("%d",&a.pages);
    strcpy(a.name,"PROGRAMING");
    printf("name = %s\n",a.name);
    printf("price = %f\n",a.price);
    printf("pages = %d\n",a.pages);
}