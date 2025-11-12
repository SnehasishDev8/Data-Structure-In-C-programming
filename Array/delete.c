// #include<stdio.h>
// int main(){
//        int arr[100], size,pos, val;
//     printf("Enter the size of a array : ");
//     scanf("%d", &size);

//     if(size > 100) printf("Brought overflow..\n");
//     else{
//         printf("Enter the values : ");
//         for(int i = 0; i < size; i++){
//             scanf("%d", &arr[i]);
//         }
//     }
//         printf("Given array is : ");
//         for(int i = 0; i < size; i++)
//             printf("%d ", arr[i]);
        
//         printf("Enter the position for delete : ");
//         scanf("%d",&pos);
        
//         for(int i = pos - 1; i < size - 1; i++){
//             arr[i] = arr[i + 1];
//         }
//         size--;
        
//           for(int i = 0; i < size; i++)
//             printf("%d ", arr[i]);
// }
#include<stdio.h>
#define size 100
int main(){
    int arr[size], size1, pos, i;
    printf("Enter the number of elements (should be <100): ");
    scanf("%d", &size1);

    if(size1 < 1 || size1 > size){
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter the elements : ");
    for(i = 0; i < size1; i++)
        scanf("%d", &arr[i]);

    printf("Enter the position to delete (1 to %d): ", size1);
    scanf("%d", &pos);

    if(pos < 1 || pos > size1){
        printf("Invalid position.\n");
        return 1;
    }

    for(i = pos - 1; i < size1 - 2 ; i++){
        arr[i] = arr[i + 1];
    }
    size1--;

    if(size1 == 0) printf("Empty array.\n");
    else{
        printf("Array after deletion: ");
        for(i = 0; i < size1; i++)
            printf("%d ", arr[i]);
        printf("\n");
    }
    return 0;
}