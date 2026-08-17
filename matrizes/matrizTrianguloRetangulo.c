
#include <stdio.h>

/*
ex 8
1 0 0 0
1 1 0 0
1 1 1 0
*/

#define LINHAS 4
#define COLUNAS 5

int main() {
    int m[LINHAS][COLUNAS];
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            m[i][j] = (j <= i) ? 1 : 0;
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
