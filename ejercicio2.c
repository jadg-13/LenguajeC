//Calcular el cuadrado de un numero par
#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    /* variables */
    int num, cuadrado;
    system("cls || clear");
    printf("Dime un numero: ");
    scanf("%i", &num);
    //Evaluar si el numero es par
    if(num%2 == 0){
        system("cls || clear");
        cuadrado = pow(num, 2);
        printf("El cuadrado de %i es %i", num, cuadrado);
    }else{
        system("cls || clear");
        printf("El numero %i no es par", num);
    }
    return 0;
}
