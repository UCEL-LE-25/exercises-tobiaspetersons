#include <stdio.h>
#include "funciones.h"

int main()
{
    Estudiante estudiante[MAX_ESTUDIANTES];
    int contador = 0, opcion;

    do
    {
        printf("\n--- Menú Principal ---\n");
        printf("1. Agregar nuevo estudiante\n");
        printf("2. Mostrar todos los estudiantes registrados\n");
        printf("3. Calcular el promedio de notas\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarEstudiante(estudiante, &contador);
                break;
            case 2:
                mostrarEstudiantes(estudiante, &contador);
                break;
            case 3:
                calcularPromedio(estudiante, &contador);
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