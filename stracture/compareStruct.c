#include<stdio.h>
 typedef struct Date{
        int date;
        int month;
        int year;
  }DATE;
int sameDate(const DATE *a, const DATE *b) {
    return a->date == b->date && a->month == b->month && a->year == b->year;
}
int main(){
    DATE det[2];
    for(int i = 0; i < 2; i++){
        printf("Enter the date(DD/MM/Year) : ");
        scanf("%d%d%d",&det[i].date, &det[i].month, &det[i].year);
    }
    for(int i = 0,j = 1; i <= j; i++, j--){
        if(det[i].date == det[j].date && det[i].month == det[j].month && det[i].year == det[j].year){
            printf("Same date...");
        }else{
            printf("Not");
        }
    }
    if(sameDate(&det[0], &det[1])){
        printf("Same date...");
    }else{
        printf("Not");
    }
    

}