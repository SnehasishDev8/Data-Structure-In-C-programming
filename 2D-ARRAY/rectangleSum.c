#include<stdio.h>
int main(){
    int arr[3][3];
    printf("Enter %d elements in the 4x5 matrix : \n",3*3);
for(int i = 0; i < 3; i++){ 
        for(int j = 0; j < 3; j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int l1, r1, l2, r2;
    printf("Enter the starting point(l1, r1) : ");
    scanf("%d%d",&l1,&r1);
    printf("Enter the starting point(l2, r2) : ");
    scanf("%d%d",&l2,&r2);
    int sum = 0;
    for(int i = l1; i <= l2; i++){
        for(int j = r1; j <= r2; j++){
            printf("%d ",arr[i][j]);
            sum += arr[i][j];
        }
        printf("\n");
    }
    printf("sum of (%d,%d) to (%d,%d) rectangle is %d",l1, r1, l2, r2, sum);
    return 0;

}