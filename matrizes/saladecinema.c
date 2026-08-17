# include <stdio.h>

/*
1) Uma sala de cinema é composta por 10 linhas e 20 colunas

    A) Montar uma rotina para inicializar a matriz
    B) Desenvolver uma rotina para mostrar os assentos da sala de cinema
    C) Desenvolver a rotina para reservar o assento

    Obs.: só é possivel reservar o assento se ele estiver vazio ou seja com zero, caso esteja ocupado marcado com 1, avisar que não pode ser eita a reserva e pedir outro assento

    D) contar quantos lugares estão ocupados e quantos estão livres

    E) montar um menu de escolha onde:
        1 - inicializar sala
        2 - visualizar sala de cinema
        3 - reservar lugares
        4 - contabilizar sala
        5 - sair
*/

# define rows 10
# define columns 20

int main () {

    // la matriz
    char lasCaderas[rows][columns];

    // variabiles hehe
    int option=0;

    for(int i = 0;i<rows;i++) {
        for(int j = 0;j<columns;j++) {
            lasCaderas[i][j] = '-';
        }
    }

    while(option<=0 | option>=6) {

        printf("\n");
        printf("=============================================");
        printf("\n\n");

        printf("Escolha entre as seguintes opcoes");
        printf("\n\n");
        printf("1 - inicializar sala\n2 - visualizar sala de cinema\n3 - reservar lugares\n4 - contabilizar sala\n5 - sair");

        printf("\n\n");
        printf("=============================================");
        
        printf("\n\n");
        printf("resposta: ");
        
        scanf("%i", &option);

        if(option<=0 | option>=6) {
            printf("\n\n");
            printf("Opcao invalida!");
            printf("\n\n");
        }    
        
        if(option==1) { // 1 - inicializar sala
            printf("\n\n");
            printf("=============================================");
            printf("\n\n");
            
            for(int i = 0;i<rows;i++) {
                for(int j = 0;j<columns;j++) {
                    lasCaderas[i][j] = '-';

            }

            printf("Sala iniciada!");

        }
            option=0;
            
        } else if(option==2) { // 2 - visualizar sala de cinema
            printf("\n\n");
            printf("=Sala========================================");
            printf("\n\n");
            
            for(int i = 0;i<rows;i++) {
                for(int j = 0;j<columns;j++) {
                    printf("%t %c", lasCaderas[i][j]);

            }
            printf("\n");
        
        }
            option=0;
        
        } else if(option==3) { // 3 - reservar lugares
            int lugarcoluna=-1, lugarlinha=-1;

            printf("\n\n");
            printf("Reserva======================================");
            printf("\n\n");

            while(lugarcoluna==-1 || lugarcoluna>20) {
                printf("Para reservar primeiro defina a coluna de cadeiras\n\n");
                printf("resposta: ");
                scanf("%i", &lugarcoluna);

                if(lugarcoluna==-1 || lugarcoluna>20) {
                    printf("\nesta coluna nao existe na sala");

                }
            }

            while(lugarlinha==-1 || lugarlinha>10) {
                printf("\nagora em seguida defina a linha que se encontra a cadeira\n\n");
                printf("resposta: ");
                scanf("%i", &lugarlinha);

                if(lugarlinha==-1 || lugarlinha>10) {
                    printf("\nesta linha nao existe na sala");

                }

                if(lasCaderas[lugarlinha][lugarcoluna]=='-') {
                    lasCaderas[lugarlinha][lugarcoluna] = '/';
                    printf("\nlugar definido na coluna: %i e linha %i", lugarcoluna, lugarlinha);
                    
                } else {
                    printf("\neste lugar ja foi escolhido");
                    lugarcoluna = -1;
                    lugarlinha = -1;

                }

            }
            
            option=0;
        
        } else if(option==4) { // 4 - contabilizar sala
            printf("\n\n");
            printf("=============================================");
            printf("\n\n");
            
            option=0;
        
        } else { // op = 5; // 5 - sair
            printf("\n\n");
            printf("=============================================");
            printf("\n\n");
            
            printf("Fechando...");
        
        }

    }
    

}