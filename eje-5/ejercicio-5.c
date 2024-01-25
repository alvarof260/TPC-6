#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define INTENTOS 3
#define TAMA 50

void main()
{
    char palabra[TAMA];
    char palabraOculta[TAMA];
    int intentos = INTENTOS;
    char letra;
    int palabraNoEncontrada = 0;
    int acerto = 0;
    printf("Ingrese una palabra: ");
    gets(palabra);

    for (int i = 0; i < strlen(palabra); i++)
    {
        palabraOculta[i] = '-';
    }
    printf("%s\n", palabraOculta);

    while (intentos > 0)
    {
        printf("Ingrese una letra: ");
        scanf(" %c", &letra);
        for (int i = 0; i < strlen(palabra); i++)
        {
            tolower(letra);
            tolower(palabra[i]);
            if (palabra[i] == letra)
            {
                palabraOculta[i] = letra;
                acerto = 1;
            }
            if (i == strlen(palabra) - 1 && acerto == 0)
            {
                intentos--;
            }
            if (palabraOculta[i] == '-')
            {
                palabraNoEncontrada++;
            }
            
        }
        if(palabraNoEncontrada == 0){
            printf("Ganaste!\n");
            break;
        }
        palabraNoEncontrada = 0;
        printf("%s\n", palabraOculta);
        printf("Intentos restantes: %d\n", intentos);
    }

    printf("%s\n", palabraOculta);
}