#include <stdio.h>
#include <string.h>
#define FILAS 3
#define COLUMNAS 3

struct Producto
{
    char nombre[50];
    int precioU;
    int cantMinima;
    int stock;
};

int main()
{
    int cantProductos = 1;
    int costoTotal = 0;
    struct Producto productos[FILAS][COLUMNAS] = {
        {
            {"Martillo", 150, 1, 30},
            {"Destornillador", 80, 2, 50},
            {"Alicate", 120, 7, 40}
        },
        {
            {"Serrucho", 200, 3, 30},
            {"Cinta Metrica", 60, 6, 40},
            {"Llave Inglesa", 180, 2, 40}
        },
        {
            {"Taladro", 900, 1, 10},
            {"Clavos", 20, 30, 1000},
            {"Tornillos", 15, 100, 500}
        }
    };

    do
    {
        char productoIngresado[50];
        int cantidadIngresada;
        int contador = 1;
        printf("Productos en stock: \n");
        for (int i = 0; i < FILAS; i++)
        {
            for (int j = 0; j < COLUMNAS; j++)
            {
                printf("%d. %s\n", contador, productos[i][j].nombre);
                contador++;
            }
        }
        printf("Ingrese el nombre del producto %d que desea comprar: ", cantProductos);
        scanf("%s", productoIngresado);
        printf("Ingrese la cantidad que desea del producto: ");
        scanf("%d", &cantidadIngresada);

        for (int i = 0; i < FILAS; i++)
        {
            for (int j = 0; j < COLUMNAS; j++)
            {
                if (strcmp(productoIngresado, productos[i][j].nombre) == 0)
                {
                    if (cantidadIngresada >= productos[i][j].cantMinima)
                    {
                        if (cantidadIngresada <= productos[i][j].stock)
                        {
                            costoTotal += productos[i][j].precioU * cantidadIngresada;
                            productos[i][j].stock -= cantidadIngresada;
                            cantProductos++;
                            printf("%s ingresado al pedido.\n", productos[i][j].nombre);
                        }
                        else
                        {
                            printf("No hay suficiente stock disponible.\n");
                        }
                    }
                    else
                    {
                        printf("Debe ingresar al menos la cantidad mínima permitida.\n");
                    }
                }
            } 
        }
        
    } while (cantProductos < 4);

    printf("El costo total de su pedido es: %d", costoTotal);
}

