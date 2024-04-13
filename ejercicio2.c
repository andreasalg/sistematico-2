/*Leer un numero e imprimir el cuadrado del antecesor de dicho numero*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{

    int num, antecesor, cuadradoantecesor;

    printf("Ingrese un numero \n");
    scanf("%i" , &num);

    /*Definir antecesor*/

    antecesor= num-1;

    /*Cuadrado del antecesor*/

    cuadradoantecesor= pow(antecesor, 2);

    /*Salida*/

    printf("El antecesor de %i elevado al cuadrado es %i", num, cuadradoantecesor);

return 0;

}