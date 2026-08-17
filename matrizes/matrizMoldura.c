#include <stdio.h>

/*
1 1 1 1 1
1 0 0 0 1
1 0 0 0 1
1 1 1 1 1
*/

#define LINHAS 4
#define COLUNAS 5

int main() {
    int m[LINHAS][COLUNAS];
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            int borda = (i == 0 || i == LINHAS - 1 || j == 0 || j == COLUNAS - 1);
            m[i][j] = borda ? 1 : 0;
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
