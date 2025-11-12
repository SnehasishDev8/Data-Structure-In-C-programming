#include<stdio.h>
float avg(int *arr, int s){
    float sum = 0;
    for(int i = 0; i < s; i++){
        sum += arr[i];
    }
    return sum / s;
}
int main(){
    int marks[] = {8, 8, 9, 9};
    int size = sizeof(marks)/sizeof(marks[0]);
    float average = avg(marks, size);
    printf("average = %.2f",average);
    return 0;
}