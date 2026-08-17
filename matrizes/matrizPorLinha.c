#include <stdio.h>

// m[i][j] = i -> toda coluna repete o mesmo valor (0000 1111 2222 3333 4444)
// é a transposta do 01_valores_por_coluna.c: lá o valor variava na
// horizontal (linha fixa), aqui varia na vertical (coluna fixa)

#define LINHAS 5
#define COLUNAS 4

int main() {
    int m[LINHAS][COLUNAS];
    int i, j;

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            m[i][j] = i;
            printf("\t%d", m[i][j]);
        }
        printf("\n");
    }

    return 0;
}