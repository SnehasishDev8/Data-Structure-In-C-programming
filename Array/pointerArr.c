#include<stdio.h>
int main(){
    int arr[] = {1, 2, 3, 5, 6, 7, 6};
    int *q;
    // q = arr;
    // printf("%p\n", arr);
    // printf("%p\n", q);
    // printf("%d\n", *q);
    // // printf("%p\n", &arr[0]);
    // // printf("%p\n", &arr[1]);
    // q++;
    // printf("%p\n", q);
    // printf("%d", *q);

    printf("%d\n", *arr);
    printf("%p\n", arr);
    q = arr;
    printf("%p\n", q);
    printf("%d\n", arr[2]);
    printf("%d\n", 2[arr]);
    printf("%d\n", *(arr + 2));
    printf("%d\n", *(q + 2));
    printf("%p\n", arr+1);
    printf("%p\n", &arr+1);
    printf("%p\n", &arr[0]+1);

    printf("%d\n", *(arr+1));
    printf("%d\n", *arr+1);

}