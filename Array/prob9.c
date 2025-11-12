#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int array[n];
    for(int i = 0; i < n ; i++){
        scanf("%d", &array[i]);
    }
    int max= array[0];
    for(int i = 1; i < n; i++){
        if(array[i] > max)
            max = array[i];
    }
    printf("max = %d\n", max);
    int min = array[n -1];
    for(int i = n - 2; i >= 0; i--){
        if(array[i] < min)
            min = array[i];
    }
    printf("min = %d", min);
    return 0;
}