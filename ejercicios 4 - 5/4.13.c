#include <stdio.h>
#include <math.h>

void parimp(int, int *, int *); /* Prototipo de función. */

int main(void)
{
    int I, N, NUM, PAR = 0, IMP = 0;
    printf("Ingresa el número de datos: ");
    scanf("%d", &N);
    for (I = 1; I <= N; I++)
    {
        printf("Ingresa el número %d:", I);
        scanf("%d", &NUM);
        parimp(NUM, &PAR, &IMP);
    }
    printf("Número de pares: %d\n", PAR);
    printf("Número de impares: %d\n", IMP);
    return 0;
}

void parimp(int NUM, int *P, int *I)
{
    if (NUM % 2 == 0)
        (*P)++;
    else
        (*I)++;
}
