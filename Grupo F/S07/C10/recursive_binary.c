#include <cs50.h>
#include <stdio.h>

int busqueda_binaria(int arreglo[], int izquierda, int derecha, int elemento);

int main(void)
{
    int arreglo[] = {2, 3, 4, 10, 40};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    int elemento = 2;

    int resultado = busqueda_binaria(arreglo, 0, n - 1, elemento);
    if (resultado == -1)
    {
        printf("El elemento no esta presente en el arreglo\n");
    }
    else
    {
        printf("El elemento %d esta presente en el index: %d\n", elemento, resultado);
    }

    return 0;
}

int busqueda_binaria(int arreglo[], int izquierda, int derecha, int elemento)
{

        int centro = izquierda + (derecha - izquierda) / 2;

        // Revisa si elemento esta presente en centro
        if (arreglo[centro] == elemento)
        {
            return centro;
        }

        if (arreglo[centro] > elemento)
        {
            // Si se cumple, ignorar parte izquierda
            return busqueda_binaria(arreglo, izquierda - 1, derecha, elemento);
        }
        else
        {
            // Si no se cumple, ignorar parte derecha
            return busqueda_binaria(arreglo, izquierda, derecha + 1, elemento);
        }


    return -1;
}
