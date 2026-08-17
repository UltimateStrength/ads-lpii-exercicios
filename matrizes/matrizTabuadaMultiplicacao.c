#include <stdio.h>

/*
0 0 0 0 0
0 1 2 3 4
0 2 4 6 8
0 3 6 9 12
0 4 8 12 16
*/

#define LINHAS 4
#define COLUNAS 5

int main() {
    int m[LINHAS][COLUNAS];
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            m[i][j] = i * j;
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
