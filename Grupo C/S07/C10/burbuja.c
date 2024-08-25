#include <stdio.h>
#include <cs50.h>

int main()
{

    int n = get_int("Ingrese la cantidad de numeros en el arreglo: ");
    int lista[n];
    for (int i = 0; i < n; i++)
    {
        lista[i] = get_int("Ingrese el elemento en la posicion %d en el arreglo: \n", i);
    }
    int objetivo = get_int("Ingrese el numero a buscar: ");
    int largo = sizeof(lista) / sizeof(lista[0]);
    int izquierda = 0;
    int derecha = largo - 1;
    int medio;
    int encontrado = 0;

    while (izquierda <= derecha)
    {
        medio = (izquierda + derecha) / 2;
        if (lista[medio] == objetivo)
        {
            printf("El elemento %d se encuentra en el índice %d\n", objetivo, medio);
            encontrado = 1;
            break;
        }
        else if (lista[medio] < objetivo)
        {
            izquierda = medio + 1;
        }
        else
        {
            derecha = medio - 1;
        }
    }

    if (!encontrado)
    {
        printf("El elemento %d no se encuentra en la lista\n", objetivo);
    }

    return 0;
}
