//Leer una frase y decir cuantas letras tiene
//Al igual mostrarla en mayúscula.

#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char frase[100];
    int cantidad;
    printf("Dime una frase: ");
    scanf(" %[^\n]", frase);
    cantidad = strlen(frase);
    printf("La frase %s tiene %i", frase, cantidad);
    return 0;
}
