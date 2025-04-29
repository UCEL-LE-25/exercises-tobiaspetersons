#include <stdio.h>
#include "reportes.h"

void calcularMayor(int agua[REGION][DIA], int alimentos[REGION][DIA], int medicina[REGION][DIA])
{
    int totalAgua = 0, totalAlimentos = 0, totalMedicina = 0;

    for (int i = 0; i < REGION; i++) {
        for (int j = 0; j < DIA; j++) {
            totalAgua += agua[i][j];
            totalAlimentos += alimentos[i][j];
            totalMedicina += medicina[i][j];
        }
    }

    if (totalAgua >= totalAlimentos && totalAgua >= totalMedicina) 
    {
        printf("El recurso con mayor distribucion es el agua, con %d recursos.\n", totalAgua);
    } 
    else if (totalAlimentos >= totalAgua && totalAlimentos >= totalMedicina) 
    {
        printf("El recurso con mayor distribucion son los alimentos, con %d recursos.\n", totalAlimentos);
    } 
    else 
    {
        printf("El recurso con mayor distribucion es la medicina, con %d recursos.\n", totalMedicina);
    }
}

void calcularMenor(int agua[REGION][DIA], int alimentos[REGION][DIA], int medicina[REGION][DIA])
{
    int totalAgua = 0, totalAlimentos = 0, totalMedicina = 0;

    for (int i = 0; i < REGION; i++) {
        for (int j = 0; j < DIA; j++) {
            totalAgua += agua[i][j];
            totalAlimentos += alimentos[i][j];
            totalMedicina += medicina[i][j];
        }
    }

    if (totalAgua <= totalAlimentos && totalAgua <= totalMedicina) 
    {
        printf("El recurso con menor distribucion es el agua, con %d recursos.\n", totalAgua);
    } 
    else if (totalAlimentos <= totalAgua && totalAlimentos <= totalMedicina) 
    {
        printf("El recurso con menor distribucion son los alimentos, con %d recursos.\n", totalAlimentos);
    } 
    else 
    {
        printf("El recurso con menor distribucion es la medicina, con %d recursos.\n", totalMedicina);
    }
}

void calcularPromedio(int agua[REGION][DIA], int alimentos[REGION][DIA], int medicina[REGION][DIA])
{   
    int totalAgua = 0, totalAlimentos = 0, totalMedicina = 0;
    for (int i = 0; i < REGION; i++) {
        for (int j = 0; j < DIA; j++) {
            totalAgua += agua[i][j];
            totalAlimentos += alimentos[i][j];
            totalMedicina += medicina[i][j];
        }
    }

    printf("Promedio de agua distribuida por dia: %d\n", (totalAgua / DIA));
    printf("Promedio de alimentos distribuidos por dia: %d\n", (totalAlimentos / DIA));
    printf("Promedio de medicina distribuida por dia: %d\n", (totalMedicina / DIA));
}