#include<stdio.h>
// int findMissingElement(int arr[99]){
//     int d = 0;
//     for(int i = 0; i < 99; i++){
//         if(i+1 != arr[i]){
//             d = arr[i] - 1;
//             break;
//         }

//     }
//     return d;
// }
int findMissingElement(int arr[99]){
    int sum =( 100 * 101 )/ 2, sum1 = 0;
    for(int i = 0; i < 99; i++){
        sum1 += arr[i];
    }
    return sum - sum1;
}
int main(){
   int arr[99] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

   int ele = findMissingElement(arr);
   printf("%d", ele);
   return 0;


}