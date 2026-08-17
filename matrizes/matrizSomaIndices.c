#include <stdio.h>

/*
0 1 2 3 4
1 2 3 4 5
2 3 4 5 6
*/

#define LINHAS 4
#define COLUNAS 5

int main() {
    int m[LINHAS][COLUNAS];
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            m[i][j] = i + j;
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}
