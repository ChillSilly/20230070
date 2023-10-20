#include <stdio.h>

/* Prototipo de función. El parámetro es de tipo entero y por referencia. */
void f1(int *);

int main(void)
{
    int I, K = 4;
    for (I = 1; I <= 3; I++)
    {
        printf("\n\nValor de K antes de llamar a la función: %d", ++K);
        f1(&K);
        printf("\nValor de K después de llamar a la función: %d", K);
        /* Llamada a la función f1. Se pasa la dirección de la variable K. */
    }
    return 0;  /* Agregado 'return 0;' para indicar una salida exitosa. */
}

/* La función f1 recibe un parámetro por referencia. */
/* Cada vez que el parámetro se utiliza en la función debe ir precedido por el operador de indirección. */
void f1(int *R)
{
    *R += *R;
}
