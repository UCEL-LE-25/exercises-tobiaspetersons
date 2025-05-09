#include <stdio.h>
#include <math.h>

int main()
{
    int manaEnemigo, danoIfligido;

    printf("Ingrese el maná del enemigo: ");
    scanf("%d", &manaEnemigo);

    if (manaEnemigo >= 120 && manaEnemigo <= 300)
    {
        danoIfligido = roundf(manaEnemigo*0.15 + 40);

    }
    else
    {
        printf("El mana del enemigo debe ser entre 120 y 300 puntos.");
    }

    if (danoIfligido > 80)
    {
        printf("Daño total: %d. CRITICAL HIT.", danoIfligido);
    }
    else
    {
        printf("Daño total: %d. NORMAL HIT.", danoIfligido);
    }
    


    

    


}