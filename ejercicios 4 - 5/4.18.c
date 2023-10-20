#include <stdio.h>
#include <math.h>

int Expresion(int, int, int); /* Prototipo de función. */

int main(void)
{
    int EXP, T = 0, P = 0, Q = 0;

    while (T < 10)
    {
        P = 0;
        while (P < 10)
        {
            Q = 0;
            while (Q < 10)
            {
                EXP = Expresion(T, P, Q);
                if (EXP < 5500)
                {
                    printf("T: %d, P: %d, Q: %d, Resultado: %d\n", T, P, Q, EXP);
                }
                Q++;
            }
            P++;
        }
        T++;
    }

    return 0;
}

int Expresion(int T, int P, int Q)
{
    int RES;
    RES = 15 * pow(T, 4) + 12 * pow(P, 5) + 9 * pow(Q, 6);
    return RES;
}
