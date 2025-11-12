#include<stdio.h>
#include<string.h>
#include<ctype.h>
typedef struct student{
    char name[50];
    char department[20];
    char section;
    int roll;
}student;
void comp(student s1, student s2){
    char a[20], b[20]; int flag = 0;
    strcpy(a,s1.department);
    strcpy(b,s2.department);
    for(int i = 0; i <= strlen(a); i++){
        if(a[i] != b[i]){
            flag = 1;
            break;
        }
    }
    puts(s1.department);
    puts(s2.department);
    if(flag == 1){
        printf("Not same");
    }else{
        printf("Same");
    }
    return;
}
int main(){
    student s1, s2;
    strcpy(s1.department, "MCA");
    strcpy(s2.department, "mca");
    strlwr(s1.department);
    strlwr(s2.department);
    student *loc = &s1;
    // char *loc2 = &(s1.department);

    // printf("%p\n",loc);
    // printf("%p\n",loc2);

    // if(strcmp(s1.department, s2.department) == 0){
    //     printf("same");
    // }else{
    //     printf("Not");
    // }
    comp(s1, s2);
}