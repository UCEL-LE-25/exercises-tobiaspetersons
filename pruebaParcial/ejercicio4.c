#include <stdio.h>
#define PRECIO_TABLA 50
#define PRECIO_CLAVO 10
#define PRECIO_SOGA 75

struct material
{
    char nombre[50];
    int precio;
};

struct material tabla;
struct material clavo; 
struct material soga;


int main()
{
    int monedas, total, monedasSobrantes;
    tabla.precio = PRECIO_TABLA;
    clavo.precio = PRECIO_CLAVO;
    soga.precio = PRECIO_SOGA;

    printf("Ingrese la cantidad de monedas que tiene: ");
    scanf("%d", &monedas);
    
    total = (2*(tabla.precio) + 4*(clavo.precio) + soga.precio);

    if (monedas >= 100 && monedas <= 300)
    {
        if (monedas >= total)
        {
            monedasSobrantes = (monedas - total);
            printf("Pudo comprar todos los materiales.\n");
            printf("Monedas iniciales: %d\n", monedas);
            printf("Monedas sobrantes: %d\n", monedasSobrantes);
        }
        else
        {
            printf("No pudo comprar todos los materiales.\n");
            if (monedas >= soga.precio)
            {
                monedasSobrantes = (monedas - soga.precio);
                printf("Pudo comprar la soga.\n");
                printf("Monedas iniciales: %d\n", monedas);
                printf("Monedas sobrantes: %d\n", monedasSobrantes);
            }
            else
            {
                printf("No tiene monedas suficientes ni para la soga.\n");
            }
        }
        return 0;
    }
    }
    
    


}