#include <stdio.h>
#include <string.h>
#include "funciones.h"

void agregarEstudiante(Estudiante estudiantes[], int *contador)
{
    if (*contador >= MAX_ESTUDIANTES)
    {
        printf("No se pueden agregar mas estudiantes. Limite alcanzado.\n");
    }

    printf("Ingrese el nombre del estudiante: ");
    scanf(" %[^\n]", estudiantes[*contador].nombre); 
    printf("Ingrese la edad del estudiante: ");
    scanf("%d", &estudiantes[*contador].edad);
    printf("Ingrese la nota final del estudiante: ");
    scanf("%f", &estudiantes[*contador].notaFinal);

    (*contador)++;
    printf("Estudiante agregado correctamente.");
}

void mostrarEstudiantes(Estudiante estudiantes[], int *contador)
{
    if (*contador == 0) 
    {
        printf("No hay estudiantes registrados.\n");
        return;
    }

    printf("\n--- Lista de Estudiantes ---\n");
    for (int i = 0; i < *contador; i++) { 
        printf("Estudiante %d:\n", i + 1);
        printf("Nombre: %s\n", estudiantes[i].nombre);
        printf("Edad: %d\n", estudiantes[i].edad);
        printf("Nota Final: %.2f\n", estudiantes[i].notaFinal);
    }
}

void calcularPromedio(Estudiante estudiantes[], int *contador)
{
    if (*contador == 0) 
    {
        printf("No hay estudiantes registrados para calcular el promedio.\n");
        return;
    }

    float sumaNotas = 0;
    for (int i = 0; i < *contador; i++) { 
        sumaNotas += estudiantes[i].notaFinal;
    }

    float promedio = sumaNotas / *contador; 
    printf("El promedio de las notas finales es: %.2f\n", promedio);
}