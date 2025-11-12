#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int partition(int *ptr, int lb, int ub){
    int pivot = *(ptr + lb);
    int start = lb, end = ub;
    while(start < end){
        while(*(ptr + start) <= pivot) start++;
        while(*(ptr + end) > pivot) end--;
        if(start < end){
            int temp = *(ptr + start);
            *(ptr + start) = *(ptr + end);
            *(ptr + end) = temp;
            // start++;
            // end--;
        }
    }
    int temp2 = *(ptr + lb);
    *(ptr + lb) = *(ptr + end);
    *(ptr + end) = temp2;

    return end;
}
void quick(int *ptr, int lb, int ub){
    if(lb < ub){
        int loc = partition(ptr, lb, ub);
        (ptr , lb, loc - 1);
        (ptr, loc + 1, ub);
    }
    return;
}
void insertion(int* arr, int size){
    for(int i = 0; i < size; i++){
        int j = i;
        while(j > 0 && arr[j] < arr[j - 1]){//check if arr[j] < arr[j - 1] to perform swapping
            //swap
            int temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j--;
        }
    }
    return;
}
void selection(int* arr, int size){
    for(int i = 0 ; i < size - 1; i++){
        int min = INT_MAX;
        int minIdx = -1;
        for(int j = i; j < size; j++){// minimum element and its index
            if(arr[j] < min){
                min = arr[j];
                minIdx = j;
            }
        }
        // swap minimum elemet with 1st indexed element(ith index)
        int temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
    return;
}
void bubble(int* arr, int size){
    for(int i = 0; i < size - 1; i++){
        int swap = 0;
        for(int j = 0; j < size - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                //swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1;
            }
        }
        if(swap == 0) break;
    }
    return;
}
int main(){
    int exit = 0;
    while(exit == 0){
        int size;
        printf("Enter the size of the array : ");
        scanf("%d",&size);

        int *ptr = (int*)calloc(size , sizeof(int));

        if(ptr != NULL){
            printf("Enter the elements of the array : ");

            for(int i = 0; i < size; i++)
            scanf("%d",(ptr + i));

            printf("Taken Array : ");
            for(int i = 0; i < size; i++)
                printf("%d\t",ptr[i]);
            printf("\n");
            
            int lb = 0, ub = size - 1;
            int ok = 1;
            while(ok == 1){
                int choice;
                printf("Enter the choice 1 for bubble, 2 for selection, 3 for insertion and 4 for queek \nEnter 5 to take another array\nEnter 6 to exit : ");
                scanf("%d",&choice);

                switch(choice){
                    case 1 : bubble(ptr, size);
                    break;
                    case 2 : selection(ptr, size);
                    break;
                    case 3 : insertion(ptr, size);
                    break;
                    case 4 : quick(ptr, lb, ub);
                    break;
                    case 5 : ok = 5;
                    break;
                    case 6 : exit = 1; ok = 0;
                    break;
                    default : printf("Invalied input...");
                }


                printf("\nArray after sorting : ");
                for(int i = 0; i < size; i++)
                printf("%d\t",ptr[i]);

            }

            free(ptr);
            
        }else{
            printf("Lack of memory...");
        }
        free(ptr);
    }
    
    return 0;
}