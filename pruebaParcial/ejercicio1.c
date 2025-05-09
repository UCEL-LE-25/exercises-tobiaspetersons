#include <stdio.h>
// Incluiria la libreria stdbool.h para poder manejar booleanos.
#include <stdbool.h>

int main()
{
    int vida;
    float escudo = 25; 
    bool tienePocion = true;

    // Nunca se inicializo la variable vida, asi que cuando se tenga que leer no va a poder.
    printf("Ingrese la vida del jugador: ");
    scanf("%d", vida);

    if (vida == 100 && escudo > 0)
    // A los if ,else if y else le faltaban los corchetes.
    {
        printf("Jugador con vida y escudo\n");
    }
    else if (vida > 0 || tienePocion)
    {
        // A este printf le faltaba la f.
        printf("Jugador herido pero con posibilidad de curarse.");
    }
    else if (vida <= 0)
    {
        printf("Jugador muerto.");
    }
    else
    {
        // Al printf, para mostrar la vida, le faltaba el %d y pasarle la variable a mostrar.
        printf("Estado desconocido: %d", vida);
    }

    // Al return le falto el 0.
    return 0;
}