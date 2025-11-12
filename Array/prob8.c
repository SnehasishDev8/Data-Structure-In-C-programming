#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of an array : ");
    scanf("%d",&n);
    int array[n];
    printf("Enter the array elements : \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += array[i];
    }
    printf("The sum of all elements are %d.", sum);
    return 0;
}