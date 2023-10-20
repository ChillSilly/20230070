#include <stdio.h>

int f1(void);
int f2(void);
int f3(void);
int f4(void);

int K = 5; /* Variable global. */

int main(void)
{
    int I;
    for (I = 1; I <= 4; I++)
    {
        printf("\n\nEl resultado de la función f1 es: %d", f1());
        printf("\nEl resultado de la función f2 es: %d", f2());
        printf("\nEl resultado de la función f3 es: %d", f3());
        printf("\nEl resultado de la función f4 es: %d", f4());
    }
    return 0;
}

int f1(void)
{
    K *= K; /* La función f1 utiliza la variable global K. */
    return K;
}

int f2(void)
{
    int K = 3;
    K++; /* La función f2 utiliza una variable local K. */
    return K;
}

int f3(void)
{
    static int K = 6;
    K += 3; /* La función f3 utiliza una variable estática local K. */
    return K;
}

int f4(void)
{
    int K = 4;
    K = K + K; /* La función f4 utiliza dos variables con el mismo nombre: local y global. */
    return K;
}
