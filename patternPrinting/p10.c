#include<stdio.h>
int main(){
    int n;
    printf("Enter the number (between 65 to 90)of rows : ");
    scanf("%d", &n);

    for(int i = 65; i <= n; i++){
        for(int j = 65; j <= i; j++){
            if(i % 2 == 0){
                printf("%c", (char) j);
            }else{
                printf("%d", j - 64);
            }
        }
        printf("\n");
    }
}