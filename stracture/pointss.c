#include<stdio.h>
#include<string.h>
typedef struct stu{
    char name[50];
    int age;
}s;
int main(){
    s s1;
    strcpy(s1.name,"Snehasish");
    s1.age = 23;
    s *x = &s1;
    printf("%s",x -> name);
}