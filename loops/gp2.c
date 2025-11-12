#include<stdio.h>
int main(){
    int n;
    printf("Enter nth term : ");
    scanf("%d",&n);

    int a = 3;
    for(int i = 0; i<= n; i++){
        printf("%d\t", a);
        a = a * 4;
    }
}    
      
