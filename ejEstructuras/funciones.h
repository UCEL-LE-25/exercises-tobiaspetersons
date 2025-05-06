#pragma once
#define MAX_ESTUDIANTES 100

typedef struct {
    char nombre[50];
    int edad;
    float notaFinal;
} Estudiante;

void agregarEstudiante(Estudiante estudiantes[], int* contador);
void mostrarEstudiantes(Estudiante estudiantes[], int* contador);
void calcularPromedio(Estudiante estudiantes[], int* contador);