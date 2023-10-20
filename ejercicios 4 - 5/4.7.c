#include <stdio.h>

/* Prototipo de función. El parámetro es por valor y de tipo entero. */
int f1(int);

int main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la función: %d", ++K);
        K = f1(K);
        printf("\nValor de K después de llamar a la función: %d", K);
        /* Llamada a la función f1. Se pasa una copia de la variable K. */
    }
    return 0;  /* Agregado 'return 0;' para indicar una salida exitosa. */
}

int f1(int R)
{
    R += R;
    return R;
}
