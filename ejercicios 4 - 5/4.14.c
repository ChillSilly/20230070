#include <stdio.h>

void Rango(float); /* Prototipo de función. */
int RA1 = 0, RA2 = 0, RA3 = 0, RA4 = 0, RA5 = 0; /* Variables globales de tipo entero. */

int main(void)
{
    float CAL;
    printf("Ingresa la calificación del alumno (-1 para terminar): ");
    scanf("%f", &CAL);
    while (CAL != -1)
    {
        Rango(CAL);
        printf("Ingresa la siguiente calificación del alumno (-1 para terminar): ");
        scanf("%f", &CAL);
    }
    printf("0..3.99 = %d\n", RA1);
    printf("4..5.99 = %d\n", RA2);
    printf("6..7.99 = %d\n", RA3);
    printf("8..8.99 = %d\n", RA4);
    printf("9..10   = %d\n", RA5);
    return 0;
}

void Rango(float VAL)
{
    if (VAL < 4)
        RA1++;
    else if (VAL < 6)
        RA2++;
    else if (VAL < 8)
        RA3++;
    else if (VAL < 9)
        RA4++;
    else
        RA5++;
}
