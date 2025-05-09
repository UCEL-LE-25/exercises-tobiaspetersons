#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));

    int flechas[10], numeroAleatorio, acertaron = 0, fallaron = 0;

    for (int i = 0; i < 10; i++)
    {
        numeroAleatorio = rand() % (100 - 0 + 1) + 0;
        if (numeroAleatorio >= 60) 
        { 
            flechas[i] = 1;
            acertaron++;
        } 
        else 
        {
            flechas[i] = 0;
            fallaron++;
        }
    }
    printf ("\nFlechas acertadas: %d\nFlechas falladas: %d\n", acertaron, fallaron);
    printf("\nArray final (flechas): ");
    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
            printf("%d", flechas[i]);
        else
            printf("%d, ", flechas[i]);
    }

    return 0;
}
