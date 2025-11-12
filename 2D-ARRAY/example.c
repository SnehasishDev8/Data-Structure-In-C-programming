#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 3, cols = 2;
    int (*arr)[cols] = malloc(rows * cols * sizeof(int));
    // if (!arr) { perror("malloc"); return 1; }

    /* write elements */
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            arr[i][j] = i * cols + j + 1;

    /* use elements */
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

    free(arr);
    return 0;
}