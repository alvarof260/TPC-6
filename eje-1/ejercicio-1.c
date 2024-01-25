#include <stdio.h>
#include <stdlib.h>
#define TAMA 15
#define MINRANGO 10
#define MAXRANGO 350

void cargarArreglo(int arreglo[], int tama, int num1, int num2);
void mostrarArreglo(int arreglo[], int tama);
int buscarMayor(int arreglo[], int tama); 
int mostrarPromedio(int arreglo[], int tama); 

void main(){
    srand(time(NULL));
    int numeros[TAMA];
    cargarArreglo(numeros, TAMA, MINRANGO, MAXRANGO);
    printf("Los numeros generados son: \n");
    mostrarArreglo(numeros, TAMA);
    printf("\nEl mayor numero es: %d", buscarMayor(numeros, TAMA));
    printf("\nEl promedio de los numeros en posiciones impares es: %d", mostrarPromedio(numeros, TAMA));
}

void cargarArreglo(int arreglo[], int tama, int num1, int num2){
    for(int i = 0; i < tama; i++){
        int numero = rand() % (num2 - num1 + 1) + num1;
        if (numero >= 300)
        {
            printf("Ingrese un numero: ");
            scanf("%d", &numero);
        }
        
        arreglo[i] = numero;
    }
}

void mostrarArreglo(int arreglo[], int tama){
    for(int i = 0; i < tama; i++){
        printf("%d ", arreglo[i]);
    }
}

int buscarMayor(int arreglo[], int tama){
    int mayor = arreglo[0];
    for(int i = 0; i < tama;i++){
        if(arreglo[i] > mayor){
            mayor = arreglo[i];
        }
    }
    return mayor;
}

int mostrarPromedio(int arreglo[], int tama){
    int suma = 0;
    int posicionesImpares = 0;
    for(int i = 0; i < tama; i++){
        if(i % 2 != 0){
            arreglo[i] += 1;
            suma += arreglo[i];
            printf("\n%d en la posicion %d", arreglo[i], i);
            posicionesImpares += 1;
        }
    }

    return suma / posicionesImpares;
}