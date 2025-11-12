#include<stdio.h>
#define size 100
int main(){
    int arr[size], size1, i, pos, val;
    printf("Enter the number of elements in the array(should be <99 ) : ");
    scanf("%d", &size1);
    printf("Enter the elements : ");
    for(i = 0; i < size1; i++)
    scanf("%d", &arr[i]);

    printf("Taken array : ");
    for(i = 0; i < size1; i++)
    printf("%d ",arr[i]);

    if(size1 > size){
        printf("Overflow condition ... ");
    }else{
        printf("\nEnter the position where value will be inseart : ");
        scanf("%d",&pos);
        printf("Enter the value for inseart : ");
        scanf("%d",&val);

        for(i = size1 - 1; i >= pos -1; i--){
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = val;
        size1++;
    }
    printf("Array after insert %d in %d position : ", val, pos);
    for(i = 0; i < size1; i++)
    printf("%d ",arr[i]);
    
    return 0;

}