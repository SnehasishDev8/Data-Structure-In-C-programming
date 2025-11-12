#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *ptr = (char*)malloc(40 * sizeof(char));
    scanf("%[^\n]s",ptr);
    int i = strlen(ptr);
    // while(*(ptr + i) != '\0'){
    //     i++;
    // }
    char *ptr2 = (char*)malloc((i + 1) * sizeof(char));
    // int k = 0;
    // while(*(ptr + k) != '\0'){
    //     *(ptr2 + k) = *(ptr + k);
    //     k++;
    // }
    strcpy(ptr2, ptr);
    puts(ptr2);
    free(ptr);
    free(ptr2);
}
