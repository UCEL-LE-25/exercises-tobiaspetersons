#include <stdio.h>
#include "funciones.h"

void ingresarRecursos(int agua[REGION][DIA], int alimentos[REGION][DIA], int medicina[REGION][DIA])
{
    for (int i = 0; i < REGION; i++) 
    {
        for (int j = 0; j < DIA; j++)
        {
            printf("Ingrese la cantidad de agua para la región %d, día %d: ", i + 1, j + 1);
            scanf("%d", &agua[i][j]); 

            printf("Ingrese la cantidad de alimentos para la región %d, día %d: ", i + 1, j + 1);
            scanf("%d", &alimentos[i][j]); 

            printf("Ingrese la cantidad de medicinas para la región %d, día %d: ", i + 1, j + 1);
            scanf("%d", &medicina[i][j]); 
        }
    }
    printf("Datos ingresados correctamente.\n");
}

