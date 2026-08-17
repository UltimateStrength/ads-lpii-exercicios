#include <stdio.h>

// m[i][j] = 1 pra todo elemento, independente de i e j
// caso mais simples: nenhuma condição, só preenchimento fixo

#define LINHAS 4
#define COLUNAS 5

int main() {
    int m[LINHAS][COLUNAS];
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            m[i][j] = 1;
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}