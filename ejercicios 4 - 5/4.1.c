#include <stdio.h>

int cubo(void); /* Prototipo de función. */
int I;           /* Variable global. */

int main(void)
{
    int CUB;
    
    for (I = 1; I <= 10; I++)
    {
        CUB = cubo();
        printf("\nEl cubo de %d es: %d", I, CUB);
    }

    return 0;
}

int cubo(void) /* Llamada a la función cubo. */
{
    /* Declaración de la función. */
    /* La función calcula el cubo de la variable global I. */
    return (I * I * I);
}
