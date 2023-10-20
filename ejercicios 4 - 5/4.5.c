#include <stdio.h>

/* Prototipo de función. El parámetro es de tipo entero. */
int cubo(int);

int main(void)
{
    int I;
    for (I = 1; I <= 10; I++)
        printf("\nEl cubo de %d es: %d", I, cubo(I));
    /* Llamada a la función cubo. El paso del parámetro es por valor. */
    return 0;  /* Agregado 'return 0;' para indicar una salida exitosa. */
}

/* K es un parámetro por valor de tipo entero. */
/* La función calcula el cubo del parámetro K. */
int cubo(int K)
{
    return (K * K * K);
}
