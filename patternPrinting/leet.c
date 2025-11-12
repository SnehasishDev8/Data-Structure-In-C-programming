 #include<stdio.h>
//  int main(){
//     int size;
//     printf("Enter the size of the array : ");
//     scanf("%d", &size);
//     int nums[size];
//     for(int i = 0; i < size ; i++){
//        printf("Enter the %dth index : ", i);
//        scanf("%d", &nums[i]);
//     }
//     int target;
//     printf("Enter your target : ");
//     scanf("%d", &target);
//     int arr[2];
//     for(int i = 0; i < size; i++){
//         for(int j = i + 1; j < size; j++){
//             if(nums[i] + nums[j] == target){
//                 arr[0] = i;
//                 arr[1] = j;
//             }
//         }
//     }
//     for(int i = 0; i < 2; i++){
//         printf("%d ", arr[i]);
//     }
//     return 0;
//  }
#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    int nums[size];
    for(int i = 0; i < size ; i++){
       printf("Enter the %dth index : ", i);
       scanf("%d", &nums[i]);
    }
    int target;
    printf("Enter your target : ");
    scanf("%d", &target);
    int arr[2];
    int found = 0;
    for(int i = 0; i < size; i++){
        for(int j = i + 1; j < size; j++){
            if(nums[i] + nums[j] == target){
                arr[0] = i;
                arr[1] = j;
                found = 1;
                break;
            }
        }
        if(found) break;
    }
    if(found) {
        for(int i = 0; i < 2; i++){
            printf("%d ", arr[i]);
        }
    } else {
        printf("No pair found.");
    }
    return 0;
}