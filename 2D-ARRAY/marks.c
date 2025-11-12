#include<stdio.h>
int main(){
    int stu;
    printf("Enter the number if students : ");
    scanf("%d",&stu);
    int arr[stu][2];
    for(int  i = 0; i < stu; i++){
        for(int j = 0 ; j < 2; j++){
            if(j == 1){
                printf("Enter the marks of student %d : ",i+1);
            }
            else{
                printf("Enter the roll no. of student %d : ",i+1);
            }
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Matks with roll numbers : \n");
    printf("Roll N0 | Marks \n");
    for(int i = 0; i < stu; i++){
        for(int j = 0; j < 2; j++){
            printf("%d\t ",arr[i][j]);
        }
        printf("\n");
    }
}