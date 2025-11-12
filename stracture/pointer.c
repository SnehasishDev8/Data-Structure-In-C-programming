#include<stdio.h>
#include<string.h>
typedef struct pokemon{
    // char name[20];
    int rank;
    char name[20];
    int attack;
    char str[25];
}poke;
void change(poke *x){
    x->rank = 6;
    x->attack = 200;
    (x->name, "pik");
    (x->str, "pika");
}
int main(){
    poke pikachu;
    pikachu.attack = 100;
    pikachu.rank = 8;
    strcpy(pikachu.name, "Pikachu");
    strcpy(pikachu.str, "Pika pika pikachu");
    poke* y = &pikachu;
    // printf("%p\n",&pikachu.rank);//
    // printf("%p\n",pikachu.name);//
    // printf("%p\n",&pikachu.attack);//
    // printf("%p\n",pikachu.str);//
    // printf("%p", x);//
    change(y);
    printf("%d\n",pikachu.rank);
    printf("%d\n",pikachu.attack);
    printf("%s\n",pikachu.name);
    printf("%s\n",pikachu.str);
}