#include <stdio.h>
#include <string.h>

void main(){
    char nombre[20];
    char apellido[20];

    printf("Ingrese su nombre: ");
    scanf("%s", nombre);
    printf("Ingrese su apellido: ");
    scanf("%s", apellido);

    char nombreCompleto[41]; // Asegúrate de que haya suficiente espacio para el nombre, el apellido, el espacio entre ellos y el carácter nulo de terminación
    strcpy(nombreCompleto, nombre); // Copia el nombre al nombreCompleto
    strcat(nombreCompleto, " "); // Añade un espacio
    strcat(nombreCompleto, apellido); // Añade el apellido

    printf("Su nombre completo es: %s", nombreCompleto);
}