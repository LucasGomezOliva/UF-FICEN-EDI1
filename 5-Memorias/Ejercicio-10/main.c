#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <math.h>
#include "matematica.h"

/*
Guardar la función anterior en un archivo llamado “matematica.c”. Generar su
correspondiente header. Realizar una rutina de prueba con diferentes valores en un
programa.
*/

#define NMAX 5

int main(int argc, char const *argv[])
{
    int32_t (*ptr_funcion)(int16_t *, int16_t);
    ptr_funcion = &Sumar_Array;

    int16_t Array[NMAX] = {1, 2, 3, 4, 5};
    int32_t resultado = Sumar_Array(Array, NMAX);

    printf("Funcion adress: \t%10p\n", ptr_funcion);

    printf("\n Resultado %d", resultado);

    exit(EXIT_SUCCESS);
}