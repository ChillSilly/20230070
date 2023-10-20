#include <stdio.h>

int a, b, c, d;  /* Variables globales. */

void funcion1(int *, int *);
int funcion2(int, int *);

int main(void)
{
    int aa;      /* Nota que aa es una variable local. */
    aa = 1;       /* Se asigna un valor a la variable local aa. */
    b = 2;       /* Se asignan valores a las variables globales b, c, y d. */
    c = 3;
    d = 4;
    printf("\n%d %d %d %d", aa, b, c, d);
    funcion1(&b, &c);
    printf("\n%d %d %d %d", aa, b, c, d);
    aa = funcion2(c, &d);
    printf("\n%d %d %d %d", aa, b, c, d);
    return 0;  /* Agregado 'return 0;' para indicar una salida exitosa. */
}

void funcion1(int *b, int *c)
{
    int dd;
    a = 5;       /* Observa que se hace referencia a la variable global a. */
    dd = 3;      /* Nota que se hace referencia a la variable local dd.  */
    (*b)++;
    (*c) += 2;
    printf("\n%d %d %d %d", a, *b, *c, dd);
}

int funcion2(int c, int *d)
{
    int bb;
    a++;
    bb = 7;
    c += 3;
    (*d) += 2;
    printf("\n%d %d %d %d", a, bb, c, *d);
    return c;
}
