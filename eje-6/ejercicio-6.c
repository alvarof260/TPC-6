#include <stdio.h>
#include <stdlib.h>
#define INTENTOS 5
#define TAMA 4

void main(){
    srand(time(NULL));
    char mapa[TAMA][TAMA];
    int intentos = INTENTOS;
    int fila, columna;
    int tesoro = 0;
    int vacio = 0;

    fila = rand() % TAMA;
    columna = rand() % TAMA;
    mapa[fila][columna] = 'X';

    for(int i = 0; i < TAMA; i++){
        for(int j = 0; j < TAMA; j++){
            if(mapa[i][j] != 'X'){
                mapa[i][j] = '-';
            }
        }
    }

    printf("El mapa es 4x4: \n");

    while (intentos > 0)
    {
        printf("Ingresa una cordenada: ");
        scanf("%d %d", &fila, &columna);

        if(mapa[fila][columna] == 'X'){
            printf("Ganaste!\n");
            break;
        } else {
            intentos--;
            printf("Intentos restantes: %d\n", intentos);
        }

        if(intentos == 0){
            printf("Perdiste!\n");
            for(int i = 0; i < TAMA; i++){
                for(int j = 0; j < TAMA; j++){
                    printf("%c ", mapa[i][j]);
                }
                printf("\n");
            }
        }
    }
    

}