#include<stdio.h>
int main(){
    int n, sub;
    printf("Enter the number of sudents : ");
    scanf("%d",&n);
    int marks[n][2];
    for(int i = 0; i < n ; i++){
        for(int j = 0; j < 2; j++){
            if(j == 0){
                printf("Enter marks of %d student(English) : ", i+1);
            }else{
                printf("Enter marks of %d student(Math) : ",i+ 1);
            }
            scanf("%d",&marks[i][j]);
            if(marks[i][j] < 0 || marks[i][j] > 100){
                printf("Invalied input...");
                j -=1;
            }
        }
    }
    for(int i = 0; i < n; i++){
            float sum = 0;
        for(int j = 0; j < 2; j++){
            printf("\nMarks of %d student : \n", i+1);
                if(j == 0){
                    printf("English = %d\n",marks[i][j]);
                }else{
                    printf("Math = %d\n",marks[i][j]);
                }
            sum += marks[i][j];
        }
        printf("avg = %.2f%%\n",sum/2);
    }
}