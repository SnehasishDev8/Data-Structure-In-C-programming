#include<stdio.h>
int main(){
    int row, column;
    printf("Enter number of rows : ");
    scanf("%d", &row);
    printf("Enter number of columns : ");
    scanf("%d", &column);

    for(int i = 1; i <= row; i++){// numbers of lines
        for(int i = 1; i <= column; i++){// number of stars each lines
            printf("* ");
        }
        printf("\n");// next line
    }
    return 0;
}