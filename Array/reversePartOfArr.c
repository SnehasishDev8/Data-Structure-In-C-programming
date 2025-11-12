#include<stdio.h>
// int main(){
//     int size;
//     scanf("%d", &size);
//     int arr[size];
//     for(int i = 0; i < size; i++){
//         scanf("%d", &arr[i]);
//     }
//     int start, end;
//     printf("Enter the start and end index for reverse(can be 0 to  %d) :", size);
//     scanf("%d%d", &start, &end);
//     // int dif = (end + start)/2;
    
//     for(int i = start,j = end;i <= j; i++, j--){
//         int temp = arr[i];
//         arr[i] = arr[end];
//         arr[end] = temp;
//     }
//     for(int i = 0; i < size; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }

int main(){
    int size, i, j, start, end;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    int arr[size];
    printf("Input %d array elements : ", size);
    for(i = 0; i < size; i++)
    scanf("%d",&arr[i]);

    printf("Enter the starting and ending position : ");
    scanf("%d%d", &start, &end);
    for(i = start -1 , j = end -1; i <= j; i++, j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for(i = 0; i < size; i++)
    printf("%d ",arr[i]);

}