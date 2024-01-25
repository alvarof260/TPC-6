#include <stdio.h>

void main(){
    char nombre[20];
    char apellido[20];
    char nombreCompleto[40];

    printf("Ingrese su nombre: ");
    gets(nombre);
    printf("Ingrese su apellido: ");
    gets(apellido);
    
    printf("Su nombre completo es: %s, %s", nombre, apellido);
}