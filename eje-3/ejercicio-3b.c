#include <stdio.h>
#include <string.h> // Add this line to import the necessary library
#define TAMA 50

void main(){
    char nombreCompleto[TAMA];
    char nombreCompacto[TAMA];
    int i, j = 0;

    printf("Ingrese su nombre completo: ");
    gets(nombreCompleto);

    for(i = 0; i < TAMA; i++)
    {
        if(nombreCompleto[i] != ' ')
        {
            nombreCompacto[j] = nombreCompleto[i];
            j++;
        }
        if(nombreCompleto[i] == '\0')
        {
            nombreCompacto[j] = '.';
            break;
        }
    }

    printf("Su nombre compacto es: %s", nombreCompacto);
}