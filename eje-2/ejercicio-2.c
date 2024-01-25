#include <stdio.h>
#include <ctype.h>
#include <string.h>

int verifyPassword(char password[]);

void main()
{
    char password[9];
    char password2[9];
    printf("Ingrese su password: ");
    scanf("%s", password);
    if(verifyPassword(password)){
        printf("Ingrese su password nuevamente: ");
        scanf("%s", password2);
        if(strcmp(password, password2) == 0){
            printf("Password correcto");
        }else{
            printf("Password incorrecto");
        }
    } else {
        printf("Password no cumple los requisitos");
    }
}

int verifyPassword(char password[])
{
    int i = 0;
    int tieneMayuscula = 0;
    int tieneMinuscula = 0;
    int tieneNumero = 0;
    while (password[i] != '\0')
    {
        if (isupper(password[i]))
        {
            tieneMayuscula = 1;
        }
        if (islower(password[i]))
        {
            tieneMinuscula = 1;
        }
        if (isdigit(password[i]))
        {
            tieneNumero = 1;
        }
        i++;
    }
    if (tieneMayuscula && tieneMinuscula && tieneNumero)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
