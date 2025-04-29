#include <stdio.h>
#include "reportes.h"
#include "funciones.h"

int main()
{
    int agua[REGION][DIA], alimentos[REGION][DIA], medicina[REGION][DIA];
    ingresarRecursos(agua, alimentos, medicina);
    int opcion;
    do {
        printf("Seleccione el reporte que desea generar:\n");
        printf("1. Recurso con mayor distribución total\n");
        printf("2. Recurso con menor distribución total\n");
        printf("3. Promedio de distribución para cada recurso\n");
        printf("4. Salir\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                printf("Generando reporte del recurso con mayor distribución total...\n");
                calcularMayor(agua, alimentos, medicina);
                break;
            case 2:
                printf("Generando reporte del recurso con menor distribución total...\n");
                calcularMenor(agua, alimentos, medicina);
                break;
            case 3:
                printf("Generando reporte del promedio de distribución para cada recurso...\n");
                calcularPromedio(agua, alimentos, medicina);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    } while (opcion != 4);
    
    return 0;
}
