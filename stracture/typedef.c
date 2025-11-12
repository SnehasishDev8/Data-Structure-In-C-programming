#include<stdio.h>
#include<string.h>
// typedef float realNumber;
int main(){
// realNumber y = 1;
// printf("%f",y);

    typedef struct Book{
        char name[50];
        int page;
        float price;
    }BOOK;
    BOOK A;
    BOOK B;
    BOOK C;
    strcpy(A.name, "Snehasish");
    printf("%s",A.name);
    

}