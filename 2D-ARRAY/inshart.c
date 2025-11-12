// #include<stdio.h>
// int main(){
//     int arry[100];
//     int n,i;
//     printf("Enter the array size (must less then 99) : ");
//     scanf("%d", &n);

//     for( i = 0; i < n; i++){
//         printf("Enter the %dth element : ",i);
//         scanf("%d", &arry[i]);
//     }
//     printf("Original array : ");
//     for( i = 0; i < n; i++){
//         printf("%d", arry[i]);
//     }
//     int index;
//     printf("Enter the index number of insherting : ");
//     scanf("%d", &index);
//     int ele;
//     printf("Enter the number which will be inshert : ");
//     scanf("%d", &ele);
//     for( i = n ; i >= index; i--){
//         arry[i] = arry[i - 1];
//     }
//     arry[i - 1] = ele;
//     n++;
//     for( i = 0; i < n; i++){
//         printf("%d", arry[i]);
//     }
// }

#include <stdio.h>

int main() {
    int arr[100], n, pos, value, i;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position and value to insert
    printf("Enter the position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter the value to insert: ");
    scanf("%d", &value);

    // Shift elements to the right to make space
    for (i = n; i >= pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = value;
    n++;

    // Print the updated array
    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
