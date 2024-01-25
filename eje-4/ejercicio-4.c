#include <stdio.h>

void cargarMatriz(int matriz[][3], int tama);

int main(){
    int matriza[3][3], matrizb[3][3], matrizc[3][3];
    cargarMatriz(matriza, 3);
    cargarMatriz(matrizb, 3);
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            matrizc[i][j] = matriza[i][j] + matrizb[i][j];
        }
    }
    printf("La matriz a es: \n");
    for(int i = 0; i < 3; i++)
    {
        printf("|");
        for(int j = 0; j < 3; j++)
        {
            printf(" %d ", matriza[i][j]);
        }
        printf("|\n");
    }
    printf("La matriz b es: \n");
    for(int i = 0; i < 3; i++)
    {
        printf("|");
        for(int j = 0; j < 3; j++)
        {
            printf(" %d ", matrizb[i][j]);
        }
        printf("|\n");
    }
    printf("La matriz suma de a y b es: \n");
    for(int i = 0; i < 3; i++)
    {
        printf("|");
        for(int j = 0; j < 3; j++)
        {
            printf(" %d ", matrizc[i][j]);
        }
        printf("|\n");
    }
}


void cargarMatriz(int matriz[][3], int tama){
    int i, j;
    for(i = 0; i < tama; i++)
    {
        for(j = 0; j < tama;j++)
        {
            printf("Ingrese el valor de la posicion [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}