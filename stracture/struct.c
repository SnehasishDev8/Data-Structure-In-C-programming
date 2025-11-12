#include<stdio.h>
#include<string.h>
typedef struct game{
    char name[50];
    int players;
    char bord[10];
}G;
void change(G * a, G *b){
    strcpy(a -> name, "HOKI");
    a -> players = 11;
    strcpy(a -> bord, "WHPL");
    return;
}
int main(){
    G g1 = {"cricket", 22, "ICC"};
    G g2 = {"football", 11, "FIFA"};

    G* x = &g1;
    G* y = &g2;

    change(x, y);
    y -> players = 12;
    printf("%s\n", g1.name);
    printf("%d\n", g1.players);
    printf("%s\n", g1.bord);
    printf("%s\n", g2.name);
    printf("%d\n", g2.players);
    printf("%s\n", g2.bord);
}
